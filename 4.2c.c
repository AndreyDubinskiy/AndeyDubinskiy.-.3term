#include <stdio.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%i", &n);
    int mineven = INT_MAX;
    int maxuneven = INT_MIN;
    
    for (int i = 0; i < n; ++i) 
    {
        int a;
        scanf("%i", &a);
        
        if (a % 2 == 0 && a < mineven)
            mineven = a;
        
        if (a % 2 != 0 && a > maxuneven)
            maxuneven = a;
    }
    
    if (mineven == INT_MAX)
        printf("None ");
    else
        printf("%i ", mineven);
    
    if (maxuneven == INT_MIN)
        printf("None\n");
    else
        printf("%i\n", maxuneven);
    
    return 0;
}