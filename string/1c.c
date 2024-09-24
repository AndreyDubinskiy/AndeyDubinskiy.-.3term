#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void symbol_type(char a)
{
    if (isalpha(a)) { 
        printf("Letter");
    }
    else if (isdigit(a)) { 
        printf("Digit");
    }
    else {
        printf("Other");
    }
}

int main()
{
    char a[2]; 
    scanf("%1s", a);
    symbol_type(a[0]); 
    return 0;
}