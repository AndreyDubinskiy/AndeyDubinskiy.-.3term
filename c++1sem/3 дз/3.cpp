#include <iostream>
#include <string>
#include <vector>

int main() {
 
    int* intObject = new int(123);

    std::string* stringObject = new std::string("Cats and Dogs");
    int* intArray = new int[5]{10, 20, 30, 40, 50}; // Добавлена точка с запятой
    std::vector<int>* vectorObject = new std::vector<int>({10, 20, 30, 40, 50});
    std::string* stringArray = new std::string[3]{"Cat", "Dog", "Mouse"};

    std::cout << "intObject: " << *intObject << std::endl;
    std::cout << "stringObject: " << *stringObject << std::endl;
    std::cout << "intArray: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "vectorObject: ";
    for (const int& elem : *vectorObject) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "stringArray: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

    delete intObject;
    delete stringObject;
    delete[] intArray;
    delete vectorObject;
    delete[] stringArray;

    return 0;
}