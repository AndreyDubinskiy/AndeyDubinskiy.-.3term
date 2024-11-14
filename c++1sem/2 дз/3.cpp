
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

class Number 
{
private:
    static const int base = 100;

    char* data;
    std::size_t size;
    std::size_t capacity;

public:
    Number() : size(1), capacity(1) {
        data = new char[capacity];
        data[0] = 0;
    }
    Number(int a) {
        int temp = a;
        capacity = 0;
        while (temp != 0) {
            temp /= base;
            capacity += 1;
        }
        if (capacity == 0)
            capacity = 1;

        data = new char[capacity];
        for (int i = 0; i < capacity; ++i) {
            data[i] = a % base;
            a /= base;
        }
        size = capacity;
    }
    Number(const Number& n) : size(n.size), capacity(n.capacity) {
        data = new char[capacity];
        std::memcpy(data, n.data, size);
    }
    Number(const std::string& str) {
        capacity = (str.length() + 1) / 2; 
        data = new char[capacity];
        size = capacity;
        for (std::size_t i = 0; i < size; ++i) {
            if (i * 2 + 1 < str.length()) {
                data[i] = (str[str.length() - (i * 2 + 1)] - '0') + 
                           (str[str.length() - (i * 2)] - '0') * 10;
            } else {
                data[i] = str[str.length() - (i * 2)] - '0';
            }
        }
    }
    ~Number() {
        delete[] data;
    }
    Number& operator=(const Number& n) {
        if (this != &n) {
            delete[] data;
            size = n.size;
            capacity = n.capacity;
            data = new char[capacity];
            std::memcpy(data, n.data, size);
        }
        return *this;
    }
    Number operator+(const Number& n) const {
        Number result;
        result.capacity = std::max(size, n.size) + 1; 
        result.data = new char[result.capacity];
        int carry = 0;
        for (std::size_t i = 0; i < result.capacity; ++i) {
            int sum = carry;
            if (i < size) sum += static_cast<int>(data[i]);
            if (i < n.size) sum += static_cast<int>(n.data[i]);
            result.data[i] = sum % base;
            carry = sum / base;
        }
        result.size = result.capacity;
        while (result.size > 1 && result.data[result.size - 1] == 0) {
            result.size--;
        }
        return result;
    }
    Number& operator+=(const Number& n) {
        *this = *this + n;
        return *this;
    }
    bool isEven() const {
        return data[0] % 2 == 0;
    }
    Number operator*(const Number& n) const {
        Number result;
        result.size = size + n.size;
        result.capacity = result.size;
        result.data = new char[result.capacity]();
        for (std::size_t i = 0; i < size; ++i) {
            int carry = 0;
            for (std::size_t j = 0; j < n.size; ++j) {
                long long prod = static_cast<long long>(data[i]) * static_cast<long long>(n.data[j]) + carry + static_cast<long long>(result.data[i + j]);
                result.data[i + j] = prod % base;
                carry = prod / base;
                }
            result.data[i + n.size] += carry; 
        }
        result.size = result.capacity;
        while (result.size > 1 && result.data[result.size - 1] == 0) {
            result.size--;
        }
        
        return result;
    } 
    friend std::ostream& operator<<(std::ostream& stream, const Number& num);
};

std::ostream& operator<<(std::ostream& stream, const Number& num)
{
    stream << static_cast<int>(num.data[num.size - 1]);
    for (std::size_t i = 0; i < num.size - 1; ++i)
        stream << std::setfill('0') << std::setw(2) << static_cast<int>(num.data[num.size - 2 - i]);

    return stream;
}
Number Fib(int n) {
    if (n == 0) 
       return Number(0);
    if (n == 1) 
       return Number(1);
    Number a(0), b(1), c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
Number Fac(int n) {
    if (n == 0)
       return Number(1);
    if (n == 1)
       return Number(1);
    if (n == 2)
       return Number(2);
    Number a(1), b(1), c;
    for (int i = 1; i <=n; ++i) {
        c = a * b;
        a = a + 1;
        b = c;
    }
    return c;
}

int main() {
    Number Fib1000 = Fib(1000);
    std::cout << "Fib(1000) = " << Fib1000 << std::endl;
    Number Fac1000 = Fac(1000);
    std::cout << "Fac(1000) = " << Fac1000 << std::endl;
    
    return 0;
}