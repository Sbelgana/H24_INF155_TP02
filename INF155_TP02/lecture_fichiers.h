
#ifndef INF155_TP02_LECTURE_FICHIERS_H
#define INF155_TP02_LECTURE_FICHIERS_H
#include "structures.h"
void lire_equipes(const char* nom_fichier, W_CUP* wc);
void afficher_groupe(W_CUP wc);
void lire_matches(const char* nom_fichier, Liste_matches* liste_matches);
void afficher_match(Liste_matches liste_matches );
#endif //INF155_TP02_LECTURE_FICHIERS_H
