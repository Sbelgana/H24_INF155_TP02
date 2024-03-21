

void test_lire_equipes() {
    t_wcup wc = {0}; // Initialiser la structure t_wcup
    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données

    // Assertions de test
    // Vérifiez que le nombre total d'équipes lues correspond au nombre attendu
    int totalEquipes = 0;
    for (int i = 0; i < 8; ++i) { // En supposant qu'il y a 8 groupes
        totalEquipes += wc.grp[i].nb_eqp;
    }
    assert(totalEquipes == 32); // En supposant 32 équipes au total dans tous les groupes

    // Exemple d'autres assertions
    // Vérifiez qu'une équipe spécifique est correctement placée dans son groupe avec les détails corrects
    // Cela pourrait être étendu en fonction des données connues de votre fichier
    t_groupe test_groupe = wc.grp[0]; // Exemple : Groupe A
    int trouve = 0;
    for (int i = 0; i < test_groupe.nb_eqp; ++i) {
        if (strcmp(test_groupe.eqp[i].nom, "Qatar") == 0 &&
            strcmp(test_groupe.eqp[i].id, "QAT") == 0 &&
            test_groupe.eqp[i].clas == 1439 &&
            test_groupe.eqp[i].groupe == 'A') {
            trouve = 1;
            break;
        }
    }
    assert(trouve == 1); // Assurez-vous que le Qatar est correctement placé dans le Groupe A avec les détails corrects

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }

    printf("Tous les tests sont passés avec succès.\n");
}

void test_lire_matchs() {
    t_liste_matchs liste_matchs;
    lire_matchs(NOM_FICHIER_MATCHS, &liste_matchs);

    // Tester si le nombre de matchs lus est égal au nombre attendu dans le fichier
    assert(liste_matchs.nb_match == 48);

    // Tester si le premier et le dernier match ont été lus correctement
    assert(strcmp(liste_matchs.matchs[0].id_dom, "QAT") == 0);
    assert(strcmp(liste_matchs.matchs[0].id_vis, "ECU") == 0);
    assert(strcmp(liste_matchs.matchs[47].id_dom, "KOR") == 0);
    assert(strcmp(liste_matchs.matchs[47].id_vis, "POR") == 0);

    //afficher_matchs(&liste_matchs);

    // Libérer la mémoire allouée pour la liste des matchs
    free(liste_matchs.matchs);

    printf("Tous les tests sont passés avec succès.\n");
}
