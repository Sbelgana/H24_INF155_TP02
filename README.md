## 1. Introduction <a name="introduction"></a>
<div align="justify">
  L'analyse de données sportives, en particulier dans le contexte du football, est devenue un domaine d'étude et d'application de première importance dans le monde contemporain. La collecte, l'analyse et l'interprétation des données relatives aux performances des équipes, aux statistiques des matchs et au classement mondial revêtent une importance capitale non seulement pour les clubs et les organisations sportives, mais aussi pour les fans et les analystes.<br><br>

Ce projet propose une immersion dans l'univers fascinant de la simulation sportive au moyen du langage de programmation C. La simulation de la Coupe du Monde de Football, un événement qui retient l'attention globale tous les quatre ans, sera réalisée en s'appuyant sur des données concrètes. Ce processus permettra de développer des compétences importantes en manipulation de données, en algorithmique et en programmation structurée.</div>


## 2. Objectifs du Projet <a name="objectif"></a>

<div align="justify">
 Ce projet vise à atteindre les objectifs suivants :
  
- **Maîtrise des notions de base et des structures de données en C** : Approfondir la compréhension et l'application des concepts fondamentaux et des structures de données spécifiques au langage C, essentiels pour la modélisation et la simulation de compétitions sportives.
- **Gestion de fichiers** : Développer les compétences nécessaires pour manipuler des fichiers en C, permettant de lire et stocker des informations relatives aux équipes, aux joueurs, et aux résultats des matchs.
- **Adhésion aux standards de programmation** : Encourager l'adoption des meilleures pratiques de programmation, y compris le respect des conventions de codage et la production d'un code clair, maintenable, et efficace.
- **Simulation de matchs** : Utiliser des algorithmes pour simuler les rencontres entre équipes, prenant en compte divers facteurs tels que le classement des équipes, les performances historiques, et l'avantage de jouer à domicile.
- **Analyse statistique des résultats** : Appliquer des techniques d'analyse pour traiter et interpréter les données issues des simulations, afin de produire des statistiques détaillées sur les performances des équipes et prédire les issues potentielles des matchs.</div>

## 3. Description du problème <a name="description"></a>
<div align="justify">
L'objectif de ce projet est de simuler la Coupe du Monde de Football Qatar 2022. Cet événement majeur du football mondial rassemble les meilleures équipes nationales, chacune aspirant à remporter le titre le plus prestigieux. À travers une série de simulations, ce projet vise à prédire les résultats des matchs, en s'appuyant sur des données réelles telles que le classement FIFA des équipes, leurs performances historiques, et d'autres statistiques pertinentes. La question centrale est de savoir comment, en utilisant des méthodes de programmation en C et des algorithmes de simulation, il est possible de calculer les probabilités de chaque équipe de progresser à travers les différentes phases du tournoi, de la phase de groupes à la finale. Ce faisant, le projet explorera la capacité de modéliser des événements sportifs complexes et d'en prédire les issues, en se basant sur l'analyse de données et la simulation informatique.</div>

### 3.1 Votre mission:
<div align="justify">
  Votre mission consiste à :
  
1. **Développer un programme en C** qui simule l'intégralité de la Coupe du Monde de Football Qatar 2022, en utilisant des données réelles sur les équipes qualifiées et des fonctions de simulation pour générer les résultats des matchs.
2. **Réaliser une analyse détaillée** pour extraire des insights significatifs sur les performances des équipes tout au long du tournoi, en se concentrant sur les aspects suivants :
   - Les équipes ayant marqué le plus et le moins de buts durant le tournoi.
   - Les équipes ayant accumulé le plus et le moins de points au cours des matchs de groupes et des phases éliminatoires.
   - Les équipes présentant le plus grand et le plus petit nombre de victoires, de défaites, et de matchs nuls.
   - Réaliser une analyse comparative des performances des équipes par confédération, incluant :
     - Le pourcentage de buts marqués par confédération.
     - Le pourcentage de points accumulés par confédération.
     - Le pourcentage de victoires, de défaites, et de matchs nuls par confédération.

Cette mission implique la création de structures de données complexes pour gérer les informations des équipes et des matchs, l'utilisation avancée de fichiers pour lire et stocker les données, et l'application d'algorithmes de tri et de recherche pour organiser et analyser les résultats obtenus.</div>


### 3.2 Données:
<div align="justify">
  
