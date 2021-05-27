#include <iostream>
#include <numeric>
#include <vector>
/*
Use case 1: As a container.
*/
int sum(const std::initializer_list<int> list){
    return std::accumulate(list.begin(), list.end(), 0);
}

/*int main(){
    std::cout<<sum({1,2,3,4,4});
}*/

/*
Use case 2: To initialize an object's members
*/

struct A{
    int val1, val2, val3;
    A(int a, int b, int c) : val1{a}, val2{b}, val3{c}
    {}

};
/*
int main(){
    A a = {1,2,3};
}*/

/*
Use case 3: To initialize an object's members that are classes
*/

struct B{
    A a;
    B(int a, int b, int c) : a{a,b,c}
    {}
};

int main(){
    B b = {1,2,3};
    B c{1,2,3};
}