# noexcept Belirteci
noexcept bir fonksiyon belirtecidir. Eklendiği fonksiyonun exception üretip üretmeyeceğini gösterir. Ancak bir compile-time kontrolü getirmez. noexcept olan bir fonksiyon da exception üretebilir. En basit C++ çağrıları bile, std::bad_alloc gibi, exception üretebilir.

Peki ürettiğinde ne olur? noexcept olarak tanımlanan bir fonksiyon'da yakalanmamış bir exception oluştuğunda bu çağrıyı std::exception'dan std::terminate'e dönüştürür. Dolayısıyla stack'inizi çözmeden programınızı durdurur. Fonksiyonu noexcept olarak tanımlamasaydık call stack'te yukarı doğru ilerleyip unhandled exception olarak programı sonlandıracaktı.

## Çözdüğü Problem/ Getirdiği Güzellik
- Bir çağrının noexcept olup olmadığını compile-time'da kontrol edebiliriz.
- Call stack'imiz çözülmediğinden daha kolay debug etme imkanı sağlar.

## Kullanımı
noexcept : Bu çağrıdan exception gelmeyecektir.
noexcept(true): noexcept ile aynı
noexcept(false): Bu çağrıdan exception gelebilecektir.
noexcept(fonksiyon()): fonksiyon'un noexcept olup olmadığını söyler.

## Ne zaman kullanmalı?

Geri dönülemez exceptionların ulaşabileceği fonksiyonlarda kullanılabilir. Eğer o fonksiyona ulaşan bir exception yakalansa bile telafisi yoksa noexcept kullanabilirsiniz.