Pour simuler avec précision la Coupe du Monde de Football Qatar 2022, les données suivantes seront utilisées :

- `equipes2022.txt` : Ce fichier contiendra la liste des équipes qualifiées pour la Coupe du Monde, avec des informations clés telles que le classement mondial,la confédération auquel elles appartiennent, et d'autres statistiques pertinentes.
- `matchs2022.txt` : Ce fichier listera tous les matchs de la phase de groupes.

Ces fichiers fourniront la base de données nécessaire pour alimenter le programme de simulation, permettant ainsi de reproduire le déroulement du tournoi de manière réaliste et fondée sur des données authentiques.</div>

### 3.3 Mécanisme de simulation:
<div align="justify">
Pour simuler de manière réaliste les matchs de la Coupe du Monde de Football Qatar 2022, le programme suivra ces principes :

- **Détermination des résultats** : Les résultats des matchs seront calculés à l'aide d'une fonction générant des nombres aléatoires suivant une distribution normale, simulant ainsi l'issue des rencontres en fonction des statistiques et du classement mondial des équipes. Cette approche permet de refléter les performances réelles des équipes en leur donnant des probabilités de victoire basées sur leur force relative.

- **Détails du match** : Le déroulement précis de chaque match, y compris la possibilité d'une victoire en temps réglementaire, d'une prolongation ou d'une séance de tirs au but, sera déterminé aléatoirement. Cette méthode assure que chaque simulation de tournoi offre des résultats uniques et imprévisibles, à l'image de la nature souvent imprévisible du football.

Chaque simulation du tournoi comprendra la mise à jour des classements et des statistiques des équipes après chaque match, permettant une analyse détaillée des performances et des tendances au fur et à mesure de l'avancement du tournoi. Le processus de simulation peut être répété de nombreuses fois pour obtenir des prédictions statistiquement significatives sur les performances des équipes, les éventuels vainqueurs du tournoi, et d'autres analyses pertinentes.</div>

## 4. Déroulement de la Coupe du Monde de Football Qatar 2022 <a name="saison"></a>
<div align="justify">
La Coupe du Monde de Football Qatar 2022 se distingue par son format unique et sa répartition globale des équipes. Le tournoi regroupe 32 équipes nationales issues de différentes confédérations à travers le monde, réparties en huit groupes de quatre équipes chacun. La phase de groupes est suivie par les phases éliminatoires, incluant les huitièmes de finale, les quarts de finale, les demi-finales, et la finale.

- **Phase de groupes** : Chaque équipe joue trois matchs, un contre chaque autre équipe de son groupe. Les points sont attribués comme suit:
  - **Victoire** : 3 points pour l'équipe gagnante.
  - **Match nul** : 1 point pour chaque équipe.
  - **Défaite** : 0 point pour l'équipe perdante.

- **Phases éliminatoires** : Les deux premières équipes de chaque groupe, basées sur le total de points accumulés, se qualifient pour les huitièmes de finale. Les matchs éliminatoires sont joués sur un format de match unique, où le vainqueur avance à l'étape suivante, tandis que le perdant est éliminé du tournoi.

- **Critères de départage** : En cas d'égalité de points dans les phases de groupes, plusieurs critères sont utilisés pour départager les équipes, tels que la différence de buts générale, le nombre de buts marqués, et les résultats directs entre les équipes concernées.

À la fin du tournoi, l'équipe gagnante de la finale est couronnée championne du monde, tandis que les équipes ayant perdu en demi-finales jouent un match pour la troisième place. Ce format garantit une compétition intense et offre de nombreuses possibilités de surprises et de moments mémorables.</div>

## 5. Partie 1: Lire et construire la base de données <a name="part1"></a>


### 5.1 lire_equipes() / 5
<div align="justify">
Cette fonction charge les données des équipes qualifiées pour la Coupe du Monde de Football Qatar 2022 à partir d'un fichier texte spécifié. Elle organise ces données dans une structure définie, comprenant le nom de l'équipe, son classement FIFA, la confédération à laquelle elle appartient, entre autres statistiques importantes. La fonction lit chaque section du fichier, alloue dynamiquement un espace pour stocker les informations de chaque équipe, et remplit une structure `Equipe` pour chaque entrée. Finalement, elle ferme le fichier et retourne un tableau dynamique contenant toutes les équipes lues.<br><br>

