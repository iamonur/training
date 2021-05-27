# Takiben Verilen Dönüş Tipleri

Return tipi önceden belli olmayan fonksiyonlar yazmak C++ 11 ile mümkün kılındı. Fonksiyonların dönüş tipleri "auto" olarak tanımlandıktan sonra, fonksiyon gövdesi ile fonksiyon imzası arasına bir expression eklemek suretiyle fonksiyonun her çağrıldığı noktada compile-time'da hesaplanması sağlanabilir.

#### Nasıl kullanılır

    auto fonksiyon_ismi(parametreler) -> bir_tip_belirten_expression {fonksiyon_gövesi}

## Desteklenen Versiyonlar

- gcc: 4.4
- clang: 2.9
- MSVC: 16.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 12.0

## Önerildiği Paper

- N2541 - New Function Declarator Syntax Wording, 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2541.htm
