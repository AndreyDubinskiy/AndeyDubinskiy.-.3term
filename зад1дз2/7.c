#include <stdio.h>

int main() 
{
    int n;
    int a[1000];
    int b[1000];
    scanf("%i", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        b[2*i] = a[i];
        b[2*i+1] = a[i];
    }
    
    for (int i = 0; i < 2*n; ++i) {
        printf("%i ", b[i]); 
    }
    printf("\n");

    return 0;
}