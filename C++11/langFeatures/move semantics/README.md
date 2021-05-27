# Move Semantikleri

Şimdi basit bir swap fonksiyonunu düşünelim.

    template <class T>
    void swaps(T& a, T&b){
        T temp(a); //Copy constructor 1,
        a = b; //Copy constructor 2,
        b = tmp; //Copy constructor 3.
    }

Kopylaması maliyetli bir class için bu epey yorucu bir fonksiyon. Bunun yerine sadece nesnelerin sahipliklerini değiştirecek "move" C++11 ile eklendi. Move constructor ve move assignmentları, hiç kopyalama yapmadan sadece varolan nesneyi bir değişkenden diğerine alıyor. 

    template <class T>
    void swaps(T& a, T& b){
        T tmp = std::move(a);
        a = std::move(b);
        b = std::move(tmp);
    }

Böylelikle hiç constructor/copy constructor çalışmadan, memory, CPU ve zamandan tasarruf ederek de bir swap işlemi yapılabiliyor.