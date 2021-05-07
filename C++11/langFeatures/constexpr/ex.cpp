#include <iostream>
constexpr int square(int x) {
    return x*x;
}

int square_2(int x){
    return x*x;
}

class sqr {
        int side;
    public:
        constexpr sqr(int sd) : side{sd} { }
        constexpr int get_area() {return side*side;}
        constexpr int get_perim() {return 4*side;}
};

int main(){
    /*
    movl   $0x4,-0x4(%rbp)
    */
    int a = square(2);
    /*
    mov    $0x2,%edi
    callq  401122 <_Z8square_2i>
        push   %rbp
        mov    %rsp,%rbp
        mov    %edi,-0x4(%rbp)
        mov    -0x4(%rbp),%eax
        imul   %eax,%eax
        pop    %rbp
        retq   
    mov    %eax,-0x8(%rbp)
    */
    int b = square_2(2);

    sqr sq = sqr(3);
    std::cout<<sq.get_area()<<"~"<<sq.get_perim()<<std::endl;
}