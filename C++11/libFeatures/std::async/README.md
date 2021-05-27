# std::async

std::async ya bir fonksiyonu asenkron olarak kullanmak için, ya da lazy evaluation ile kullanmak için kullanılır. Asenkron task bir std::future objesi döner.
Lazy evaluation: Sonuç değeri gerekene kadar hesaplamayı erteler. İlk gerekme anında hesaplama yapılır, sonraki gereksinimlerde hesaplama yapmadan sonuç alınır.
Her türlü bir thread yaratır, thread'in hemen başlayıp başlamaması yaratılırken verilen parametreye bağlıdır.

## Kullanımı

    std::future<T> std::async(EVALUATION TİPİ, std::function hesaplama)

EVALUATION TİPİ:
1. std::launch::async, threadi anında çalıştırır ve std::future objesi içine değeri paslar.
2. std::launch::deferred, threadi oluşturur ve std::future objesine ilk erişimde çalıştırır.