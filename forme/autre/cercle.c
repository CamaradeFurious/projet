#include <stdio.h>
#include "cercle.h"

int cercle() {
    // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d");
    int x = ("%d");
    printf("Ci dessous la valeur de Y");
    scanf("%d");
    int y =("%d");
    // Dimensions du cercle
    printf("Maintenant passons à ça taille :");
    printf("Ici veuillez entrer sont rayons");
    scanf("%d");
    int r = ("%d");
    int h = ("%d");
    int l = ("%d");
 

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
    fprintf(f, "  <circle cx=\"%d\" cy=\"%d\" r=\"%d\"  fill=\"#431caeff\" />\n", x, y, r/2);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}