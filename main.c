#include <stdio.h>

int main() {
    // Dimensions de la ligne
    int hauteur = 1000;
    int largeur = 2;

    // Création du fichier HTML
    FILE *f = fopen("ligne.html", "w");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    // Écriture du contenu HTML avec le SVG
    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>ligne Bleu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <rect x=\"0\" y=\"0\" width=\"%d\" height=\"%d\" fill=\"blue\" />\n", largeur, hauteur);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier ligne.html a été généré.\n");
    return 0;
}