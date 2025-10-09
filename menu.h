#ifndef MENU_H
#define MENU_H

typedef struct {
    int create;
    int cut;
    int view;
    int modif;
    int restart;
    int stop;
} menu_t;

typedef struct {
    int choix_menu;
    int choix_forme;
} choix_t;

typedef struct {
    char create_m;
    int create_n;
} create_t;

void afficher_menu();

int menu_s();

#endif