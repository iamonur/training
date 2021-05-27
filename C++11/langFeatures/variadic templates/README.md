# Variadic Templates
Templatelar tanımlanırken kullanılan bir ellipsis (**. . .**) bir parametre sürüsü yaratır.Bir template parametre sürüsü sıfır ya da daha fazla template argüman kabul eden bir template parametredir.
Genelde variadic template'lerle sunulan parametreler bir initializer list içerisine alınıp üzerinde işlem yapılır.

## Desteklenen Versiyonlar

- gcc: 4.3(N2242), 4.4
- clang: 2.9
- MSVC: 18.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 12.1
  
## Önerilen Paper
- N2242 - Proposed Wording for Variadic Templates, 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2242.pdf
- N2555 - Extending Variadic Template Template Parameters, 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2555.pdf
