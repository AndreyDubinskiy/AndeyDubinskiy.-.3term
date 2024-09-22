#include <stdio.h>
#include <stdlib.h>

int sum_of_digits( int n) {   
    int sum = 0;
    while (n > 0) {
       sum += n % 10;
       n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%i", &n);
    int result = sum_of_digits(n);
    printf("%i\n", result);
    
    return 0;
}