class foo{
    int a, b, c;
public:
    foo(){
        a = 0;
        b = 0;
        c = 0;
    }
    foo(int c) : foo(){
        this->c = c;
    }
};

int main() {
    foo A = foo(3);
    foo B = foo();
}