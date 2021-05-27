# std::ref, std::cref

std::ref ve std::cref(const ref) yardımcı fonksiyonları template argument deduction kullanarak (template tipi belirtmemize gerek olmadan) std::reference_wrapper tipinde objeler üretirler. Parametre olarak sadece reference_wrapper üretilecek objenin lvalue referansı verilmesi yeterlidir.

### Neden std::reference_wrapper'lara ihtiyaç var?

- Normalde referans tutamayan standart containerlarda(std::vector gibi) referans tutabilmek için.
- std::bind, std::thread, std::make_pair gibi yapılara referansla objeler verebilmek için.

