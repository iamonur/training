class Base{
    protected:
        virtual void foo();
};

class First: Base {
    protected:
        void foo() final;
//      void bar() final; Nonvirtual function cannot be declared with 'final' modifier
};

class Second final : First {
    protected:
      void foo();
};
/*
//a 'final' class type cannot be used as a base class.
class Third : Second {

};
*/
int main() {

}