#include <iostream>
#include <vector>
#include <string>
#include <utility> 
#include <algorithm> 

template<typename T>
std::pair<T, T> minmax(const std::vector<T>& v) {
    auto min_it = std::min_element(v.begin(), v.end());
    auto max_it = std::max_element(v.begin(), v.end());
    
    return { *min_it, *max_it };
}

int main() {
    std::vector<int> a {60, 10, 40, 80, 30};
    auto am = minmax(a);
    std::cout << am.first << " " << am.second << std::endl; 
    std::vector<std::string> b {"Cat", "Dog", "Mouse", "Camel", "Wolf"};
    auto bm = minmax(b);
    std::cout << bm.first << " " << bm.second << std::endl; 
    std::vector<std::pair<int, int>> c {{10, 90}, {30, 10}, {20, 40}, {10, 50}};
    auto cm = minmax(c);
    std::cout << cm.first.first << " " << cm.first.second << std::endl;  
    std::cout << cm.second.first << " " << cm.second.second << std::endl; 
    
    return 0;
}