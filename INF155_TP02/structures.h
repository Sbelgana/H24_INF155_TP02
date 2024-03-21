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


typedef struct t_equipe{
    char id[10];
    char nom[20];
    char conf[20];
    char groupe;
    int vic, def, nul;
    int buts_p, buts_c, diff_buts;
    int pts, clas, matche_jouer;
};

typedef struct t_groupe{
    char nom;
    Equipe* eqp;
    int nb_eqp;
    int cap;
} ;

typedef struct t_buts{
    int buts_eq1, buts_eq2;
};

typedef struct t_eliminatoire{
    Equipe rencontre[2];
};

typedef struct t_wcup{
    Groupe grp[8];
    Eliminatoire tour_16[8];
    Eliminatoire tour_8[4];
    Eliminatoire tour_4[2];
    Eliminatoire finale;
};

typedef struct t_matche{
    char id_vis[10], id_dom[10];
    int clas_vis, clas_dom;
    int buts_eq1, buts_eq2;
    int pts_vis, pts_dom;
};

typedef struct t_liste_matches{
    Matche* matches;
    int nb_matche;
    int cap;
};

#endif //INF155_TP02_STRUCTURES_H
