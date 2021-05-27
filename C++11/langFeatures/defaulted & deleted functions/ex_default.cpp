class A{
    public:
        A(int x);//Artık default constructor yok
#ifdef DEF_CONST
        A() = default;//Tekrar ekledik
#endif

};

int main() {
    A a;
}