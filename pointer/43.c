#include <stdio.h>
#include <math.h>
void cube (float* p)
{
    float result = 1.0;
    result = pow(*p, 3);
    printf("%f", result);
    
    
}
float main()
{
    float x;
    scanf("%f", &x);
    float* p = &x;
    cube (p );
    
}