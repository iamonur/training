# Nitelikler

Implementasyonların tanımladığı nitelikler getirildi. C++ standardının tanımladığı nitelikler gibi GNU ya da CLANG gibi farklı C++ implementasyonlarının kendi tanımladığı nitelikler vardır.

## Benzerleri
Implementasyonların tanımlayabildiği nitelikler vardı, ancak bunlar compiler-specific olduğundan portability'i etkiliyordu. Microsoft'un \_\_declspec()'i ve IBM ve GNU'nun \_\_attribute\_\_(...)ları gibi.

## Faydası
Portability.

## Kullanımı
**\[[attribute()]]**: C++11 ile standard attributeler getirildi.
**\[[using attribute-namespace:attributes]]**: C++17 ile implementasyonların kendi namespacelerinde tanımladıkları attributeler oldu.

## Bazı Standart Nitelikler
- **\[[noreturn]]**: bu fonksiyonun return etmediğini gösterir
- **\[[carries_dependency]]**: bu fonksiyonun başkalarına verilecek ya da başkalarından alınacak bağlılıklarının olduğunu belirterek compiler'ın memory fencing yapmasını engeller.
- **\[[deprecated]]** ya da **\[[deprecated("reason")]]***(C++14)*: Bu varlığın kullanımına izin olduğunu, ama artık desteklenmediğini belirtir.
- **\[[fallthrough]]***(C++17)*: Bir switch case yapısında bazı case'lerin bilerek break ile sonlandırılmadığını, compiler'ın bununla ilgili uyarı yapmaması gerektiğini belirtir.
- **\[[nodiscard]]** ya da **\[[nodiscard("reason")]]***(C++17)*: Bu fonksiyonun return değerinin bir değişkene alınmadığında compiler'ın bir uyarı üretmesi içindir.
- **\[[maybe_unused]]***(C++17)*: Bir varlık hiç kullanılmadığında compiler'ın uyarı üretmesini engeller.
- **\[[likely]]** ya da **\[[unlikely]]***(C++20)*: Bir conditionın gerçekleşme ya da gerçekleşmemesi ihtimali yüksekse branch prediction optimizasyonları için yol açar.

## Desteklenen Versiyonlar

- GCC: 4.8+
- Clang: 3.3+
- MSVC: 19+
- Apple Clang: All
- nvcc: 7.0+
- Intel C++: 12.1+

## Önerildiği Paper

N2761 - Towards support for attributes in C++ (Revision 6), 2008: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2761.pdf