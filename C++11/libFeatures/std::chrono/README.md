# Tarih ve Zaman Özellikleri

C-style tarih ve zaman kütüphanesi \<ctime> haricinde de kullanılabilecek yeni tipler ve özellikler içeren \<chrono> kütüphanesi C++11 ile eklendi. Chrono kütüphanesi C++20 ile epey ilerlemiş olsa da, C++11'de de basit fonksiyonaliteyi içeriyor.

Chrono kütüphanesi ile üç ana tip eklendi.
- Saatler - clock
- Zaman noktaları- time point
- Müddetler - duration

### Saatler
#### system_clock

std::chrono::system_clock classı sistem geneli gerçek zamanlı saattir. Diğer saatlerin aksine c-style std::time_t'ye veya ondan dönüşüm yapılabilen tek saattir.

##### Metotları
- now(static): Şimdiki zamanı temsil eden bir std::chrono::time_point döner.
- to_time_t(static): Sistem zamanını std::time_t'ye çevirir.
- from_time_t(static): Sistem zamanını std::time_t'den set eder.

##### Üye tipleri
- rep: Saatin müddedindeki tick sayısını temsil eden aritmetik tiptir.
- period: Bir std::ratio tipidir ve sistemin bir tickinin kaç saniyeye denk geldiğini tutar.
- duration: std::chrono::duration\<rep, period>
- time_point: std::chrono::time_point\<std::chrono::system_clock>

#### steady_clock
std::chrono::steady_clock set edilemeyen monotonik bir zamanı gösterir. Aşina olduğumuz bir saati göstermez. Implementasyon ve alt katmanlara bağlı olsa da örnek olarak son reboot'tan itibaren geçen süreyi tutuyor olabilir. Daha çok aralıklar tutarken kullanılmak üzere geliştirilmiştir. system_clock ile aynı tipleri içerirken tek metodu **now**'dır.

#### high_resolution_clock
İmplementasyon'un izin verdiği en kısa tick periyoduyla çalışan bir saattir. Duruma göre system_clock ya da steady_clock'un bir alias'ı olabilir. system_clock ile aynı tipleri içerirken tek metodu **now**'dır

### Zaman Noktaları

#### time_point

std::chrono::time_point classı zamanda bir noktayı temsil eder. Onu yaratan saat classının epoch'undan itibaren geçen zamanı duration olarak tutar.

### Müddetler

#### duration

std::chrono::duration classı bir zaman aralığını temsil eder. Bir tick periyodu ve tick sayısını tutar.