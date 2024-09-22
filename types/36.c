#include <stdio.h>
#include <math.h>

double f(double x) {
    return pow(x, x - 1) * exp(-x);
}

double gamma(double x) {
    double step = 1e-2;  
    double eps = 1e-10;  
    double S = 0.0;    
    double previous_S = 0.0; 
    double a = 0.0;       
    double b = x;         
    
    previous_S = (f(a) + f(b)) * (b - a) / 2;

    do {
        S = 0.0;

        for (double i = a; i < b; i += step) {
            S += (f(i) + f(i + step)) * (step / 2);
        }
        
        if (fabs(S - previous_S) < eps) {
            break;
        }
        previous_S = S;
    } while (1);

    return S;
}

int main() 
{
    double x; 
    double result;
    scanf("%lf", &x);
    
    result = gamma(x);
    printf("%lf\n", result);
    
    return 0;
}