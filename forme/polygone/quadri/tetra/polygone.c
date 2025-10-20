#include <stdio.h>
#include "carre.h"

int polygone() {
        // placement points sur la page
        printf("Combien de point voulez vous que votre polygone comporte ?\n");
        int (A);
        scanf("%d", &A);
        while (A){
            printf("Veuillez préciser les coordonnés de chacun de vos points :\n");
            printf("Ci-dessous la valeur X");
            int x;
            scanf("%d", &x);
            printf("Ci-dessous la valeur de Y\n");
            int y;
            scanf("%d", &y);
        }


    FILE *f = fopen("visu.html", "r");
    if (f == NULL) {
        perror("Erreur lors de la création du fichier");
        return 1;
    }

    fprintf(f, "<!DOCTYPE html>\n");
    fprintf(f, "<html lang=\"fr\">\n<head>\n<meta charset=\"UTF-8\">\n<title> visu SVG</title>\n</head>\n<body>\n");
    fprintf(f, "<svg width=\"x\" height=\"y\" xmlns=\"http://www.w3.org/2000/svg\">\n");
    fprintf(f, "  <polygon points=""x""y"" />" );
    fprintf(f, "</svg>\n");
    fprintf(f, "</body>\n</html>\n");

    fclose(f);
    printf("Le fichier visu.html à été modifié.\n");
    return 0;
}

