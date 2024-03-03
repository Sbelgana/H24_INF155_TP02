#ifndef INF155_TP02_SIM_PHASE_GRP_H
#define INF155_TP02_SIM_PHASE_GRP_H
#include "structures.h"

Equipe* trouver_equipe_par_id(W_CUP* wc, const char* id);
int normalvariate(double mu, double sigma);
Buts jouer_match(Equipe *eq1, Equipe *eq2);
void mettre_a_jour_classement(Equipe *eq1, Equipe *eq2, Buts but);
void echanger(Equipe *a, Equipe *b) ;
void trier_groupes(Groupe *grp);
void simuler_matchs(W_CUP *wc, Liste_matches *liste_matches);

#endif //INF155_TP02_SIM_PHASE_GRP_H
