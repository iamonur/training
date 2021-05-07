[[deprecated("Bu fonksiyona destek devam etmiyor çünkü keyfimiz öyle istedi.")]]
int foo(){
    return 1;
}

[[nodiscard]]
int foo2(){
    return 2;
}

[[noreturn]] int foo3(){//Noreturn fonksiyon return ediyor: warning
    throw "error";
    return 3;
}

int main(int argc, char** argv){
    foo();//deprecated fonksiyon, warning gelecek.
    foo2();//dönüş değeri kullanılmıyor, warning gelecek.
    foo3();
}