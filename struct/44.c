#include <stdio.h>
#include <stdalign.h>
struct cat 
{
    char x;
    size_t y;
};

struct dog
{
    size_t y;
    char x;
};

struct mouse
{
    char x;
    char y;
    size_t z;
};

struct rat
{
    char x;
    size_t z;
    char y;
};
struct fox
{
    char x;
    struct mouse y;
};
int main()
{   
    printf("1. \n");
    printf("Size of char = %zu\n", sizeof(char));
    printf("Alingment of char = %zu\n", alignof(char));
    printf("2. \n");
    printf("Size of int = %zu\n", sizeof(int));
    printf("Alingment of int = %zu\n", alignof(int));
    printf("3. \n");
    printf("Size of size_t = %zu\n", sizeof(size_t));
    printf("Alingment of size_t = %zu\n", alignof(size_t));
    printf("4. \n");
    printf("Size of int[10] = %zu\n", sizeof(int[10]));
    printf("Alingment of int[10] = %zu\n", alignof(int[10]));
    printf("5. \n");
    printf("Size of int* = %zu\n", sizeof(int*));
    printf("Alingment of int* = %zu\n", alignof(int*));
    printf("6. \n");
    printf("Size of struct cat = %zu\n", sizeof(struct cat));
    printf("Alingment of struct cat = %zu\n", alignof(struct cat)); 
    printf("7. \n");
    printf("Size of struct dog = %zu\n", sizeof(struct dog));
    printf("Alingment of struct dog = %zu\n", alignof(struct dog)); 
    printf("8. \n");
    printf("Size of struct mouse = %zu\n", sizeof(struct mouse));
    printf("Alingment of struct mouse = %zu\n", alignof(struct mouse));
    printf("9. \n");
    printf("Size of struct rat = %zu\n", sizeof(struct rat));
    printf("Alingment of struct rat = %zu\n", alignof(struct rat));
    printf("10. \n");
    printf("Size of struct fox = %zu\n", sizeof(struct fox));
    printf("Alingment of struct fox = %zu\n", alignof(struct fox));
     
    return 0;
}