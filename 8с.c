#include <stdio.h>

int main() 
{
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int first = a + (c - a % c) % c;
    for (int i = first; i <= b; i += c) {
        printf("%d ", i);
    }
    
    printf("\n"); 

    return 0;
}
