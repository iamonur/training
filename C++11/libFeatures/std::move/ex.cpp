#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
#include <string>

int main() {
    std::string str = "Selam";
    std::vector<std::string> vec;

    vec.push_back(str);
    std::cout<<"After copy, str = "<<std::quoted(str)<<std::endl;

    vec.push_back(std::move(str));
    std::cout<<"After move, str = "<<std::quoted(str)<<std::endl;

    std::cout<<"vec[0] = "<<std::quoted(vec[0])<<std::endl<<"vec[1] = "<<std::quoted(vec[1])<<std::endl;

}