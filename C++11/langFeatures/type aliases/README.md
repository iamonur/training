# Type Aliases

Template türlerin dile eklenmesiyle, typedef kullanımı kısıtlanmıştı. Template türleri de kolayca kullandıran type aliasları C++11'de bu yüzden eklendi.

## Çözdüğü problem/getirdiği güzellik

- Template tiplerin de kullanımını sağlar.

## Kullanımı

    template <typename T>
    using vec = std::vector<T>;
    vec<int> integer_vector;

## Desteklenen Versiyonlar

- gcc: 4.7
- clang: 3.0
- MSVC: 18.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 12.1

## Önerildiği Paper

- N2258 - Templates Aliases, 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2258.pdf