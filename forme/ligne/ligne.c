#include <stdio.h>
#include "ligne.h"

int ligne() {
        // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d");
    int x = ("%d", &x);
    printf("Ci dessous la valeur de Y");
    scanf("%d", &y);
    int y =("%d");

    // taille
    printf("Ici veuillez indiqué la taille de votre ligne :");
    printf("Pour commencer ça hauteur :");
    scanf("%d");
    int hauteur = ("%d", &hauteur);
    printf("Ensuite ça largeur :");
    scanf("%d", &largeur);
    int largeur = ("%d");
        //colors
    printf("Ici veuillez entrer la couleur, attention seul le format hexadécimal préceder de Ox est prit en compte");
    scanf("%i", &colors);
    int colors = ("%i");


    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }


    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%i\" />\n", x, y, largeur, hauteur, colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}