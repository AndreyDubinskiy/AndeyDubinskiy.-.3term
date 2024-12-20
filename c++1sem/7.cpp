#include <iostream>
#include <cstdlib>
#include <new>  
#include <string>

template<typename T>
class Manager {
public:
    Manager() : ptr(nullptr) {}
    void allocate() {
        ptr = static_cast<T*>(std::malloc(sizeof(T)));
        if (!ptr) {
            throw std::bad_alloc();
        }
    }
    void construct(const T& t) {
        if (ptr) {
            new (ptr) T(t); 
        }
    }
    void destruct() {
        if (ptr) {
            ptr->~T();
        }
    }
    void deallocate() {
        if (ptr) {
            std::free(ptr);
            ptr = nullptr;
        }
    }
    T& get() {
        return *ptr;
    }
    ~Manager() {
        destruct();
        deallocate();
    }

private:
    T* ptr; 
};

int main() {
    try {
        Manager<std::string> a;
        a.allocate();
        a.construct("Cats and dogs");
        a.get() += " and elephant";
        std::cout << a.get() << std::endl; 
        a.destruct();
        a.construct("Sapere Aude");
        std::cout << a.get() << std::endl; 
        a.destruct();
        a.deallocate();
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }

    return 0;
}