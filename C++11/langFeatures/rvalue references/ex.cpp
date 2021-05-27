#include <iostream>

void func(int&&){
    std::cout<<"Rval ref."<<std::endl;
}

void func(int&){
    std::cout<<"Lval ref."<<std::endl;
}

int main() {
  // lvalues:
  //
  int i = 42;
  i = 43; // ok, i is an lvalue
  int* p = &i; // ok, i is an lvalue
  int& foo();
  foo() = 42; // ok, foo() is an lvalue
  int* p1 = &foo(); // ok, foo() is an lvalue

  // rvalues:
  //
  int foobar();
  int j = 0;
  j = foobar(); // ok, foobar() is an rvalue
  j = 42; // ok, 42 is an rvalue

  func(foobar());
  func(foo());
}