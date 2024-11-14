#include <iostream>
#include <cstdio>
void swap(int& a, int& b) {
   int r = a;
   a = b;
   b = r;
}
int main()
{
   int a = 10;
   int b = 20;
   std::cout << a << " " << b << std::endl;
   
   swap(a, b);
   std::cout << a << " " << b << std::endl;
}