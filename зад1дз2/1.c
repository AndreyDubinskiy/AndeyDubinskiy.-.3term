#include <stdio.h>

int main() 
{
    int n;
    int a[1000]; 
    scanf("%i", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        a[n + i] = a[i];
    }
    for (int i = 0; i < 2*n; ++i) {
        printf("%i ", a[i]); 
    }
    printf("\n");

    return 0;
}