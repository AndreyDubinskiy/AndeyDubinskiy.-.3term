#include <iostream>
#include <set>

int main() {
    int n;
    std::cout << "Insert amount of numbers: ";
    std::cin >> n;

    std::multiset<int> numbers; 
    std::cout << "Insert numbers: ";
    for (int i = 0; i < n; ++i) {
        int number;
        std::cin >> number;
        numbers.insert(number);
    }

    std::cout << "Sorted: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}