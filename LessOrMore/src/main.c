#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libs.h"

int main(int argc, char **argv, char **envv)
{

    int newGame = 1;
    int nombreEntree = 0, nombreCoups = 0;

    srand(time(NULL));
    int MAX = 0, MIN = 0;
    int nombreMystere = number(MAX,MIN);

    jeux(nombreMystere, nombreEntree, nombreCoups);

    printf("\nVoulez vous rejouer ? Si oui tapez 1, si non tapez 0 : ");
    if (scanf("%d", &newGame) != 1){
        printf("Failed to read integer \n");
    }

    if (newGame)
    {
        nombreMystere = number(MAX,MIN);
        jeux(nombreMystere, nombreEntree, nombreCoups);
        printf("Voulez vous rejouer ? Si oui tapez 1, si non tapez 0 : ");
        if (scanf("%d", &newGame) != 1){
            printf("Failed to read integer \n");
        };
    }
    else
    {
        return 0;
    }
    return 0;
}
