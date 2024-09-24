#include <stdio.h>
#include <string.h>

void trim_after_first_space(char a[])
{
    char *space_ptr = strchr(a, ' ');
    if (space_ptr != NULL) {
        *space_ptr = '\0'; 
    }
}

int main() {
    char a[] = "Cats and Dogs";
    printf("%s\n", a);
    trim_after_first_space(a);
    printf("%s\n", a);

    return 0;
}