#include <stdio.h>
#include <string.h>

void symbol_type(char a) 
{
    scanf("%c", &a);
    if ((a >= 65 && a <= 90) || ( a >= 97 && a <= 122)) {
        printf("Letter");
    }
    else if (a >= 48 && a <= 57) {
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