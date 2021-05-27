# decltype

decltype ona verilen bir expression'ın declared type'ını dönen bir operatördür. Bu özelliğin asıl kullanım alanı trailing return type olarak kullanılıp, fonksiyonları auto return tipiyle tanımlamaktır.

**Örnek:** 
    
    template \<typename X, typename Y>
    auto add(X x, Y y) -> decltype(x + y) {
        return x + y;
    }
    add(1.0, 2);

Eğer ekstra bir parantez kullanılmadan T tipinde bir objeyle decltype çağrılırsa (decltype(a) gibi) başarıyla T türünü döner.
Ekstra bir parantez eklendiyse, decltype kullanılan ifade'ye lvalue muamelesi yapılır ve dönülen tür &T olur.

## Desteklendiği versiyonlar
- GCC: 4.3+(N2343), 4.8.1+(N3276)
- Clang: 2.9+
- MSVC: 16.0+
- Apple Clang: All
- nvcc: 7.0+
- Intel C++: 11.0+(N2343), 12.0+(N3276)

## Önerildiği paper
1. N2343 - Decltype (revision 7): proposed wording, 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2343.pdf
2. N3276 - US22/DE9 Revisited: Decltype and Call Expressions, 2011. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3276.pdf