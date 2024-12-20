#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <utility> 

template <typename Container>
std::vector<std::pair<typename Container::value_type, typename Container::value_type>> pairElements(const Container& container) {
    std::vector<std::pair<typename Container::value_type, typename Container::value_type>> result;
    auto it = container.begin();
    
    while (it != container.end()) {
        auto first = *it;
        ++it;
        if (it != container.end()) {
            auto second = *it;
            result.emplace_back(first, second);
            ++it;
        } else {
            result.emplace_back(first, typename Container::value_type{});
        }
    }

    return result;
}