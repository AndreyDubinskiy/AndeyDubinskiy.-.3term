#include <stdio.h>
#include <math.h>

int solve_quadratic(double a, double b, double c, double* px1, double* px2) {
    double D;
    D = b * b - 4 * a * c;  

    if (D < 0) {
      return 0; 
    } 
    else if (D == 0) {  
        *px1 = -b / (2 * a);
        return 1;
    } 
    else if (D > 0) { 
        *px1 = (-b + sqrt(D)) / (2 * a);  
        *px2 = (-b - sqrt(D)) / (2 * a);  
        return 2;
    }
}

int main() {  
    double a, b, c;  
    printf("a, b, c:");
    scanf("%lf %lf %lf", &a, &b, &c);  
    
    double x1, x2;
    int result = solve_quadratic(a, b, c, &x1, &x2);
    if (result == 0) {
        printf("0 \n");
    }
    else if (result == 1) {
        printf("x1 = %f\n", x1);
    }
    else if (result == 2) {
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }

    return 0; 
}