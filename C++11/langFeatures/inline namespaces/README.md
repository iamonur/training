# Inline Namespaceler

Inline namespace mekanizması kütüphanelerin evrimleşirken versiyonlama problemlerinin çıkması üzerine geliştirilmiştir.

Bir namespace kullanılırken manual olarak eklemeden o namespace'le birlikte kullanılmaya başlanan namespacelerdir.

Namespace hiyerarşisi şu şekilde düzenlenmelidir:
- namespace {library_name}
  - inline namespace {en_güncel_versiyon}
  - namespace {başka_bir_version}

Bu şekilde yapıldığında kullanıcı kütüphaneyi kullanacağında default olarak en güncel versiyonu kullanabilir. Ancak gerektiğinde eski versiyonlara da erişimi olur.

## Desteklendiği Versiyonlar

- gcc: 4.4
- clang: 2.9
- MSVC: 19.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 14.0

## Önerildiği Paper
- N2535 - Namespace Association("inline namespace"), 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2535.htm