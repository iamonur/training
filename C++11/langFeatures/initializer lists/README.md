# Initializer List

Initializer listler array-benzeri hafif containerlardır. Örneğin {1,2,3} dediğimizde std::initializer_list\<int> tipinde bir liste tutuyoruz.
Üç ana kullanımı vardır.
1. Container olarak
2. Constructor esnasında statik olmayan basit elemanları ilklendirmek için
3. Constructor esnasında üye sınıfları ilklendirmek için

## Desteklendiği Versiyonlar

- gcc: 4.4
- clang: 3.1
- MSVC: 18.0
- Apple Clang: All
- nvcc: 7.0
- Intel C++: 14.0

## Önerildiği Paper
- N2672 - Initializer List proposed wording, 2008. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2672.htm