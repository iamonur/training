struct A{
    virtual void foo(int);
};

struct B : A{
    void foo(int);//Also overrides
};

struct C : A{
    void foo(int) override; //Same as above.
};

struct D : A{
    void foo(double); //Kills the base class implementation.
};

struct E : A{
    void foo(double) override;//Problem detected before.
};

int main(){

}