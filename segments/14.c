#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book 
{
    char title[50];
    int pages;
    float price;
};
typedef struct book Book;

int main()
{
    Book* pb = (Book*)malloc(sizeof(Book));
    strcpy(pb->title, "Don Quixote");
    pb->pages = 1000;
    pb->price = 750.0;
    printf("Book: %s, Pages: %i, Price: %.1f\n", pb->title, pb->pages, pb->price);
    free(pb);
}