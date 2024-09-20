#include <stdio.h>

int main() 
{
    int n;
    int a[1000];
    int t=0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            a[i] = a[i + 1];
            t++;
        }
        
        
    }
    n=n-t;
    for (int i = 0; i < n; ++i) {
        printf("%i ", a[i]); 
    }
    printf("\n");

    return 0;
}