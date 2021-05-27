#include <cmath>
#include <iostream>
#include <string>

int operator "" _int(const char* str, std::size_t) {
    return std::stoi(str);
}

unsigned long long operator "" _celsToFahr(unsigned long long cels) {
    return std::llround(cels * 1.8 + 32);
}

int main() {
    std::cout<<20_celsToFahr<<std::endl;
    std::cout<<"123"_int + 1<<std::endl;
}