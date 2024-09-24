#include <stdio.h>
#include <string.h>

void symbol_type(char a) 
{
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || ( a >= 'a' && a <= 'z')) {
        printf("Letter");
    }
    else if (a >= '0' && a <= '9') {
        printf("Digit");
    }
    else {
        printf("Other");
    }
}

int main() {
    char a;
    symbol_type(a);

    return 0;
}