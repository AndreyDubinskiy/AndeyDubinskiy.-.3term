#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    std::cout << "Insert amount of numbers: ";
    std::cin >> n;
    std::map<int, int> countMap; 

    std::cout << "  Insert numbers: ";
    for (int i = 0; i < n; ++i) {
        int number;
        std::cin >> number;
        countMap[number]++;
    }
    std::cout << "Unique numbers: ";
    for (const auto& pair : countMap) {
        std::cout << pair.first << " "; 
    }
    std::cout << std::endl;
    std::cout << "Amount of repeats: ";
    for (const auto& pair : countMap) {
        std::cout << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}