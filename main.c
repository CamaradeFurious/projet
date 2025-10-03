#include <stdio.h>

int main() {
    // Dimensions du cercle
    int largeur = 100;
    int hauteur = 100;

    // Création du fichier HTML
    FILE *f = fopen("cercle.html", "w");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    // Écriture du contenu HTML avec le SVG
    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>cercle Bleue SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <ellipse cx=\"%d\" cy=\"%d\" rx=\"%d\" ry=\"%d\" fill=\"blue\" />\n", largeur/2, hauteur/2, largeur/2, hauteur/2);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier cercle.html a été généré.\n");
    return 0;
}