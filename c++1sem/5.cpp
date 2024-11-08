#include <iostream>
#include <cstdio>
#include <string>
namespace library
{
struct Book
{
    std::string title;
    int pages;
    float price;
};
}
using library::Book;
bool IsExpensive (const Book& b) 
{
    return b.price > 1000;
}
int main() {
    Book b = {"Harry Potter", 228, 500};
    bool result = IsExpensive(b);
   std::cout << (result ? "true" : "false") << std::endl;
    
    return 0;
}