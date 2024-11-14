#include <iostream>
#include <string>
#include <vector>

std::string concatenate(std::vector<std::string>& v) {
    std::string str;
    for (std::size_t i = 0; i < v.size(); ++i) {
      str += v[i];
    }
    return str;
}
int main()
{
	std::vector<std::string> v {"Cat", "Dog", "Mouse", "Tiger", "Elk"};
	std::cout << concatenate(v) << std::endl;
}