# Akıllı Pointerlar

C++ 11 ile üç farklı yeni akıllı pointer türü eklendi. std::auto_ptr ise, C++ 98'le eklenmişti. C++ 11 ile destek kesildi ve C++ 17 ile de kaldırıldı. Ancak kısaca bahsetmek gerekirse, std::auto_ptr, bir new emriyle yaratılan objeji yönetir ve program scope değiştirdiğinde kendisinin destructor'ı çalışırken verilen nesneyi siler. Eklenen yeni pointerlar:
***
- **std::unique_ptr**
Kendi heap-allocated hafızasını yöneten ve kopyalanamaz, ancak taşınabilir(movable) pointerdır. Kopyalanamaması dışında kullanımı hemen hemen auto_ptr ile aynıdır. Aynı şekilde scope biterken kendi destructor'ı çalıştığında yönettiği objeyi siler. Bir unique_ptr'a kopyalama yapılamaz, ancak başka bir unique_ptr'ın sahipliği std::move kullanarak devredilebilir.
***Not: Eğer C++14 desteği varsa direkt constructor kullanmak yerine std::make_unique kullanılması tavsiye ediliyor.***
***
- **std::shared_ptr**
shared_ptr bir pointer üzerinden bir objenin paylaşılabilir sahipliğini sağlayan akıllı pointerdır. Birkaç farklı shared_ptr aynı objenin referansını tutabilir. Kaç farklı pointer'ın aynı objeyi tuttuğu her zaman bilinir ve .use_count() metodu kullanılarak bu sayıya erişilir. Silinen her referansla birlikte bu sayı düşer ve 0 olduğunda bu obje silinir.
***Not: Eğer C++14 desteği varsa direkt constructor kullanmak yerine std::make_shared kullanılması tavsiye ediliyor.***
***
- **std::weak_ptr**
weak_ptr bir objeye sahip olmadan ona erişim sağlayan bir referansı tutan akıllı pointerdır. Bu erişimi std::shared_ptr objeleri üzerinden sağlar. Kullanımını kısaca anlatmak gerekirse, shared pointerlarla tutulan referanslara use_count'u artırmadan erişebilmeyi sağlar. Dolayısıyla, eğer weak_ptr kullandığımız yerler hariç bu objenin referans count'u sıfıra düştüyse obje silinecektir.