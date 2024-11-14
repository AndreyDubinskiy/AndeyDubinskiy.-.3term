#include <iostream>
#include <string>
#include <vector>
void print(const std::vector<std::string>& v)
{
    for (std::size_t i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}
 
std::vector<std::string> prefixes (const std::string& str) 
{
    std::vector<std::string> v;
    for (std::size_t i = 0; i < str.size()+1; ++i) {
        v.push_back(str.substr(0, i));
    }
    return v;
}
int main()
{
    std::vector<std::string> v = prefixes("Mouse");
    print(v);
}