#include <stdio.h>

void count_even(int array[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    printf("%i\n", count);
}

int main() {
    int array[1000];
    int size;
    printf("Size:");
    scanf("%d", &size);
    printf("Array:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    count_even(array, size);

    return 0;
}