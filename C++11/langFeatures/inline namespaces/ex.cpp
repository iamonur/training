#include <iostream>

namespace the_library {
    inline namespace version_2 {
        void func(int){
            std::cout<<"New and improved!"<<std::endl;
        }
        void func(double){
            std::cout<<"Totally new!"<<std::endl;
        }
    }
    namespace version_1 {
        void func(int) {
            std::cout<<"Old and reliable!"<<std::endl;
        }
    }
}
using namespace the_library;
int main() {
    func(1);
    func(1.0);
    version_1::func(1);
    version_2::func(1);
    version_2::func(1.0);
}