# Strongly-Typed Enums

C++ 11 ile eklenen scoped ya da strong enumlar üç ana sorunu çözüyor:

- Eski tip enumlar int'e çevrilir, bu da aslında hatalara yol açabilir.
- Eski tip enumlar kendi kapsamlarını aşar ve isim olarak kodu kirletir.
- Yeni enumların tiplerini kendimiz önden tanımlayabiliriz, bu da forward declaration'ın yolunu açar.

## Desteklenen Versiyonlar

- gcc: 4.4
- clang: 2.9
- MSVC: 17.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 13.0

## Önerildiği Paper

- N2347 - Strongly Typed Enums (revision 3), 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2347.pdf
