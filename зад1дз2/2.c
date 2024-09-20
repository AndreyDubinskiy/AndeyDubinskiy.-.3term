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
    for (int i = n; i > l ; --i) {
        a[i] = a[i - 1];
    }
    a[l + 1] = m;
    for (int i = 0; i < n + 1; ++i) {
        printf("%i ", a[i]); 
    }
    printf("\n");

    return 0;
}