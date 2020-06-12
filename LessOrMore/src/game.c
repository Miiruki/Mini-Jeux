#include <stdio.h>
#include <stdlib.h>

void jeux(int nombreMystere, int nombreEntree, int nombreCoups)
{

    while (nombreEntree != nombreMystere)
    {

        printf("\nQuel est votre choix ? : ");
        nombreCoups++;
        if (scanf("%d", &nombreEntree) != 1){
            printf("Failed to read integer \n");
        }
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

int number(int MIN, int MAX)
{
    int nombreMystere = 0;
    while (MIN >= MAX)
    {
        printf("Veuillez choisir un nombre maximum : ");
        if (scanf("%d", &MAX) != 1){
            printf("Failed to read integer \n");
        }

        printf("Veuillez choisir un nombre minimum : ");
        if (scanf("%d", &MIN) != 1) {
            printf("Failed to read integer \n");
        }
    }

    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    return nombreMystere;
}