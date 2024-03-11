#ifndef INF155_TP02_STRUCTURES_H
#define INF155_TP02_STRUCTURES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <assert.h>

#define NOM_FICHIER_EQUIPES "..//equipes2022.txt"
#define NOM_FICHIER_MATCHES "..//matchs2022.txt"


typedef struct {
    char id[10];
    char nom[20];
    char conf[20];
    char groupe;
    int vic, def, nul;
    int buts_p, buts_c, diff_buts;
    int pts, clas, matche_jouer;
} Equipe;

typedef struct {
    char nom;
    Equipe* eqp;
    int nb_eqp;
    int cap;
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
    int clas_vis, clas_dom;
    int buts_eq1, buts_eq2;
    int pts_vis, pts_dom;
}Matche;

typedef struct{
    Matche* matches;
    int nb_matche;
    int cap;
}Liste_matches;

#endif //INF155_TP02_STRUCTURES_H