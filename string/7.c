
#include <stdio.h>
#include <string.h>

void safe_strcpy(char a[], size_t a_size, const char b[]) {   
    if (strlen(b) >= a_size) {
        strncpy(a, b, a_size - 1); 
        a[a_size - 1] = '\0';
    } else {
        strcpy(a, b);
    }
}

int main() {
    char a[10] = "Mouse"; 
    char b[50] = "LargeElephant"; 
    safe_strcpy(a, sizeof(a), b); 
    printf("%s\n", a); 

    return 0;
}