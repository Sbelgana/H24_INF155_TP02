#ifndef INF155_TP02_STAT_FINALES_H
#define INF155_TP02_STAT_FINALES_H

#include "phase_elimin.h"

void afficher_stats_premier_tour(W_CUP *wc);
Equipe* equipes_plus_buts_marques(W_CUP *wc, int *nb_equipes);
Equipe* equipes_plus_buts_encaisses(W_CUP *wc, int *nb_equipes);
Equipe* equipes_plus_victoires(W_CUP *wc, int *nb_equipes);
Equipe* equipes_plus_defaites(W_CUP *wc, int *nb_equipes);
Equipe* equipes_plus_matchs_nuls(W_CUP *wc, int *nb_equipes);

void test_stat();

#endif //INF155_TP02_STAT_FINALES_H