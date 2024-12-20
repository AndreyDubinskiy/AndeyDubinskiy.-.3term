#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    std::cout << " ";
    std::cin >> n;
    std::map<int, int> countMap;
    std::cout << " ";
    for (int i = 0; i < n; ++i) {
        int number;
        std::cin >> number; 
        countMap[number]++; 
    }
    std::cout << " ";
    for (const auto& pair : countMap) {
        std::cout << pair.first << " "; 
    }
    std::cout << std::endl;
    std::cout << " ";
    for (const auto& pair : countMap) {
        std::cout << pair.second << " "; 
    }
    std::cout << std::endl;

    return 0;
}