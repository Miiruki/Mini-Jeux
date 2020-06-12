#include <stdio.h>
#include <stdlib.h>

void jeux(int nombreMystere, int nombreEntree, int nombreCoups)
{

    while (nombreEntree != nombreMystere)
    {

        printf("\nQuel est votre choix ? : ");
        nombreCoups++;
        scanf("%d", &nombreEntree);
        if (nombreMystere > nombreEntree)
        {
            printf("Plus grand ! \n");
        }
        else if (nombreMystere < nombreEntree)
        {
            printf("Plus petit ! \n");
        }
        else
        {
            printf("Vous avez gagner félicitation !!! \n");
            printf("Vous avez réalisé le jeux en %d", nombreCoups);
            printf(" tentatives !! \n");
        }
    }
}

int number(MIN, MAX)
{
    int nombreMystere = 0;
    while (MIN >= MAX)
    {
        printf("Veuillez choisir un nombre maximum : ");
        scanf("%d", &MAX);

        printf("Veuillez choisir un nombre minimum : ");
        scanf("%d", &MIN);
    }

    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    return nombreMystere;
}