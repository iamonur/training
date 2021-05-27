# Constructor Delegation

Zaman zaman bir nesne yaratmak için birden fazla constructor yazmamız gerekebiliyor ve bazen bu constructorlar birbirine epey benziyor ama ne yazık ki C++11'den önce bir constructor'dan diğerinin içindeki koda erişmek mümkün değildi. Burada bizi kurtaran çözüm genelde iki constructor'da ortak olarak yapılan işleri bir methoda çıkarıp o methodu kullanmak oluyordu.
C++11 ile constructorlar artık birbirine el verebiliyor.

## Desteklendiği versiyonlar

- GCC: 4.7
- Clang: 3.0
- MSVC: 18.0
- Apple Clang: All
- nvcc: 7.0
- Intel C++: 14.0

## Önerildiği Paper

- N1986 - Delegating Constructors (revision 3), 2006: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1986.pdf