#ifndef INF155_TP02_LECTURE_FICHIERS_H
#define INF155_TP02_LECTURE_FICHIERS_H

#include "structures.h"

void lire_equipes(const char* nom_fichier, t_cup* wc);
void afficher_groupe(t_cup wc);
void lire_matches(const char* nom_fichier, t_tiste_matches* liste_matches);
void afficher_match(t_tiste_matches liste_matches );

void test_lire_equipes();
void test_lire_matches();

#endif //INF155_TP02_LECTURE_FICHIERS_H
