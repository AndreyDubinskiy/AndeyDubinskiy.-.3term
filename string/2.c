#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

int main() {
    char a[100]; 
    char b[100];
    char result[200]; 
    int SIZEa, SIZEb, MAXSIZE;

    scanf("%s", a);
    scanf("%s", b);
    SIZEa = strlen(a);
    SIZEb = strlen(b); 

    MAXSIZE = (SIZEa < SIZEb) ? SIZEb : SIZEa;

    int j = 0; 

    for (int i = 0; i < MAXSIZE; ++i) {
        if (i < SIZEa) {
            result[j++] = a[i]; 
        }
        if (i < SIZEb) {
            result[j++] = b[i]; 
        }
    }

    result[j] = '\0'; // "0 - для завершения строки

    printf("%s\n", result); 

    return 0;
}