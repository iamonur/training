# auto tipi

auto tipli değişkenlerin tipleri initializerlarına bakılarak compiler tarafından belirlenir. Bir değişkene bir değer atandığında, rvalue ne tipteyse, auto tipli değişkene de o tip atanır. Eklenen yeni kütüphanelerle beraber oldukça uzayan tip isimleriyle başa çıkmak için geliştirilmiştir.

C++14'ten itibaren return typelara da uygulanabilir. C++11 için explicit olarak belirtmek ya da decltype kullanmak gerekir.

## Çözdüğü Problem

- Bizi çok uzun tip isimlerinden kurtarıyor.

## Desteklenen versiyonlar

- GCC: 4.4+
- Clang: All
- MSVC: 16.0+
- Apple Clang: All
- nvcc: 7.0+
- Intel C++: 11.0 v0.9+

## Önerildiği paper
N1984 - Deducing the type of variable from its initializer expression, 2006: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1984.pdf 