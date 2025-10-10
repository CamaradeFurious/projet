#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "forme/autre/cercle.h"
#include "forme/autre/ellipses.h"
#include "forme/ligne/ligne.h"
#include "forme/polygone/quadri/tetra/carre.h"
#include "forme/polygone/quadri/tetra/rectangle.h"
#include"forme/autre/groupe.h"
#include"forme/autre/traj.h"
#include"forme/ligne/enchainement.h"
#include"forme/polygone/decagone/decagone.h"
#include"forme/polygone/heptagone/heptagone.h"
#include"forme/polygone/hexagone/hexagone.h"
#include"forme/polygone/nonagone/nonagone.h"
#include"forme/polygone/octogone/octogone.h"
#include"forme/polygone/pentagone/pentagone.h"
#include"forme/polygone/trygone/triangle.h"



int menu_s() {
    int menu;
    int choix_forme;
    char create_choice;
    FILE *f;

    while (1) {
        // menu principal
        printf("\nBienvenue dans le Menu\n");
        printf("1- Créer une forme ? Si oui tapez 1\n");
        printf("2- Voulez-vous supprimer les formes ? Si oui tapez 2\n");
        printf("3- Voulez-vous afficher les formes ? Si oui tapez 3\n");
        printf("4- Voulez-vous modifier les formes ? Si oui tapez 4\n");
        printf("5- Voulez-vous revenir à zéro ? Si oui tapez 5\n");
        printf("0- Voulez-vous quitter le programme ? Si oui tapez 0\n");

        scanf("%d", &menu);

        switch (menu) {
            case 1:
                // Menu forme
                printf("\nVous avez choisi de créer une forme.\n");
                printf("! - Pour voir le menu des formes\n");
                printf(": - Pour revenir au menu principal\n");
                printf("S - Pour quitter le programme\n");

                scanf(" %c", &create_choice);  

                if (create_choice == '!') {
                    printf("1 - Créer un cercle\n");
                    printf("2 - Créer un carré\n");
                    printf("3 - Créer un triangle\n");
                    printf("4 - Créer un rectangle\n");
                    printf("5 - Créer une ellipse\n");
                    printf("6 - Créer une ligne\n");
                    printf("7 - Créer une trajectoire\n");
                    printf("8 - Créer un groupe\n");
                    printf("9 - Créer un pentagone\n");
                    printf("10 - Créer un octogone\n");
                    printf("11 - Créer un nonagone\n");
                    printf("12 - Créer un hexagone\n");
                    printf("13 - Créer un heptagone\n");
                    printf("14 - Créer un décagone\n");
                    printf("15 - Créer un enchaînement\n");

                    scanf("%d", &choix_forme);

                    switch (choix_forme) {
                        case 1:
                            printf("Création d'un cercle\n");
                            cercle();
                            break;
                        case 2:
                            printf("Création d'un carré\n");
                            carre();
                            break;
                        case 3:
                            printf("Création d'un triangle\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 4:
                            printf("Création d'un rectangle\n");
                            rectangle();
                            break;
                        case 5:
                            printf("Création d'une ellipse\n");
                            ellipse();
                            break;
                        case 6:
                            printf("Création d'une ligne\n");
                            ligne();
                            break;
                        case 7:
                            printf("Création d'une trajectoire\n");
                            f = fopen("/workspaces/projet/forme.c/autre/trajéctoire.c", "r");
                            break;
                        case 8:
                            printf("Création d'un groupe\n");
                            f = fopen("/workspaces/projet/forme.c/autre/groupe.c", "r");
                            break;
                        case 9:
                            printf("Création d'un pentagone\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 10:
                            printf("Création d'un octogone\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 11:
                            printf("Création d'un nonagone\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 12:
                            printf("Création d'un hexagone\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 13:
                            printf("Création d'un heptagone\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 14:
                            printf("Création d'un décagone\n");
                            f = fopen("/workspaces/projet/forme.c/autre/rond.c", "r");
                            break;
                        case 15:
                            printf("Création d'un enchaînement\n");
                            f = fopen("/workspaces/projet/forme.c/ligne/enchainement.c", "r");
                            break;
                        default:
                            printf("Choix de forme invalide.\n");
                            continue; 
                    }

                    if (f == NULL) {
                        perror("Erreur d'ouverture du fichier");
                    } else {
                        printf("Fichier ouvert avec succès (simulation).\n");
                        fclose(f);
                    }

                } else if (create_choice == ':') {
                    printf("Retour au menu principal...\n");
                    continue;
                } else if (create_choice == 'S' || create_choice == 's') {
                    printf("Fin du programme.\n");
                    exit(0);
                } else {
                    printf("Caractère invalide.\n");
                }

                break;

            case 2:
                f = fopen("visu.html", "w");
                if (f == NULL) {
                    perror("Erreur lors de la création du fichier");
                } else {
                    printf("Formes supprimées (fichier réinitialisé).\n");
                    fclose(f);
                }
                break;

            case 3:
                f = fopen("visu.html", "r");
                if (f == NULL) {
                    perror("Erreur lors de l'ouverture du fichier");
                } else {
                    printf("Veuillez télécharger le dossier visu.html puis l'ouvrir sur internet.\n");
                    fclose(f);
                }
                break;
            
                // A FAIRE UNE FOIS PATH ET FORME FINI !!
            case 4:
                printf("Fonction de modification encore à implémenter.\n");
                break;

            case 5:
                f = fopen("visu.html", "w");
                if (f == NULL) {
                    perror("Erreur lors de la remise à zéro");
                } else {
                    printf("Fichier remis à zéro.\n");
                    fclose(f);
                }
                break;

            case 0:
                printf("Fin du programme.\n");
                return 0;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    }

    return 0;
}