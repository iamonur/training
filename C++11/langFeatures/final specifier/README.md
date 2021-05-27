# Final

İki farklı uygulaması bulunan final sıfatı şu işlere yarar:
- Virtual function'lara uygulandıktan sonra, tekrar override edilmesini engeller.
- Bir derived class'a uygulandığında, o class'tan tekrar inherit edilmesini engeller.

Final kelimesi güzel bir dokümantasyon fırsatı sağlar. Aynı zamanda virtual functionlar için vtable'ları tek tek gezmesine engel olur ve bir optimizasyon sağlar.

## Desteklendiği Versiyonlar

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

