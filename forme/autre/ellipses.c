#include <stdio.h>
#include "ellipses.h"

int ellipse() {
    // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d", &x);
    int x = ("%d");
    printf("Ci dessous la valeur de Y");
    scanf("%d", &y);
    int y =("%d");
    // Dimensions de l'ellipse
    printf("Ici, veuillez donner la taille de votre ellipse :");
    printf("En premier ça largeur :");
    scanf("%d", &largeur);
    int largeur = "%d";
    printf("Ici, ça hauteur");
    scanf("%d", &hauteur);
    int hauteur = "%d";
        //colors
    printf("Ici veuillez entrer la couleur, attention seul le format hexadécimal préceder de Ox est prit en compte");
    scanf("%i", &colors);
    int colors = ("%i");

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