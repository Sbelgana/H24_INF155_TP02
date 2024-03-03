#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#ifndef INF155_TP02_STRUCTURES_H
#define INF155_TP02_STRUCTURES_H

typedef struct {
    char id[10];
    char nom[20];
    char conf[20];
    char groupe;
    size_t vic, def, nul;
    size_t buts_p, buts_c, diff_buts;
    size_t pts, clas, matche_jouer;
} Equipe;

typedef struct {
    char nom;
    Equipe* eqp;
    size_t nb_eqp;
    size_t cap;
} Groupe;

typedef struct {
    int buts_eq1, buts_eq2;
}Buts;

typedef struct {
    Equipe rencontre[2];
}Eliminatoire;

typedef struct {
    Groupe grp[8];
    Eliminatoire tour_16[8];
    Eliminatoire tour_8[4];
    Eliminatoire tour_4[2];
    Eliminatoire finale;
} W_CUP;

typedef struct{
    char id_vis[10], id_dom[10];
    size_t clas_vis, clas_dom;
    size_t buts_eq1, buts_eq2;
    size_t pts_vis, pts_dom;
}Matche;

typedef struct{
    Matche* matches;
    size_t nb_matche;
    size_t cap;
}Liste_matches;

#endif //INF155_TP02_STRUCTURES_H
