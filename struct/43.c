#include <stdio.h>
#include <stdlib.h>  
#include <string.h>


struct game
{
    char title[50];
    double average_rating;
};
typedef struct game Game;

int comparison(const void* a, const void* b)
{
    const Game *gameA = (const Game*)a;
    const Game *gameB = (const Game*)b;
    if (gameB->average_rating > gameA->average_rating)
        return 1;
    else if (gameB->average_rating < gameA->average_rating)
        return -1;
    else
        return 0;
}

int main() 
{
    char a;
    int n;
    scanf("%d", &n);
    scanf("%c", &a);
    Game games[69];
    for (int i = 0; i < n; i++)
    {
        char title[50];
        scanf("%[^:]", title);
        scanf("%c", &a);
        int k;
        scanf("%d", &k);
        int sum = 0;
        for (int j = 0; j < k; j++) 
        {
            int rating;
            scanf("%d", &rating);
            sum += rating;
        }
        double average = (double)sum / k;

        strcpy(games[i].title, title);
        games[i].average_rating = average;
        scanf("%c", &a); 
        while (a != '\n' && a != EOF) 
        {
            scanf("%c", &a);
        }
    }
    qsort(games, n, sizeof(Game), comparison);
    for (int i = 0; i < n; i++) 
    {
        printf("%s: %.2lf\n", games[i].title, games[i].average_rating);
    }
}