Pour capturer les données lues, cette fonction utilise une série de structures imbriquées, notamment:

- **`Equipe`** : Contient les détails de chaque équipe, comme le nom, l'identifiant FIFA, le classement FIFA, et des statistiques de jeu telles que le nombre de victoires, de défaites, de nuls, les buts marqués et encaissés, et le total de points accumulés.
- **`Groupe`** : Regroupe les équipes selon leur affectation initiale dans la compétition, facilitant l'organisation et la simulation des matches de poule.
- **`W_CUP`** : Représente la structure globale de la Coupe du Monde, englobant tous les groupes, les équipes, et les étapes éliminatoires jusqu'à la finale.

- **Paramètres :**
  - `const char* nom_fichier` : Le chemin vers le fichier contenant les données des équipes.
  - `W_CUP* wc` : Pointeur vers la structure de la coupe du monde où les équipes seront stockées.

- **Type de retour :**
  - La fonction ne retourne pas directement les données, mais remplit la structure `W_CUP` passée en paramètre avec les informations des équipes lues du fichier.

- **Exemple:**
```c
W_CUP worldCupData;
lire_equipes("equipes2022.txt", &worldCupData);
```

Cette fonction est cruciale pour établir la base de la simulation, en s'assurant que toutes les équipes sont correctement représentées et organisées conformément à leur disposition réelle dans le tournoi.
</div>

### 5.2. Lire les matchs / 3
<div align="justify">
Cette fonction charge les informations des matchs de la Coupe du Monde de Football Qatar 2022 depuis le fichier `matchs2022.txt`. Chaque ligne du fichier représente un match en listant les équipes qui s'affrontent, permettant ainsi d'identifier clairement les confrontations prévues. La lecture se fait ligne par ligne, extrayant et stockant les identifiants des équipes participantes dans une structure adaptée. Ces données sont ensuite organisées dans un tableau dynamique de structures, chaque structure représentant un match avec ses équipes correspondantes.

- **Paramètres :**
  - `fichier` : Le chemin vers le fichier contenant les matchs.
  - `nombreMatchs` : Un pointeur vers une variable où le nombre total de matchs lus sera stocké.

- **Type de retour :**
  - Aucun.

- **Exemple:**
```c
Match* matches = lire_matchs("matchs2022.txt", &nombreMatchs);
```

Cette approche, basée sur l'utilisation de structures et d'allocation dynamique en C, permet de gérer efficacement les données relatives aux matchs de la Coupe du Monde, facilitant ainsi les simulations et analyses ultérieures du tournoi.</div>


### 5.3. trouver_equipe_par_id(equipe_id, equipes) / 2
<div align="justify">
Cette fonction joue un rôle crucial dans la simulation de la Coupe du Monde de la FIFA Qatar 2022 en localisant une équipe spécifique par son identifiant unique au sein de l'ensemble des structures de données représentant les équipes qualifiées. Elle est essentielle pour le déroulement des matchs, permettant d'identifier chaque équipe avant de simuler leurs rencontres.<br><br>

Le processus implique une recherche séquentielle à travers la structure W_CUP, qui contient des groupes d'équipes organisés pour le tournoi. Chaque groupe à son tour comprend un tableau d'équipes, chacune représentée par une structure contenant des détails tels que son identifiant, son nom, et d'autres informations pertinentes.<br>

La fonction parcourt chaque groupe de la structure W_CUP, et pour chaque équipe au sein d'un groupe, compare l'identifiant de l'équipe avec l'identifiant recherché. Si une correspondance est trouvée, la fonction retourne un pointeur vers cette équipe, permettant ainsi son accès direct pour d'autres opérations telles que la mise à jour des statistiques de match ou la simulation de rencontres.

Si aucune équipe correspondante à l'identifiant fourni n'est trouvée dans l'ensemble des groupes, la fonction retourne NULL, indiquant l'absence de correspondance et permettant au programme appelant de gérer ce cas selon ses besoins.

- **Paramètres :**
  - `wc` : Pointeur vers la structure W_CUP contenant les données de tous les groupes et équipes participant à la Coupe du Monde.
  - `id` : Chaîne de caractères représentant l'identifiant unique (ou acronyme) de l'équipe recherchée.

- **Type de retour :**
  - Un pointeur vers la structure Equipe trouvée, contenant toutes les informations pertinentes de l'équipe correspondant à l'identifiant donné.

