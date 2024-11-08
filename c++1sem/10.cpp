#include <iostream>
#include <string>
int isDomainName(const std::string& str) {
    int n = str.size();
    if (str.substr(0,4) == "www." && str.substr(n-4, 4) == ".com") {
     return 1;
    }
    else 
     return 0;
}

int main() {
    std::cout << isDomainName("www.google.com") << std::endl;
    std::cout << isDomainName("abc") << std::endl;
    std::cout << isDomainName("hello.com") << std::endl;
} 