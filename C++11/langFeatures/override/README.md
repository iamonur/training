# Explicit Virtual Overridelar

C++ 11 ile getirilen "override" anahtar kelimesi, geliştiricinin bir inherited sınıfta, ebeveyn sınıfta bulunan bir sanal fonksiyonu silerek yerine yenisini implement ettiğini gösterir. Override edilen fonksiyon virtual olarak tanımlanmış olmalıdır.

Override kelimesi kullanmadan da virtual fonksiyonlar inherit edildiğinde silerek implement edilirler. Kelime, daha çok hatalı implementasyonları engellemek içindir.

## Desteklenen Versiyonlar

- GCC: 4.7
- Clang: 2.9
- MSVC: 14.0 (kısmi), 17.0
- Apple Clang: All
- nvcc: 7.0
- Intel C++: 14.0

## Önerildiği Paper

- N2928 - Explicit Virtual Overrides, 2009. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2928.htm
- N3206 - Override control: Eliminating Attributes, 2010. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3206.htm
- N3272 - Follow-up on override control, 2011. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3272.htm