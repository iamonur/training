#include <numeric>
#include <iostream>
#include <mutex>
#include <vector>
#include <future>

std::mutex m;

void foo(int i, const std::string& str) {
    std::lock_guard<std::mutex> lk(m);
    std::cout<<str<<" "<<i<<std::endl;
}

void bar(const std::string& str) {
    std::lock_guard<std::mutex> lk(m);
    std::cout<<str<<" "<<std::endl;
}

struct functor {
    int operator ()(int i) {
        std::lock_guard<std::mutex> lk(m);
        std::cout<<i<<std::endl;
        return ++i;
    }
};

template<typename iter>
int summation(iter begin, iter end) {
    auto length = end - begin;

    if(length<1000) return std::accumulate(begin, end, 0);

    iter midpoint = begin + length/2;
    auto peer = std::async(std::launch::async, summation<iter>, begin, midpoint);
    auto peer2= std::async(std::launch::async, summation<iter>, midpoint, end);
    return peer.get() + peer2.get();
}

int main() {
    std::vector<int> v(1000000, 1);
    std::cout<<"Sum is: "<<summation(v.begin(), v.end())<<std::endl;

    auto a = std::async(std::launch::async, foo, 15, "Hello, world!");
    a.wait();
    auto b = std::async(std::launch::deferred, bar, "Test");
    auto c = std::async(std::launch::async, functor(), 1);
    b.wait();
    std::cout<<c.get()<<std::endl;
}