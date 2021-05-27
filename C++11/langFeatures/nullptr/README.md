# nullptr

C++11 öncesinde C'den kalma NULL macrosu kullanılıyordu. Genelde compilerlarda bu tanım 

\#define NULL (void*)0 

şeklindedir. Bu tanım ne yazık ki bir çok kusur içeriyor. Bir pointer olmasına rağmen integral tiplere çevrilebilir olması NULL'u hataya yatkın kılıyor. Bu tanım yerine std::nullptr_t tipinde ve pointerlara cast edilip integral tiplere cast edilemeyen yeni bir null üretimi gerekmiştir.

nullptr boolean dışında hiçbir integral tipe çevrilemez, bool'a çevrildiğinde değeri "false" olur.

## Destekleyen Versiyonlar

- gcc: 4.6
- clang: 2.9
- MSVC: 16.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 12.1

## Önerildiği Paper

- N2431 - A name for the null pointer: nullptr (rev. 4), 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2431.pdfride, if used, appears immediately after the declarator in the syntax of a member function declaration or a member function definition inside a class definition.

declarator virt-specifier-seq(optional) pure-specifier(optional)	(1)	
