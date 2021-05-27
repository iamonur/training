# std::move

Bir objenin sahipliğinin parametre olarak aldığı değişkenden "taşındığını" ve yeni sahibine aktarıldığını belirtir.

Eğer implement edildiyse, "taşınan" objelerle çağrılan fonksiyonların rvalue referansı kabul eden versiyonları overload resolution ile tespit ederek çalıştırılır. Standart kütüphanede hemen hemen mümkün olan her çağrıyı std::move ile kullanmak mümkündür.

std::move bir xvalue üretir.
***xvalue:*** Genel bir lvalue'dur, ancak isimli bir objeyi belirtmez ve bir lvalue'ya atanarak tekrar kullanılabilir. Atanmazsa bu değer kaybolacaktır.
[eXpiring value]
