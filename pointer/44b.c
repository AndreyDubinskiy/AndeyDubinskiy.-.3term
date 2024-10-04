#include <stdio.h>
#include <math.h>

void mult2(int* p, size_t n) {   
    for (size_t i = 0; i < n; ++i) {
        p[i] += p[i];  
    }
    for (size_t i = 0; i < n; ++i) {
        printf("%i ", p[i]);  
    }
}

int main() {
    int n;
    int array[1000];
    
    scanf("%i", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%i", &array[i]);
    }

    mult2(array, n);  
    return 0;
}