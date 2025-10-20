#include <stdio.h>
#include "cercle.h"

int cercle() {
    // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    int x;
    scanf("%d", &x);
    printf("Ci dessous la valeur de Y");
    int y;
    scanf("%d", &y);
    // Dimensions du cercle
    printf("Maintenant passons à ça taille :");
    printf("Ici veuillez entrer son rayons");
    int r ;
     scanf("%d", &r);
    int h ;
     scanf("%d", &h);
    int l ;
    scanf("%d", &l);
    //colors
    printf("Ici veuillez entrer la couleur, attention seul le format hexadécimal préceder de Ox est prit en compte");
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
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", l,h );
    fprintf(f, "  <circle cx=\"%d\" cy=\"%d\" r=\"%d\"  fill=\"%i\" />\n", x, y, r/2, colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}