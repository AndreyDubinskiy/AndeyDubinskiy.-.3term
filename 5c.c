#include <stdio.h>

int main() 
{
    int n;
    int max = n; 
    int length = 0; 
    int sequence[666]; 
    
    scanf("%d", &n);
    if (n == 1) {
       printf("%d ", n);
    }
    while (n != 1) {
        sequence[length++] = n;
         if (n%2 == 0) {
            n = n/2;
        }
        else if (n%2 == 1) {
            n = 3*n + 1;
        }
        if (n > max) {
            max =n;
        } 
    }
    sequence[length++] = 1;
    for (int i = 0; i < length; i++) {
        printf("%d ", sequence[i]);
    }
    printf("Length = %d, Max = %d\n", length, max);

    
    return 0;
}
