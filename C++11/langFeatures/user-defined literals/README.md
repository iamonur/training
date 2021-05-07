# User-defined Literals

C++ 11 ile kullanıcı tarafından tanımlanmış hazır fonksiyonlar yaratmamıza yarar.

## Kullanımı

Bir literal yaratmak için şu syntax'ı uygularız:
T operator "" literalIsmi (...) {...}

## Örnekler

int operator "" _int(const char* str, std::size_t) {
    return std::stoi(str);
}
int a = "123"_int; //= (int)123

unsigned long long operator "" _celsToFahr(unsigned long long cels) {
    return std::llround(cels * 1.8 + 32);
}
int fahr = 20_celsToFahr; // = (int)68

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