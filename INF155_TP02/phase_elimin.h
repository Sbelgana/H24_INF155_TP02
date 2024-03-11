#ifndef INF155_TP02_PHASE_ELIMIN_H
#define INF155_TP02_PHASE_ELIMIN_H

#include "sim_phase_grp.h"

void equipes_qualifiees(W_CUP *wc);
Equipe* jouer_match_eliminatoire(Equipe *eq1, Equipe *eq2);
void simuler_tour(W_CUP *wc, Eliminatoire *tour_actuel, int nb_matchs, Eliminatoire *prochain_tour) ;
void tour_eliminatoires(W_CUP *wc);

void test_equipes_qualifiees();
void test_jouer_match_eliminatoire();
void test_simuler_tour() ;
void test_tour_eliminatoires();

#endif //INF155_TP02_PHASE_ELIMIN_H