- **Exemple :**
```c
W_CUP wc;
char* idRecherche = "FRA";
Equipe* equipeTrouvee = trouver_equipe_par_id(&wc, idRecherche);

if (equipeTrouvee != NULL) {
    printf("Equipe trouvée : %s\n", equipeTrouvee->nom);
} else {
    printf("Aucune équipe correspondante à l'ID '%s' n'a été trouvée.\n", idRecherche);
}
```

Cette fonction est un composant essentiel pour naviguer dans la complexité des données de la Coupe du Monde, assurant une identification précise et efficace des équipes à travers leurs identifiants uniques dans le cadre de la simulation du tournoi.</div>


### 5.4. jouer_match(classementFIFA_vis, classementFIFA_dom) / 4
<div align="justify">
Cette fonction simule l'issue d'une rencontre entre deux équipes dans le cadre de la Coupe du Monde de la FIFA Qatar 2022, en prenant en compte leur classement FIFA pour déterminer le score du match. Cette méthode de simulation est conçue pour refléter l'impact du classement FIFA sur la capacité d'une équipe à marquer des buts, offrant ainsi une prédiction réaliste du résultat basée sur les performances historiques des équipes.

Le coeur de cette fonction réside dans son utilisation de la distribution normale pour générer le nombre de buts marqués par chaque équipe. Elle ajuste la moyenne des buts en fonction de la différence de classement FIFA entre les deux équipes, permettant à l'équipe avec un classement supérieur d'avoir une meilleure probabilité de marquer.

- **Calcul des buts :** 
  - La différence de classement FIFA entre l'équipe visiteuse et l'équipe à domicile est prise en compte pour ajuster la moyenne des buts attendus.
  - Un nombre aléatoire de buts est généré pour chaque équipe en utilisant une distribution normale, avec des ajustements basés sur leur classement FIFA respectif.

- **Résultat du match :** Le match se termine soit par une victoire de l'une des équipes, soit par un match nul, sans nécessité de prolongation ou de tirs au but pour les matchs de phase de groupe.

- **Paramètres :**
  - Deux pointeurs vers les structures `Equipe`, représentant les équipes participant au match.

- **Type de retour :**
  -  Une structure `Buts` contenant le nombre de buts marqués par chaque équipe.

- **Exemple :**
```c
Equipe eq1 = {"FRA", "France", "UEFA", 'A', 1750}; // Exemple d'équipe 1
Equipe eq2 = {"BRA", "Brésil", "CONMEBOL", 'B', 1822}; // Exemple d'équipe 2

Buts resultat = jouer_match(&eq1, &eq2);

printf("Résultat: %s %d - %d %s\n", eq1.nom, resultat.buts_eq1, resultat.buts_eq2, eq2.nom);
```

Cette fonctionnalité permet une simulation dynamique et engageante des matchs de la Coupe du Monde, offrant aux fans de football et aux analystes une méthode pour anticiper les issues des rencontres basées sur des données quantitatives fiables.</div>

### 5.5. mettre_a_jour_classement(equipe, resultatMatch) / 3
<div align="justify">
Cette fonction est essentielle pour la mise à jour des statistiques d'une équipe suite à un match dans le cadre de la simulation de la Coupe du Monde de la FIFA. Après chaque match, les données telles que le nombre de buts marqués et encaissés, ainsi que les points accumulés, sont ajustées pour refléter le résultat du match.

#### Processus de Mise à Jour :

- **Buts Marqués et Encaissés :** Les buts marqués par chaque équipe durant le match sont ajoutés à leur total pour la saison. Cette mise à jour influence directement la différence de buts, un critère clé pour le classement dans les phases de groupes.
- **Points :** Basé sur le résultat du match, les points sont attribués (3 points pour une victoire, 1 point pour un match nul, et aucun point pour une défaite). Ces points sont cruciaux pour le classement dans le groupe.
- **Nombre de Matchs Joués :** Le nombre total de matchs joués par chaque équipe est également mis à jour, ce qui est important pour le suivi de la progression du tournoi.

Cette méthode garantit que le classement des équipes est à jour et reflète précisément leurs performances dans le tournoi. Elle permet une analyse plus approfondie des forces et faiblesses de chaque équipe basée sur les statistiques de buts marqués et encaissés.


- **Paramètres :**
  - Deux pointeurs vers les structures `Equipe`, représentant les équipes participant au match.
  - Une structure `Buts` contenant le nombre de buts marqués par chaque équipe.

