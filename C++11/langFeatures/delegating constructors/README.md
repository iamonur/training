# Constructor Delegation

Zaman zaman bir nesne yaratmak için birden fazla constructor yazmamız gerekebiliyoruz ve bazen bu constructorlar birbirine epey benziyor ama ne yazık ki C++11'den önce bir constructor'dan diğerinin içindeki koda erişmek mümkün değildi. Burada bizi kurtaran çözüm genelde iki constructor'da ortak olarak yapılan işleri bir methoda çıkarıp o methodu kullanmak oluyordu.
C++11 ile constructorlar artık birbirine el verebiliyor.
Bir örnekle anlatmak gerekirse:

## Örnek

class foo{
    int a, b, c;
public:
    foo(){
        a = 0;
        b = 0;
        c = 0;
    }
    foo(int c){
        a = 0;
        b = 0;
        this->c = c;
    }
};
//Tabii burada bir method extract ederek iş görebiliriz ancak class'ımızı daha sade tutmak adına şu da mümkün:

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

## Önemli not

Constructor delegation ile bir constructor'ın içinden başka bir constructor çağırmayı karıştırmayın. Bu şekilde yapmak size bir yerine iki nesne oluşturur!

