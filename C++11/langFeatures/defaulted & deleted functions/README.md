# Defaulted & Deleted Functions

## = default

C++ derleyicilerinde bazı fonksiyonların varsayılan implementasyonları vardır. Kullanıcı eğer bunları tanımlamasa bile, bunlara erişebilir. Bazıları:

- Default constructor
- Copy constructor
- Move constructor
- Copy assignment operator
- Move assignment operator
- Destructor

Ancak, eğer bunların bir kopyası kullanıcı tarafından tanımlandığında, default kopyaları artık classların erişimine kapanır. Örnek olarak; eğer parametrik bir constructor yazdıysanız, default constructor'a erişiminiz olmayacaktır. Bu durumda özel fonksiyonların default kopyalarına erişebilmek istiyorsanız, özel olarak belirmelisiniz. Fonksiyon tanımının sonuna "= default" ekleyerek yapabilirsiniz.

## = delete

Yine aynı şekilde bazı default fonksiyonlara erişimi kapatmak isteyebiliriz. Bu konuda açık olarak o fonksiyonları silmemiz gerekiyor. Fonksiyon tanımının sonuna "= delete" ekleyerek yapabilirsiniz.

## Desteklendiği Versiyonlar

- GCC: 4.4
- Clang: 3.0
- MSVC: 18.0
- Apple Clang: All
- nvcc: 7.0
- Intel C++: 4.1

## Önerildiği Paper

- N2346 - Defaulted and Deleted Functions, 2007. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2346.htm