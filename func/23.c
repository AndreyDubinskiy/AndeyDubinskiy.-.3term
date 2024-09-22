int* print_even(int a, int b, int* size) 
{   
    int count = 0;
    
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            count++;
        }
    }
    
    int* even = (int*)malloc(count * sizeof(int));
    int index = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            even[index] = i;
            index++;
        }
    }

    *size = count; 
    return even; 
}

int main() {
    int a, b;
    int size = 0;
    scanf("%i %i", &a, &b);
    
    int* even = print_even(a, b, &size);
     if (size > 0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", even[i]);
        }
        printf("\n");
        free(even);
    } else {
        printf("There is no even numbers in spacing [%d, %d].\n", a, b);
    }
    return 0;
}