#include <stdio.h>
int exchange(int* pa, int b)
{   
    int previous_value = *pa;
    *pa = b;
    return previous_value;
}
int main() {
    int a = 10;
    printf("%i\n", exchange(&a, 20));
    printf("%i\n", a);
    
    return 0;
}