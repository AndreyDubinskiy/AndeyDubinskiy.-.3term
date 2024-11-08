#include <iostream>
#include <string>
#include <vector>
void print(const std::vector<int>& v) 
{
    for (std::size_t i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
    std::cout << std::endl;
    }
}
void doubling(std::vector<int>& v1)
{
    std::vector<int> v2(2 * v1.size());
    for (std::size_t i = 0; i < v1.size(); ++i) {
        v2[i] = v1[i];
    }
    for (std::size_t i = 0; i < v1.size(); ++i) {
        v2[i+ v1.size()] = v1[i];
    }
    v1 = v2;
}
int main()
{
    std::vector<int> v {10, 20, 30};
    doubling(v);
    print(v);  
}