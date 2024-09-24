#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
void is_palindrom( char a[])
{
    scanf("%s", a);
    int SIZEa;
    SIZEa = strlen(a);
    int j;
    for (int i = 0; i < SIZEa / 2; ++i) {
        if (a[i] == a[SIZEa - i - 1]) {
            j++;
        }
        else {
            j = j + 0;
        }
    }
    if (j == SIZEa / 2) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}

int main() {
    char a[100]; 
    is_palindrom(a);
     
    return 0;
}