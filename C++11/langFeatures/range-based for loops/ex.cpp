#include <iostream>
#include <vector>
int main() {
    std::vector<int> v {1,2,3,4,5};
    for(int q : v) std::cout<<q<<std::endl;//By-value, copies elements.
    for(int& q: v) std::cout<<q<<std::endl;//By-reference, no copying.
}