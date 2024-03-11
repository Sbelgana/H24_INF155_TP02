#ifndef INF155_TP02_SIM_PHASE_GRP_H
#define INF155_TP02_SIM_PHASE_GRP_H

#include "lecture_fichiers.h"

Equipe* trouver_equipe_par_id(W_CUP* wc, const char* id);
int normalvariate(double mu, double sigma);
Buts jouer_match(Equipe *eq1, Equipe *eq2);
void mettre_a_jour_classement(Equipe *eq1, Equipe *eq2, Buts but);
void echanger(Equipe *a, Equipe *b) ;
void trier_groupes(Groupe *grp);
void simuler_matchs(W_CUP *wc, Liste_matches *liste_matches);

void test_trouver_equipe_par_id();
void test_normalvariate();
void test_jouer_match();
void test_mettre_a_jour_classement();
void test_echanger();
void test_trier_groupes();
void test_simuler_matchs();

#endif //INF155_TP02_SIM_PHASE_GRP_H