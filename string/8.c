#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *word = argv[1];
    int count = atoi(argv[2]);
    for (int i = 0; i < count; i++) {
        printf("%s", word);
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");
     
    return 0;
}