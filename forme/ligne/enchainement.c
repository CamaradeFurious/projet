#include <stdio.h>
#include "enchainement.h"

/*int enchainement() {
        // placement x/y sur la page
    printf("Veuillez préciser ces coordonnés :");
    printf("Ci dessous la valeur X");
    scanf("%d");
    int x = ("%d");
    printf("Ci dessous la valeur de Y");
    scanf("%d");
    int y =("%d");

    int hauteur = 1000;
    int largeur = 2;
        //colors
    printf("Ici veuillez entrer la couleur, attention seul le format hexadécimal préceder de Ox est prit en compte");
    scanf("%i", &colors);
    int colors = ("%i");


    FILE *f = fopen("visu.html", "w");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }


    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title>ligne Bleu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <rect x=\"0\" y=\"0\" width=\"%d\" height=\"%d\" fill=\"%i\" />\n", largeur, hauteur,  colors);
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html a été généré.\n");
    return 0;
}*/ //TOUT EST FAUX ICI MAL COMPRIS A REFAIRE EN URGENCE