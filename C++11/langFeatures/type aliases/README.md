# Type Aliases

Template türlerin dile eklenmesiyle, typedef kullanımı zorlaşmıştı. Template türleri de kolayca kullandıran type aliasları C++11'de bu yüzden eklendi.

## Çözdüğü problem/getirdiği güzellik

- Template tiplerin de kullanımını sağlar.

## Kullanımı

template <typename T>
using vec = std::vector<T>;
vec<int> integer_vector;

