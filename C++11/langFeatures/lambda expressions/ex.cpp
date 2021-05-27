#include <iostream>
#include <algorithm>
#include <vector>
void prints_vector(std::vector<int> vec) {
    std::cout<<"-----------"<<std::endl;
    for(int elem : vec) {
        std::cout<<elem<<std::endl;
    }
    std::cout<<"-----------"<<std::endl;
}

int main() {
    std::vector<int> v {-5,0,9,-10,-17,20};
    prints_vector(v);

    std::sort(v.begin(), v.end());
    prints_vector(v);

    std::sort(v.begin(), v.end(), 
        [](int a, int b){return abs(a)<abs(b);}
    );
    prints_vector(v);
}
