#include <stdio.h>
#include "ellipses.h"

int ellipse() {
    // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :\n");
    printf("Ci dessous la valeur X\n");
    int x;
    scanf("%d", &x);
    printf("Ci dessous la valeur de Y\n");
    int y;
    scanf("%d", &y);
    // Dimensions de l'ellipse
    printf("Ici, veuillez donner la taille de votre ellipse :\n");
    printf("En premier ça largeur :\n");
    int largeur;
    scanf("%d", &largeur);
    printf("Ici, ça hauteur\n");
    int hauteur ;
    scanf("%d", &hauteur);
        //colors
    printf("Ici veuillez entrer la couleur, attention seul le format hexadécimal préceder de Ox est prit en compte\n");
    int colors;
    scanf("%i", &colors);

    // Création du fichier HTML
    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    // Écriture du contenu HTML avec le SVG
    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title> visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <ellipse cx=\"%d\" cy=\"%d\" rx=\"%d\" ry=\"%d\" fill=\"%i\" />\n", largeur/2, hauteur/2, largeur/2, hauteur/2, colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}