#include <stdio.h>
#include "carre.h"

int polygone() {
        // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d");
    int x = ("%d");
    printf("Ci dessous la valeur de Y");
    scanf("%d");
    int y =("%d");

    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title> visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <polygon points="0,100 50,25 50,75 100,0" />");
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}
/*
    <svg viewBox="0 0 200 100" xmlns="http://www.w3.org/2000/svg">
  <!-- Exemple d'un polygone avec le remplissage par défaut -->
  <polygon points="0,100 50,25 50,75 100,0" />

  <!-- Le même polygone sans remplissage et avec un contour -->
  <polygon points="100,100 150,25 150,75 200,0" fill="none" stroke="black" />
</svg>
*/
