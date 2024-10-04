
#include <stdio.h>

void mult2(int* array, size_t n) {   
    for (int* p = array; p < array + n; ++p) {
        *p += *p;  
    }
    for (int* p = array; p < array + n; ++p) {
        printf("%i ", *p);  
    }
    printf("\n"); 
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