#include <iostream>
#include <type_traits>

template <typename X, typename Y>
auto add(X x, Y y) -> decltype(x + y){
    return x + y;
}

int main(){
    int a;
    int& b = a;
    std::cout<<std::boolalpha<<std::is_same_v<int, decltype(a)><<std::endl;
    std::cout<<std::boolalpha<<std::is_same_v<int&, decltype((a))><<std::endl;
    std::cout<<std::boolalpha<<std::is_same_v<int&, decltype(b)><<std::endl;
    std::cout<<std::boolalpha<<std::is_same_v<int&, decltype((b))><<std::endl;



    add(2.0,3);
}