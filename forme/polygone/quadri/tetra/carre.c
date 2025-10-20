#include <stdio.h>
#include "carre.h"

int carre() {
        // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d", &x);
    int x = ("%d");
    printf("Ci dessous la valeur de Y");
    scanf("%d", &y);
    int y =("%d");
    // Dimensions du carré
    printf("veuillez donner la taille du carré ci dessous :");
    scanf("%d", &taille);
    int taille = ("%d");
    //couleur
    printf("Ici veuillez indiquer la couleur du carré, attention c'est en hexadécimal, en entrant la référance de la couleur, précéder le de : Ox");
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
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", taille, taille);
    fprintf(f, "  <rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%i\" />\n", x, r, taille, taille, colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}