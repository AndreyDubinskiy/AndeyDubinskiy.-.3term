#include <iostream>
#include <string>
void addBrackets(std::string& str) {
    std::string newstr = "[" + str + "]";
    str = newstr;
}

int main() {
    std::string a = "Cat";
    std::cout << a << std::endl;

    addBrackets(a);
    std::cout << a << std::endl;

    addBrackets(a);
    std::cout << a << std::endl;

    return 0;
}