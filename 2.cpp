#include <iostream>
#include <set>

int main() {
    int n;
    std::cout << " ";
    std::cin >> n;

    std::set<int> unique_numbers; 
    std::cout << " ";
    for (int i = 0; i < n; ++i) {
        int number;
        std::cin >> number;
        unique_numbers.insert(number);
    }

    std::cout << " ";
    for (const auto& num : unique_numbers) {
        std::cout << num << " "; 
    }
    std::cout << std::endl;

    return 0;
}