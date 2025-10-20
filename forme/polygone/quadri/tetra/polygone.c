#include <stdio.h>
#include "carre.h"

int polygone() {
        // placement points sur la page
        printf("Combien de point voulez vous que votre polygone comporte ?");
        scanf("%d");
        while ("%d"){
            printf("Veuillez préciser les coordonnés de chacun de vos points :");
            printf("Ci-dessous la valeur X");
            scanf("%d", &x);
            int x = ("%d");
            printf("Ci-dessous la valeur de Y");
            scanf("%d", &y);
            int y = ("%d");
        }


    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title> visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n", largeur, hauteur);
    fprintf(f, "  <polygon points=""%d""%d"" />", x y );
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}

