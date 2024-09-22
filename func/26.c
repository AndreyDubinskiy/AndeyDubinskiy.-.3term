#include <stdio.h>
#include <stdlib.h>
unsigned long long trib(int n) { 
    if (n == 0) {
      return 0;
    }
    if (n == 1) {
      return 0;
    }
    if (n == 2) {
      return 1;
    }
    if (n >= 3) {
    return trib(n - 3) + trib(n - 2) + trib(n - 1);
    }

}

int main() {
    int n;
    unsigned long long result;
    scanf("%i", &n);
    result = trib(n);
    printf("%llu", result);
    
    return 0;
}