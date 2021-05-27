#include <iostream>
#include <vector>
#include <iterator>
 
int main() {
    std::vector<int> v = { 3, 1, 4, 2, 5};

    std::cout<<"First element is: "<<*(std::begin(v))
             <<" Second element is: "<<*(std::next(std::begin(v)))
             <<" The element after the last element is: "<<*(std::end(v))
             <<" The actual last one is: "<<*(std::prev(std::end(v)))
             <<std::endl;

}