#include <stdio.h>
#include <stdlib.h>

int sum_of_digits_rec(int n) {   
    int sum = 0;
    if (n <= 10) {
    return n;
    }
    else {
        return sum_of_digits_rec(n / 10) + n % 10;
    }
}

int main() {
    int n;
    scanf("%i", &n);
    int result = sum_of_digits_rec(n);
    printf("%i\n", result);
    
    return 0;
}