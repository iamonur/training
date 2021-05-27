#include <array>
#include <algorithm>
#include <iostream>

int main() {
    std::array<int, 5> ar = {0, -5, -7, 1, 4};
    std::sort(ar.begin(), ar.end());
    for(int& el : ar) el *= el;
    for(int el : ar) std::cout<<el<<std::endl;
}