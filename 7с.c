#include <stdio.h>
#include <limits.h>
int main() 
{
   int n, m;
   scanf("%d %d", &n, &m);
   int S = 0;
   for (int i = 1; i <= n; ++i)
   {
       for ( int j =1; j <= m; ++j)
       {
         S += ((i + j) % 2 == 0 ? 1 : -1) * i * j; 
       }
   }
    printf("S(%d, %d) = %d\n", n, m, S);

    
    return 0;
}
