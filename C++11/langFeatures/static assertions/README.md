# Static Assertions

Normal assert() komutları runtime esnasında olacak hataları kontrol etmek için kullanılır.
Static assertionlar ise compile time'da kontrol edilir. C++11 öncesi static assertionları şu şekilde yapmak gerekiyordu:

    #if !(someCondition)
    #error "There is a significant compile time error here!".
    #endif

## Çözdüğü Sorun

- #error komutu kolay kontroller için uygun olsa da, bazı kontrolleri preprocessor zamanından sonra yapmak gerekiyor. Örneğin programın doğru çalışması sizeof(long) == 8'e bağlıysa burada std::static_assert kullanmak doğru olacaktır.
- Kütüphaneler bazı kullanım hatalarını bu şekilde compile-time'da bulabilirler. STL'de de daha anlamlı hata mesajları verebilmek için kullanılır.

## Kullanım

    std::static_assert(someCondition, "Some Compile Error Message");

## Ne zaman kullanılmalı?

Kodunuzu temelden etkileyen bir compiler bağımlılığı olduğunda ya da yanlış kullanımı mümkün olan kütüphaneler geliştirirken.

## Desteklendiği Versiyonlar

- gcc: 4.3
- clang: 2.9
- MSVC: 16.0
- Apple clang: All
- nvcc: 7.0
- Intel C++: 11.0

## Önerildiği Paper

- N1720 - Proposal to Add Static Assertions to the Core Language (Revision 3), 2004. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1720.html