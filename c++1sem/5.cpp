#include <iostream>
#include <type_traits>

template<typename T>
void swapEndianness(T& value) {
    static_assert(std::is_trivially_copyable<T>::value, "Type must be trivially copyable");
    static_assert(sizeof(T) == 2 || sizeof(T) == 4 || sizeof(T) == 8, "Only supports 2, 4, or 8 byte types");

    T swapped = 0;
    char* src = reinterpret_cast<char*>(&value);
    char* dst = reinterpret_cast<char*>(&swapped);

    for (size_t i = 0; i < sizeof(T); ++i) {
        dst[i] = src[sizeof(T) - 1 - i];
    }

    value = swapped;
}

int main() {
    std::cout << std::hex;

    int a = 0x1a2b3c4d; 
    std::cout << a << std::endl; 
    swapEndianness(a);             
    std::cout << a << std::endl; 
    swapEndianness(a);             
    std::cout << a << std::endl; 
    short b = 0x1a2b;   
    std::cout << b << std::endl; 
    swapEndianness(b);
    std::cout << b << std::endl; 
    
    return 0;
}