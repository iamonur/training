# Lambda İfadeleri

Lambda ifadeleri fonksiyon objelerini belirtmek için kullanılır. Lambdaların ana kullanımı bir fonksiyonun gerçekleştirmesi gereken küçük ara eylemleri fonksiyonlara inject edebilmektir.

Syntax olarak:
***\[Capture listesi](parametre listesi) {fonksiyon gövdesi}*** şeklinde tanımlanır.
- Capture listesinin içine lambda gövdesinde kullanılacak olan yerel değişkenler verilir.
  - Pass-by-value için [=değişken_adı] yazılır.
  - Pass-by-reference için [&değişken_adı] yazılır.
  - Tüm değişkenler pass-by-value olsun istersek [=] yazılır.
  - Tüm değişkenler pass-by-reference olsun istersek [&] yazılır.
  - Hiç değişken vermemek için [] yazılır.



Lambda ifadeleri kullanıldıkları scope'taki yerel değişkenlere erişebilir.

## Desteklenen Versiyonlar
- gcc: 4.5
- clang: 3.1
- MSVC: 16.0(kısmi), 17.0
- nvcc: 7.0
- Intel C++: 12.0

## Önerildiği Paper

- N2550 - Lambda Expressions and Closures: Wording for Monomorphic Lambdas(Rev.4), 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2550.pdf
- N2658 - Constness of Lambda Functions (Rev. 1), 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2658.pdf
- N2927 - New wording for C++0x Lambdas (rev. 2), 2009. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2927.pdf
