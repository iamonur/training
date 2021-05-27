# Sağ Açılı Ayraçlar

C++ 11 öncesinde typedef satırlarında sağ açılı ayraçlar '>' arka arkaya gelemiyordu, yeni standartla beraber aralarına başka karakterler eklemeden arka arkaya açılı parantezler kapatılabiliyor.

#### Örnek:
- Öncesi:
  - typedef std::map<int, std::map<int, std::map<int, int> > > 
- Artık:
  - typedef std::map<int, std::map<int, std::map<int, int>>>

## Desteklendiği Versiyonlar

- gcc: 4.3
- Clang: All
- MSVC: 14.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 11.0

## Önerildiği Paper

- N1757 - Right Angle Brackets, 2005. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1757.html