#include <stdio.h>
unsigned long long allocation(int n, int k) 
{
    unsigned long long result = 1;
    for (int i = n; i >= n - k + 1; --i) {
        result *= i;
    }
    return result;
}

int main() 
{
    int n, k;
    scanf("%i %i", &n, &k);
    printf("%llu\n", allocation(n, k));
}