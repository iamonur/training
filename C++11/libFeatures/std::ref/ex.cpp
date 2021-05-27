#include <functional>
#include <iostream>

void f(int& n1, int& n2, const int& n3) {
    std::cout<<"IN FUNCTION. n1: "<<n1<<" n2: "<<n2<<" n3: "<<n3<<std::endl;
    ++n1;
    ++n2;
}

int main() {
    int n1 = 0, n2 = 10, n3 = 100;

    std::function<void()> func = std::bind(f, n1, std::ref(n2), std::cref(n3));
    n1 = 10; n2 = 100; n3 = 1000;

    std::cout<<"BEF. FUNCTION. n1: "<<n1<<" n2: "<<n2<<" n3: "<<n3<<std::endl;

    func();
    --n3;

    std::cout<<"AFT. FUNCTION. n1: "<<n1<<" n2: "<<n2<<" n3: "<<n3<<std::endl;

}