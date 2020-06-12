#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libs.h"

int main(int argc, char **argv, char **envv)
{

    int newGame = 1;
    int nombreEntree = 0, nombreCoups = 0;

    /* On génère un nombre aléatoire */

    srand(time(NULL));
    int MAX = 0, MIN = 0;
    int nombreMystere = number(MAX,MIN);

    /* On lance la fonction jeux : */

    jeux(nombreMystere, nombreEntree, nombreCoups);

    printf("\nVoulez vous rejouer ? Si oui tapez 1, si non tapez 0 : ");
    scanf("%d", &newGame);

    if (newGame)
    {
        nombreMystere = number(MAX,MIN);
        jeux(nombreMystere, nombreEntree, nombreCoups);
        printf("Voulez vous rejouer ? Si oui tapez 1, si non tapez 0 : ");
        scanf("%d", &newGame);
    }
    else
    {
        return 0;
    }
    return 0;
}
