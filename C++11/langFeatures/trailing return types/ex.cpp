#include <iostream>

template <typename X, typename Y>
auto add(X x, Y y) -> decltype(x + y) {
  return x + y;
}

int main() {
    std::cout<<add(1, 2)<<std::endl; // == 3
    std::cout<<add(1, 2.1)<<std::endl; // == 3.0
    std::cout<<add(1.1, 1.5)<<std::endl; // == 3.0
}