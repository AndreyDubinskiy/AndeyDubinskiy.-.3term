#include <stdio.h>
#include <math.h>
double approx_pi(int n) 
{
    double result = 0;
    for (int i = 1; i<=n; ++i) {
        result += 4*pow(-1, i + 1) / (2*i -1);
    }
    
    return result;
}

int main() 
{
    int n;
    scanf("%i", &n);
    printf("%lf\n", approx_pi(n));
    
    return 0;
    
}