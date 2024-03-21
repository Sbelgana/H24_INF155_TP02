#ifndef INF155_TP02_LECTURE_FICHIERS_H
#define INF155_TP02_LECTURE_FICHIERS_H

#include "structures.h"

void lire_equipes(const char* nom_fichier, t_wcup* wc);
void afficher_groupe(t_wcup* wc);
void lire_matchs(const char* nom_fichier, t_liste_matchs* liste_matchs);
void afficher_matchs(t_liste_matchs* liste_matchs);

void test_lire_equipes();
void test_lire_matchs();

#endif //INF155_TP02_LECTURE_FICHIERS_H
