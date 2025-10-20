#include <stdio.h>
#include "ligne.h"

int ligne() {
        // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :\n");
    printf("Ci dessous la valeur X\n");
    int x;
    scanf("%d", &x);
    printf("Ci dessous la valeur de Y\n");
    int y;
    scanf("%d", &y);

    // taille
    printf("Ici veuillez indiqué la taille de votre ligne :\n");
    printf("Pour commencer ça hauteur :\n");
    int hauteur;
    scanf("%d", &hauteur);
    printf("Ensuite ça largeur :\n");
    int largeur;
    scanf("%d", &largeur);
        //colors
    printf("Ici veuillez entrer la couleur, attention seul le format hexadécimal préceder de Ox est prit en compte\n");
    int colors;
    scanf("%i", &colors);


    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }


    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <rect x=\"x\" y=\"y\" width=\"%d\" height=\"%d\" fill=\"%i\" />\n", largeur, hauteur, colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}