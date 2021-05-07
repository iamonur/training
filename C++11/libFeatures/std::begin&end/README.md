# std::begin ve std::end

Bu iki serbest fonksiyon herhangi bir standard container'ın başının ya da sonunun iterator'ünü dönerler.
Ayrıca basit arraylerde de çalışır.

Örnek:
template <typename T>
int how_many_elements(const T& container) {
    return std::count(std::begin(container), std::end(container));
}
