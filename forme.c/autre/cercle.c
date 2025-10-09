#include <stdio.h>

int main() {
    // Dimensions du cercle
    int rayon = 200;
    int hauteur = 400;
    int largeur = 400;
 ;

    // Création du fichier HTML
    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    // Écriture du contenu HTML avec le SVG
    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <circle cx=\"%d\" cy=\"%d\" rx=\"%d\" rx=\"%d\" fill=\"#431caeff\" />\n", largeur, hauteur, rayon/2);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}