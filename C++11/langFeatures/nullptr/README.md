# nullptr

C++11 öncesinde C'den kalma NULL macrosu kullanılıyordu. Genelde compilerlarda bu tanım #define NULL (void*)0 şeklindedir. Bu tanım ne yazık ki bir çok kusur içeriyor. Bu tanım yerine std::nullptr_t tipinde ve pointerlara cast edilip integral tiplere cast edilemeyen yeni bir null üretimi gerekmiştir.

# Problemler
- Bir pointer olmasına rağmen integral tiplere çevrilebilir olması NULL'u hataya yatkın kılıyordu:
    void foo(int){return;}
    void foo(int*){return;}
    int main(){
        foo(NULL);
    }
  - Yukarıdaki program'da compiler hangi foo'nun çağrıldığını çözemez ve "ambigious call" hatası verir. Aslında ideal olarak 2. foo'yu çağırması beklenirdi.

# Özellikleri
- bool dışında hiçbir integral tipe çevrilemez, bool'a çevrildiğinde değeri "false" olur.