- **Type de retour :**
  - Aucun.

- **Exemple :**
```c
// Création et initialisation de deux équipes
    Equipe equipe1 = {"Eq1", "Equipe 1", 0, 0, 0, 0, 0, 0, 0, 0};
    Equipe equipe2 = {"Eq2", "Equipe 2", 0, 0, 0, 0, 0, 0, 0, 0};
    
    // Création d'un résultat de match
    Buts resultatMatch = {2, 1}; // L'équipe 1 a marqué 2 buts, l'équipe 2 a marqué 1 but
    
    // Mise à jour des statistiques des équipes en fonction du résultat du match
    mettre_a_jour_classement(&equipe1, &equipe2, resultatMatch);
    
    // Affichage des statistiques mises à jour pour vérification
    printf("Equipe 1 - Points: %d, Buts Pour: %d, Buts Contre: %d, Différence de Buts: %d\n", equipe1.pts, equipe1.buts_p, equipe1.buts_c, equipe1.diff_buts);
    printf("Equipe 2 - Points: %d, Buts Pour: %d, Buts Contre: %d, Différence de Buts: %d\n", equipe2.pts, equipe2.buts_p, equipe2.buts_c, equipe2.diff_buts);
```

Cette fonctionnalité est cruciale pour le déroulement logique de la simulation, assurant que le classement des équipes est toujours à jour et reflète fidèlement leurs performances au sein de la compétition.



### 5.6. trier_groupes(groupes) / 3

<div align="justify">
La fonction `trier_groupes` joue un rôle crucial dans la simulation de la Coupe du Monde de Football, en organisant les équipes de chaque groupe selon leur performance. Les critères de classement reflètent les règles officielles du tournoi, mettant en avant les équipes les plus performantes sur la base de points accumulés durant les matchs de groupe.

- **Mécanisme de Tri :** Les équipes sont classées en ordre décroissant de points. En cas d'égalité de points, la différence de buts et, si nécessaire, le nombre total de buts marqués sont utilisés comme critères de départage. Cette approche garantit un classement équitable et conforme aux pratiques internationales.

- **Processus de Tri :** Un algorithme de tri à bulles est employé pour parcourir le tableau d'équipes et effectuer les échanges nécessaires afin de respecter les critères de classement. Le tri s'arrête une fois aucune permutation n'est nécessaire, indiquant que les équipes sont correctement ordonnées.

- **Critères de Classement :**
  - **Points :** Le critère principal de classement. Les équipes avec le plus grand nombre de points sont classées plus haut.
  - **Différence de Buts :** Utilisée pour départager les équipes à égalité de points.
  - **Buts Marqués :** Si la différence de buts est identique, le nombre de buts marqués détermine le classement.

- **Paramètres :**
  - `groupes` : Un pointeur vers le groupe à trier, contenant un tableau d'équipes avec leurs statistiques respectives.

- **Type de retour :**
  - Aucun.

- **Exemple :**
```c
// Initialisation d'un exemple de groupe
    Groupe groupeA;
    groupeA.nom = 'A';
    groupeA.cap = 4; // Capacité du tableau d'équipes
    groupeA.nb_eqp = 4; // Nombre d'équipes réellement présentes
    groupeA.eqp = (Equipe*)malloc(groupeA.cap * sizeof(Equipe));
    
    // Initialisation des équipes avec des données fictives
    strcpy(groupeA.eqp[0].nom, "Equipe A1");
    groupeA.eqp[0].pts = 6;
    groupeA.eqp[0].buts_p = 8;
    groupeA.eqp[0].buts_c = 4;

    strcpy(groupeA.eqp[1].nom, "Equipe A2");
    groupeA.eqp[1].pts = 6;
    groupeA.eqp[1].buts_p = 10;
    groupeA.eqp[1].buts_c = 5;

    strcpy(groupeA.eqp[2].nom, "Equipe A3");
    groupeA.eqp[2].pts = 4;
    groupeA.eqp[2].buts_p = 5;
    groupeA.eqp[2].buts_c = 5;

    strcpy(groupeA.eqp[3].nom, "Equipe A4");
    groupeA.eqp[3].pts = 2;
    groupeA.eqp[3].buts_p = 3;
    groupeA.eqp[3].buts_c = 7;

    // Appel de la fonction pour trier les équipes du groupe A
    trier_groupes(&groupeA);

    // Affichage des équipes après tri
    printf("Classement du Groupe A après tri :\n");
    for (size_t i = 0; i < groupeA.nb_eqp; i++) {
        printf("%s - Points : %zu, Buts pour : %zu, Buts contre : %zu\n",
               groupeA.eqp[i].nom, groupeA.eqp[i].pts, groupeA.eqp[i].buts_p, groupeA.eqp[i].buts_c);
    }

    // Libération de la mémoire allouée pour les équipes
    free(groupeA.eqp);

```

