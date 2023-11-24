#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "../include/menu.h"
#include "../include/jeu.h"


int main(){
    InitialiserGraphique();
    CreerFenetre(0, 0, 1200, 1000);

    int choixMenuPrincipal = 0;
    int choixModesDeJeu = 0;

    while (1){
        if(choixMenuPrincipal == 0){
            afficherMenuPrincipal();
            choixMenuPrincipal = attendreChoixMenu();
        }else if(choixMenuPrincipal == 1){
            afficherMenuModesDeJeu();
            choixModesDeJeu = attendreChoixModesDeJeu();
            choixMenuPrincipal = 0;  
        }else if(choixMenuPrincipal == 2){
            FermerGraphique();
            return 0;  
        }
    }

    return 0;
}