#include <iostream>

template<class T>
void swaps(T& a, T& b){
    T tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}

int main() {
    int a = 3;
    int b = 5;
    swaps<int>(a, b);
    std::cout<<a<<" "<<b<<std::endl;
}
