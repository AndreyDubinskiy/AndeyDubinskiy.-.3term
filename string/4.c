#include <stdio.h>
#include <string.h>

void encrypt(char *str, int k) {
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + k) % 26 + 26) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + k) % 26 + 26) % 26 + 'A'; 
        }
        str[i] = c;
    }
}

int main() {
    char str[100];
    int k;
    scanf("%d", &k);
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    encrypt(str, k);
    printf("%s\n", str);

    return 0;
}