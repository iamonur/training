#include <stdio.h>
void foo(int){return;}
void foo(int*){return;}


int main(){
    /*
    More than one instance of overloaded function "foo" matches the argument list.
    */
    //foo(NULL);

    foo(nullptr);//Works! Cannot work as an integral type.
}