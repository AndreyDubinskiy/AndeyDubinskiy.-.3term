#include <stdio.h>

int main() 
{
    int n;
    int a[1000];
    int m, l;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }
    scanf("%i %i", &m, &l);
    for (int i = m; i < n - l + m - 1; ++i) {
        a[i] = a[i + l - m + 1];
        
    }
    n = n - l + m - 1 ;
    for (int i = 0; i < n; ++i) {
        printf("%i ", a[i]); 
    }
    printf("\n");

    return 0;
}