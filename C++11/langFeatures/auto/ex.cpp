#include <vector>
#include <cassert>
#include <iostream>
//trailing return type
auto sum(int x, int y) -> int {
    return x + y;
}
//auto decltype
auto sum2(int x, int y) -> decltype(x+y) {
    return x + y;
}
void auto_test(){
    std::vector<int> vec = {0,1,2,3,4,5,6};
    for(auto element: vec){
        std::cout<<element<<std::endl;
    }
}
int main(int argc, char** argv){
    auto z = sum(2,3);
    assert(z==5);

    z = sum2(3,4);
    assert(z==7);

    auto_test();
}
