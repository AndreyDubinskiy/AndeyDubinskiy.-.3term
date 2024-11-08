#include <iostream>
#include <string>
std::string repeat(unsigned int a) {
    std::string str ;
   for (unsigned int i = 0; i<a; ++i) {
     str += std::to_string(a);
   }
   return str;
}

int main() {
    std::cout << repeat(5) << std::endl;
    std::cout << repeat(10) << std::endl;
    std::cout << repeat(-1) << std::endl;
} 