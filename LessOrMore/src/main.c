#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libs.h"

int main(int argc, char **argv, char **envv){
  
    int newGame = 1;
    int nombreMystere = 0 , nombreEntree = 0 , nombreCoups = 0;
    
    /* On génère un nombre aléatoire */

    srand(time(NULL));
    int MAX = 0, MIN = 0;
   
   while ( MIN >= MAX){
        printf("Veuillez choisir un nombre maximum : ");
        scanf("%d", &MAX);
    
        printf("Veuillez choisir un nombre minimum : ");
        scanf("%d", &MIN);
   }

    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    /* On lance la fonction jeux : */

    jeux(nombreMystere, nombreEntree, nombreCoups);
    
    printf ("\nVoulez vous rejouer ? Si oui tapez 1, si non tapez 0 : ");
    scanf("%d", &newGame);
    

    if (newGame) {
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        jeux(nombreMystere, nombreEntree, nombreCoups);
        printf ("Voulez vous rejouer ? Si oui tapez 1, si non tapez 0 : ");
        scanf("%d", &newGame);
    }
    else {
        return 0;
    }
    return 0;
}
