#ifndef INF155_TP02_STAT_FINALES_H
#define INF155_TP02_STAT_FINALES_H
#include "structures.h"
void afficher_stats_premier_tour(W_CUP *wc);
Equipe* equipes_plus_buts_marques(W_CUP *wc, size_t *nb_equipes);
Equipe* equipes_plus_buts_encaisses(W_CUP *wc, size_t *nb_equipes);
Equipe* equipes_plus_victoires(W_CUP *wc, size_t *nb_equipes);
Equipe* equipes_plus_defaites(W_CUP *wc, size_t *nb_equipes);
Equipe* equipes_plus_matchs_nuls(W_CUP *wc, size_t *nb_equipes);

#endif //INF155_TP02_STAT_FINALES_H
