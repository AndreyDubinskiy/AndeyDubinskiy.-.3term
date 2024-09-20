#include <stdio.h>

int main() 
{
    int n;
    int a[1000];
    int b[1000];
    int even[500];
    int uneven[500];
    int evencount = 0;
    int unevencount = 0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%i", &a[i]);
    }
    for (int i = 0; i <n ; ++i) {
        if (a[i] % 2 != 0) {
            uneven[unevencount] = a[i];
            unevencount++;
        }
        else if (a[i] % 2 == 0) {
            even[evencount] = a[i];
            evencount++;
        }
    }
    
    int total = evencount + unevencount;
    int result[1000]; 
    
    for (int i = 0; i < unevencount; ++i) {
        result[i] = uneven[i];
    }
    for (int i = 0; i < evencount; ++i) {
        result[unevencount + i] = even[i];
    }

    for (int i = 0; i < total; ++i) {
        printf("%i ", result[i]);
    }
    printf("\n");

    return 0;
}