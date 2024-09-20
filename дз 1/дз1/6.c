#include <stdio.h>
#include <limits.h>

int main()
{
    int a, b, counter = 1, max_number, max_counter = INT_MIN;
    scanf("%i %i", &a, &b);
    for (int i = a; i<=b; ++i)
    {
        counter = 1;
        int n = i;
        while (n != 1)
        {
            if (n % 2 == 0) {
                n /= 2;
                counter += 1;
            }
            else if (n % 2 == 0) {
                n = 3*n +1;
                counter += 1;
             } 
        }
        if (counter > max_counter)
        {
            max_counter = counter;
            max_number = i;
        }
    }
    printf("\nNumber = %i Counter = %i", max_number, max_counter);

return 0;
}