# Rvalue referansları

Rvalue referansları aşağıdaki problemleri çözmek için eklendi:
- Move semantikleri.
- Kusursuz forwarding.

### Rvalue nedir?
Rvalue ve Lvalue farkı CPL semantiklerine dayanıyor.
- lvalue: Memory'de bir yer işgal eden, ve & operatörü ile bu yere erişebildiğimiz değerlerdir.
- rvalue: Kabaca lvalue olmayan her şey rvalue diyebiliriz.

C++'ta const olmayan referanslar sadece lvalue'lere bağlanabilirken, const referanslar hem rvalue hem de lvalue'lere bağlanabilir. Ancak, const olmayan rvalue'ler hiçbir şeye bağlanamaz. Bunun sebebi insanların geçici değerleri değiştirip onları kullanamamasını engellemektir.

##### Örnek:
    void increment(int& a){ ++a; }
    int i = 0;
    increment(i);//i lvalue, call OK, i = 1 now.
    increment(0);//0 rvalue, invalid call.

increment(0); satırı çalışıyor olsaydı bile, değişen değer kullanılamayacaktı.

## Rvalue referansı nedir?

Herhangi bir X türü için, X&& rvalue referansını belirtir. Eskiden sadece "referans" olarak anılan X& ise artık lvalue referans olarak anılıyor. Rvalue referansları bir fonksiyona compile zamanında "Overload Resolution" yaparak "Ben rvalue ile mi çağrıldım, yoksa lvalue ile mi?" kararını vermeye yarıyor.

### Neden gerekli?

Rvalue referanslarının en popüler kullanımı "move constructor"lardır. Bir nesnenin sahipliğinin diğerine aktarıldığı move operasyonları kopyalaması masraflı olan karmaşık objelerin copy-constructor kullanmadan kopyalanabilmesini sağlar.

X& X::operator=(X&& rhs){ ~Implementasyon;}
X a = std::move(X b);

## Desteklenen Versiyonlar

- gcc: 4.3 (N2118), 4.5
- clang: 2.9
- MSVC: 16.0 (N2844), 17.0
- Apple clang: All
- nvcc: 7.0 (N2118)
- Intel C++: 11.1 (N2118), 12.0 (N2844), 14.0

## Önerildiği Paper

- N2118 - A Proposal to Add an Rvalue Reference to the C++ Language, 2006. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2118.html
- N2844 - Fixing a Safety Problem with Rvalue References: Proposed Wording (Revision 1), 2009. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2844.html
- CWG1138 - Rvalue-ness check for rvalue reference binding is wrong, 2010. https://wg21.cmeerw.net/cwg/issue1138