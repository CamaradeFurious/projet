#include <stdio.h>
#include "rectangle.h"

int rectangle() {
        // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d");
    int x = ("%d");
    printf("Ci dessous la valeur de Y");
    scanf("%d");
    int y =("%d");
    // Dimensions du réctangle
    printf("veuillez donner les dimensions du rectangle");
    printf('Ci-dessous la hauteur :');
    scanf("%d");
    int hauteur = ("%d");
    printf('Ci-dessous la largeur :');
    scanf("%d");
    int largeur = ("%d");

    //couleur
    printf("Ici veuillez indiquer la couleur du carré, attention c'est en hexadécimal, en entrant la référance de la couleur, précéder le de : Ox");
    scanf("%i");
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
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", hauteur, largeur);
    fprintf(f, "  <rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%i\" />\n", x, y, hauteur, largeur, colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}