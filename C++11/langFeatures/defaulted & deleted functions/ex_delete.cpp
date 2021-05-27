#include <cstddef>

class A{

    public:
    #ifndef DEL_NEW
        void* operator new(std::size_t) = delete;
    #endif
};

int main(){
    A* a = new A();
}