Cette fonction assure que le classement final au sein de chaque groupe reflète précisément les performances des équipes, permettant ainsi une progression juste et méritée dans les phases suivantes de la compétition.
</div>
 
### 5.7. simuler_matchs(matchs, equipes) / 5
<div align="justify">
Cette fonction prend en charge la simulation d'une série de matchs entre différentes équipes participant à la Coupe du Monde de Football Qatar 2022 et met à jour les statistiques des équipes en fonction des résultats de ces matchs.

Pour chaque match listé dans le tableau `matchs`, la fonction identifie les équipes participantes et utilise la fonction `jouer_match` pour simuler l'issue du match en se basant sur les classements FIFA et d'autres paramètres pertinents des équipes. À l'issue de chaque match simulé, les statistiques telles que les buts marqués, les buts encaissés, et les points obtenus sont ajustés pour chaque équipe.

Les informations mises à jour sont stockées dans des structures associées à chaque équipe, qui sont ensuite utilisées pour mettre à jour le classement global des équipes dans leurs groupes respectifs.

- **Paramètres :**
  - `matchs` : Un tableau de structures, chaque structure représentant un match à simuler, incluant les identifiants des équipes participantes.
  - `equipes` : Un tableau de structures, chaque structure contenant les informations d'une équipe, y compris son classement FIFA, ses statistiques de buts, et ses points.

Après la simulation de tous les matchs, une fonction de tri est appelée pour réorganiser le classement des équipes au sein de chaque groupe, assurant que les équipes sont classées de manière descendante selon leurs points accumulés durant la phase de groupes. En cas d'égalité de points, des critères supplémentaires comme la différence de buts ou les confrontations directes peuvent être appliqués pour déterminer le classement final.

Cette approche méthodique permet de simuler de manière dynamique et réaliste l'évolution du tournoi, offrant ainsi une vision approfondie des performances potentielles des équipes tout au long de la Coupe du Monde.</div>


### 5.8. equipes_qualifiees(groupes) / 8
<div align="justify">
Cette fonction détermine les équipes qualifiées pour les phases éliminatoires de la Coupe du Monde de Football Qatar 2022 à partir du classement final de la phase de groupes.

À la fin de la phase de groupes, chaque groupe est analysé pour identifier les deux meilleures équipes basées sur le nombre total de points accumulés. En cas d'égalité de points entre deux équipes ou plus, des critères supplémentaires tels que la différence de buts, le nombre total de buts marqués, et les résultats des confrontations directes sont utilisés pour départager les équipes.

Les équipes qualifiées de chaque groupe avancent vers les huitièmes de finale, marquant ainsi le début des phases éliminatoires du tournoi.

- **Paramètres :**
  - `groupes` : Un tableau de structures, chaque structure représentant un groupe de la phase de groupes. Chaque groupe contient un tableau dynamique d'équipes, avec leurs points, leur différence de buts, et d'autres statistiques pertinentes pour le classement.

- **Type de retour :**
  - Un tableau dynamique contenant les structures des équipes qualifiées pour les phases éliminatoires. Ce tableau est organisé pour refléter l'ordre des matchs des huitièmes de finale, basé sur le classement des équipes dans leurs groupes respectifs.

Cette fonction joue un rôle crucial dans la transition de la phase de groupes vers les phases éliminatoires, assurant que les équipes sont qualifiées et classées de manière juste et conforme aux règles officielles de la FIFA pour la Coupe du Monde de Football.</div>


https://www.fifa.com/fr/fifa-world-ranking/men?dateId=id13792
https://www.fifa.com/fifaplus/fr/articles/qatar-2022-tout-savoir-qualifies-groupes-dates-calendrier-billets
https://fr.wikipedia.org/wiki/%C3%89liminatoires_de_la_Coupe_du_monde_de_football_2022
