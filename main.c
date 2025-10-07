#include <stdio.h>
#include <stdlib.h>

typedef struct menu_s{
    int create;
    int cut;
    int view;
    int modif;
    int restart;
    int stop;
}menu_t;

typedef struct choix_s{ 
    int choix_menu;
    int choix_forme;
}choix_t;

typedef struct create_s{

}create_t

int main ( ){
    int(menu_t);{
         // Création du fichier HTML
    FILE *f = fopen("visu.html", "w");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

        // Menu
        printf("Bienvenue dans le Menu \n");
        printf("1- Créer une forme ? ci oui 1 \n" create_t);
        printf("2- Vouler vous supprimer les formes ? ci oui veuillez taper 2 \n" cut);
        Printf("3- Vouler vous afficher les formes ? ci oui veuillez taper 3 \n " view);
        printf("4- Vouler vous modifier les formes ? ci oui veuillez taper 4 \n" modif);
        printf("5- Vouler vous revenir à 0 ? ci oui veuillez taper 5 \n " restart);
        printf("0- Vouler vous quitter le programme ? ci oui veuillez taper 0 \n " stop);
        scanf("%d", &create_t);
        switch (create_t){
            case 1:
                int create_t(){
                    printf("Vous avez choisi de créer une forme. veuillez donc choisir laquelle ou les-quelles: \n");
                    printf("! - Pour voir le menu des formes \n" );
                    printf(": - Pour revenir au menu principal \n");
                    printf("0 - Pour quitter le programme \n");
                    scanf("%d")
                while if (!){
                        printf("1 - Créer un cercle ? ci oui veuillez taper 1 \n" );
                        printf("2 - Créer un carré ? ci oui veuillez taper 2 \n" );
                        printf("3 - Créer un triangle ? ci oui veuillez taper 3 \n" );
                        printf("4 - Créer un rectangle ? ci oui veuillez taper 4 \n" );
                        printf("5 - Créer une éllipse ? ci oui veuillez taper 5 \n" );
                        printf("6 - Créer une ligne ? ci oui veuillez taper 6 \n" );
                        printf("7 - Créer une trajéctoire  ? ci oui veuillez taper 7 \n");
                        printf("8 - Créer un groupe  ? ci oui veuillez taper 8 \n" );
                        printf("9 - Créer un pentagone ? ci oui veuillez taper 9 \n" );
                        printf("10 - Créer un octogone ? ci oui veuillez taper 10 \n" );
                        printf("11 - Créer un nonagone ? ci oui veuillez taper 11 \n" );
                        printf("12 - Créer un hexagone ? ci oui veuillez taper 12 \n" );
                        printf("13 - Créer un heptagone ? ci oui veuillez taper 13 \n" );
                        printf("14 - Créer un decagone ? ci oui veuillez taper 14 \n" );
                        printf("15 - Créer un enchainement ? ci oui veuillez taper 15 \n");
                        scanf(%d);
                        if (){
                            scanf(%d );
                            switch(choix_forme){
                                case 1:
                                %d == 1;
                                printf("vous avez choisi de créé un cercle");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 2:
                                %d == 2;
                                printf("Vous avez choisi de créé un carré");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 3
                                %d == 3;
                                printf("Vous avez choisi de créé un triangle");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 4:
                                %d == 4;
                                printf("Vous avez choisi de créé un rectangle");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 5:
                                %d == 5;
                                printf("Vous avez choisi de créé une éllipse");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/ellipses.c, char -r);

                                case 6:
                                %d == 6;
                                printf("Vous avez choisi de créé une ligne");
                                FILE *fopen(char /workspaces/projet/forme.c/ligne/ligne.c, char -r);
                                
                                case 7:
                                %d == 7;
                                printf("Vous avez choisi de créé un une trajéctoire");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/trajéctoire.c, char -r);

                                case 8:
                                %d == 8;
                                printf("Vous avez choisi de créé un groupe");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/groupe.c, char -r);

                                case 9:
                                %d == 9;
                                printf("Vous avez choisi de créé un pentagone");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 10:
                                %d == 10;
                                printf("Vous avez choisi de créé un octogone");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 11:
                                %d == 11;
                                printf("Vous avez choisi de créé un nonagone");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 12:
                                %d == 12;
                                printf("Vous avez choisi de créé un hexagone");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 13:
                                %d == 13;
                                printf("Vous avez choisi de créé un heptagone");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 14:
                                %d == 14;
                                printf("Vous avez choisi de créé un decagone");
                                FILE *fopen(char /workspaces/projet/forme.c/autre/rond.c, char -r);

                                case 15:
                                %d == 15;
                                printf("vous avez choisi de créé un enchainement");
                                FILE *fopen(char /workspaces/projet/forme.c/ligne/enchainement.c, char -r);

                            }
                        }
                        else (){
                        
                    }
                else if (:){
                    printf("Vous avez choisi de retourner dans le menue de création \n");
                    return create_t
                }
                else {
                    printf("erreur");
                    exit(0);
                }
                scanf("%d", &choix_forme);
                }
                return menu_t;
                }
                break;
            case 2:
                cut();
                break;
            case 3:
                view();
                break;
            case 4:
                modif();
                break;
            case 5:
                restart();
                cut;
                return menu_t;
            case 6:
                stop();
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
            }
        }
}