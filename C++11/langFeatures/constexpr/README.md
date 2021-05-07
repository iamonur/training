# constexpr

Constant expressionlar compile-time'da compiler tarafından hesaplanır. Kompleks olmayan hesaplar bu şekilde yapılabilir. Bu işler için eskiden preprocessor makroları kullanılıyordu ve bu makrolar aslında C++ dilinin bir parçası olmadığından dilin getirdiği birçok özelliği içermiyorlardı. Örneğin bir class'ın içinde bunları kullanmak mümkün olmuyordu.

## Desteklenen Versiyonlar

- GCC: 4.6+
- Clang: 3.1+
- MSVC: 19.0+
- Apple Clang: All
- nvcc: 7.0+
- Intel C++: 13.0+(partial), 14.0+

## Önerildiği Paper

N2235 - Generalized Constant Expressions — Revision 5, 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2235.pdf