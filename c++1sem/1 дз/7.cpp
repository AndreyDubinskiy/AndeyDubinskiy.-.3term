#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
void count (const std::string& str, int& NumLetters, int& NumDigits)
{
   NumLetters = 0;
   NumDigits = 0;
   for (std::size_t i = 0; i<str.size(); ++i) {
       if (std::isalpha(str[i]))
       NumLetters += 1;
       else if (std::isdigit(str[i]))
       NumDigits += 1;
   }
   std::cout << "Number of Letters : " << NumLetters << " ." << std::endl;
   std::cout << "Number of Digits : " << NumDigits << " ." << std::endl;
}
int main() {
    std::string str = "Za Rodiynu! Podderjim nashih. ZOV2024";
    int letterscount, digitscount; 
    count(str, letterscount, digitscount); 
    
    return 0;
}