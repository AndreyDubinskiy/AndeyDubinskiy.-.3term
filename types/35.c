#include <stdio.h>
#include <math.h>
void do_intersect(int x1, int y1, int r1, int x2, int y2, int r2) 
{
    if (r1 + r2 == sqrt(pow(x1-x2, 2) + pow(y1-y2, 2))) {
        printf("Touch");
    }
    if (r1 + r2 > sqrt(pow(x1-x2, 2) + pow(y1-y2, 2))) {
        printf("Intersect");
    }
    if (r1 + r2 < sqrt(pow(x1-x2, 2) + pow(y1-y2, 2))) {
        printf("Do not intersect");
    }
}

int main() 
{
    int x1, y1, r1;
    int x2, y2, r2;
    scanf("%i %i %i", &x1, &y1, &r1);
    scanf("%i %i %i", &x2, &y2, &r2);
    do_intersect(x1, y1, r1, x2, y2, r2);
   
    return 0;
}