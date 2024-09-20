#include <stdio.h>

int main() 
{
    int n; 
    int a[1000]; 
    int index;
    scanf("%i", &n);
    
    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }
    scanf("%i", &index);
    if (index < 0 || index >= n) {
        return 1; 
    }

    for (int i = index; i < n - 1; ++i) {
        a[i] = a[i + 1];
    }
    n--;
    for (int i = 0; i < n; ++i) {
        printf("%i ", a[i]);
    }
    printf("\n");

    return 0;
}