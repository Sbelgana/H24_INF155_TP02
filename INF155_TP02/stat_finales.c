void test_stat(){
    W_CUP wc = {0};
    Liste_matches liste_matches = {0};
    int nb_equipes_vic =0;
    int nb_equipes_def =0;
    int nb_equipes_nul =0;
    int nb_equipes_bp =0;
    int nb_equipes_bc =0;

    lire_equipes(NOM_FICHIER_EQUIPES, &wc); // Chemin vers votre fichier de données
    lire_matches(NOM_FICHIER_MATCHES, &liste_matches);

    // Appel de la fonction de simulation
    simuler_matchs(&wc, &liste_matches);
    Equipe * eqs_vic = equipes_plus_victoires( &wc,  &nb_equipes_vic);
    Equipe * eqs_def = equipes_plus_defaites( &wc,  &nb_equipes_def);
    Equipe * eqs_nul = equipes_plus_matchs_nuls( &wc,  &nb_equipes_nul);
    Equipe * eqs_bp = equipes_plus_buts_marques( &wc,  &nb_equipes_bp);
    Equipe * eqs_bc = equipes_plus_buts_encaisses( &wc,  &nb_equipes_bc);

    assert(nb_equipes_vic == 16);
    assert(nb_equipes_def == 16);
    assert(nb_equipes_nul == 0);
    assert(nb_equipes_bp == 16);
    assert(nb_equipes_bc == 16);

    printf("Tous les tests sont passés avec succès.\n");

    // Libération de la mémoire allouée
    for (int i = 0; i < 8; ++i) {
        free(wc.grp[i].eqp);
    }
    free(liste_matches.matches);
    free(eqs_vic);
    free(eqs_def);
    free(eqs_nul);
    free(eqs_bc);
    free(eqs_bp);
}
