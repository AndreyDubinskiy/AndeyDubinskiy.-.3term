#include <stdio.h>

int main()
{
    int a, b, c;
    
    
    printf("Insert Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ( c - b == 1 && b - a == 1 ) {
        printf("Consecutive Increasing\n");
    }
    else if (b>a && c>b) { 
        printf("Increasing\n");
    }
    else if (c == b && b == a) {
        printf("Equal\n");
    }
    else if ( b<a && c<b) {
        printf("Decreasing\n");
    }
    else if ( b - c == 1 && a-b == 1 ) {
        printf("Consecutive Decreasisng\n");
    
    } else {
        printf("None\n");
    }
    
    return 0;

}
