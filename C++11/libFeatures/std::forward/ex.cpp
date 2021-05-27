#include <iostream>
#include <memory>
#include <utility>

template <class T, class U>
std::unique_ptr<T> make_unique_ptr(U&& u) {
    return std::unique_ptr<T>(new T(std::forward<U>(u)));
}

template <class T, class... U>
std::unique_ptr<T> make_unique_ptr(U&&... u) {
    return std::unique_ptr<T>(new T(std::forward<U>(u)...));
}

template <class T>
struct A {
    A(T&& n) {
        std::cout<<"Rvalue overload, n = "<<n<<std::endl;
    }

    A(T& n) {
        std::cout<<"Lvalue overload, n = "<<n<<std::endl;
    }
};

class B {
        A<int> a1_, a2_, a3_;
    public:
        template<class T1, class T2, class T3>
        B(T1&& t1, T2&& t2, T3&& t3) :
            a1_{std::forward<T1>(t1)},
            a2_{std::forward<T2>(t2)},
            a3_{std::forward<T3>(t3)}
        {
        }
};


int main() {
    auto pointer_1 = make_unique_ptr<A<int>>(2); //2 is an rvalue
    int i = 1;
    auto pointer_2 = make_unique_ptr<A<int>>(i); //i is an lvalue
    auto pointer_3 = make_unique_ptr<B>(2,i,3);
}