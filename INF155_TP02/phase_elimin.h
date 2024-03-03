#ifndef INF155_TP02_PHASE_ELIMIN_H
#define INF155_TP02_PHASE_ELIMIN_H
#include "structures.h"
void equipes_qualifiees(W_CUP *wc);
Equipe* jouer_match_eliminatoire(Equipe *eq1, Equipe *eq2);
void simuler_tour(W_CUP *wc, Eliminatoire *tour_actuel, size_t nb_matchs, Eliminatoire *prochain_tour) ;
void tour_eliminatoires(W_CUP *wc);
#endif //INF155_TP02_PHASE_ELIMIN_H
