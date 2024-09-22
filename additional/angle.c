#include <stdio.h>
#include <math.h>

double length1 (double x1, double y1) {
    return sqrt(pow(x1, 2) + pow(y1, 2));
}
double length2 (double x2, double y2) {
    return sqrt(pow(x2, 2) + pow(y2, 2));
}
double scalar_product(double x1, double y1, double x2, double y2) {
    return x1 * x2 + y1 * y2;
}
double rad(double scalar_product, double length1, double length2) {
    return acos(scalar_product / ( length1 * length2 ));
}
double in_degrees(double rad) {
    return rad * 180 / M_PI;
}

int main() 
{
    double x1, y1;
    double x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    double len1 = length1(x1, y1);
    double len2 = length2(x2, y2);
    double scalar = scalar_product(x1, x2, y1, y2);
    double angle_in_rad = rad(scalar, len1, len2);
    double angle_in_degrees = in_degrees(angle_in_rad);
    printf("%lf\n", angle_in_degrees);
    return 0;
}