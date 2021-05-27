# User-defined Literals

C++ 11 ile kullanıcı tarafından tanımlanmış hazır fonksiyonlar yaratmamıza yarar.

## Kullanımı

Bir literal yaratmak için şu syntax'ı uygularız:
    
    T operator "" literalIsmi (...) {...}

## Kısıtlamalar

UDL'ler şu parametrelerle çalışabilir:
- char const*
- unsigned long long
- long double
- char const*, std::size_t
- wchar_t const*, std::size_t
- char16_t const*, std::size_t
- char32_t const*, std::size_t

Return tipi herhangi bir tip olabilir.

## Desteklenen Versiyonlar

- gcc: 4.7
- clang: 3.1
- MSVC: 19.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 15.0

## Önerildiği Paper

- N2765 - User-defined Literals, 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2765.pdf