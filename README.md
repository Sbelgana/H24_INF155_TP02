<p align="center">
  <img src="https://www.etudesuniversitaires.ca/wp-content/uploads/2013/08/ecole-de-technologie-superieure-campus-image2.jpg" />
</p>

# TR02: Coupe du Monde de Football Qatar 2022
- [Directives particulières](#directives)
- [Introduction](#Introduction)
- [Objectifs](#objectif) 
- [Énoncé de travail](#description) 
- [Déroulement de la Coupe du Monde de Football Qatar 2022](#saison)
- [Structures de Données Utilisées](#data-structures)
- [Organisation du Projet en Modules](#project-modules)
- [Fonction à implémenter](#fonctions)
  - [Partie 1: Lire et construire la base de données](#part1)
  - [Partie 2: Simulation de la Phase de Groupes](#part2)
  - [Partie 3: Gestion de la Phase Éliminatoire ](#part3)
  - [Partie 4: Gestion des Statistiques Finales](#part4)
- [Barème](#bareme)

:alarm_clock: [Date de remise le dimanche 14 avril à 23h59](https://www.timeanddate.com/countdown/generic?iso=20240414T235959&p0=165&font=cursive)

<table class="wikitable center">

<tbody><tr>
<th scope="col"></th>
<th scope="col">Confédération</th>
<th scope="col">Nom de la zone</th>
<th scope="col">Engagés</th>
<th scope="col">Places
</th>
<th scope="col">Équipes qualifiées
</th></tr>
<tr>
<td bgcolor="#83ACD5"></td>
<td><a href="/wiki/Union_des_associations_europ%C3%A9ennes_de_football" title="Union des associations européennes de football">UEFA</a></td>
<td>Europe (<a href="/wiki/%C3%89liminatoires_de_la_zone_Europe_de_la_Coupe_du_monde_de_football_2022" title="Éliminatoires de la zone Europe de la Coupe du monde de football 2022">article</a>)</td>
<td align="center">55</td>
<td align="center">13
</td>
<td><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Germany.svg?uselang=fr" class="mw-file-description" title="Drapeau : Allemagne"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Flag_of_Germany.svg/20px-Flag_of_Germany.svg.png" decoding="async" width="20" height="12" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Flag_of_Germany.svg/30px-Flag_of_Germany.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Flag_of_Germany.svg/40px-Flag_of_Germany.svg.png 2x" data-file-width="1000" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Allemagne_de_football" title="Équipe d'Allemagne de football">Allemagne</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_England.svg?uselang=fr" class="mw-file-description" title="Drapeau : Angleterre"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/b/be/Flag_of_England.svg/20px-Flag_of_England.svg.png" decoding="async" width="20" height="12" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/b/be/Flag_of_England.svg/30px-Flag_of_England.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/b/be/Flag_of_England.svg/40px-Flag_of_England.svg.png 2x" data-file-width="800" data-file-height="480"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Angleterre_de_football" title="Équipe d'Angleterre de football">Angleterre</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Belgium_(civil).svg?uselang=fr" class="mw-file-description" title="Drapeau : Belgique"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/9/92/Flag_of_Belgium_%28civil%29.svg/20px-Flag_of_Belgium_%28civil%29.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/9/92/Flag_of_Belgium_%28civil%29.svg/30px-Flag_of_Belgium_%28civil%29.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/9/92/Flag_of_Belgium_%28civil%29.svg/40px-Flag_of_Belgium_%28civil%29.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_de_Belgique_de_football" title="Équipe de Belgique de football">Belgique</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Croatia.svg?uselang=fr" class="mw-file-description" title="Drapeau : Croatie"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/1/1b/Flag_of_Croatia.svg/20px-Flag_of_Croatia.svg.png" decoding="async" width="20" height="10" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/1/1b/Flag_of_Croatia.svg/30px-Flag_of_Croatia.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/1/1b/Flag_of_Croatia.svg/40px-Flag_of_Croatia.svg.png 2x" data-file-width="1200" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_de_Croatie_de_football" title="Équipe de Croatie de football">Croatie</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Denmark.svg?uselang=fr" class="mw-file-description" title="Drapeau : Danemark"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Flag_of_Denmark.svg/20px-Flag_of_Denmark.svg.png" decoding="async" width="20" height="15" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Flag_of_Denmark.svg/30px-Flag_of_Denmark.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Flag_of_Denmark.svg/40px-Flag_of_Denmark.svg.png 2x" data-file-width="512" data-file-height="387"></a></span></span> <a href="/wiki/%C3%89quipe_du_Danemark_de_football" title="Équipe du Danemark de football">Danemark</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Spain.svg?uselang=fr" class="mw-file-description" title="Drapeau : Espagne"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Flag_of_Spain.svg/20px-Flag_of_Spain.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Flag_of_Spain.svg/30px-Flag_of_Spain.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Flag_of_Spain.svg/40px-Flag_of_Spain.svg.png 2x" data-file-width="750" data-file-height="500"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Espagne_de_football" title="Équipe d'Espagne de football">Espagne</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_France.svg?uselang=fr" class="mw-file-description" title="Drapeau : France"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Flag_of_France.svg/20px-Flag_of_France.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Flag_of_France.svg/30px-Flag_of_France.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Flag_of_France.svg/40px-Flag_of_France.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_de_France_de_football" title="Équipe de France de football">France</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_the_Netherlands.svg?uselang=fr" class="mw-file-description" title="Drapeau : Pays-Bas"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/2/20/Flag_of_the_Netherlands.svg/20px-Flag_of_the_Netherlands.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/2/20/Flag_of_the_Netherlands.svg/30px-Flag_of_the_Netherlands.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/2/20/Flag_of_the_Netherlands.svg/40px-Flag_of_the_Netherlands.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_des_Pays-Bas_de_football" title="Équipe des Pays-Bas de football">Pays-Bas</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Wales.svg?uselang=fr" class="mw-file-description" title="Drapeau : Pays de Galles"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Flag_of_Wales.svg/20px-Flag_of_Wales.svg.png" decoding="async" width="20" height="12" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Flag_of_Wales.svg/30px-Flag_of_Wales.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Flag_of_Wales.svg/40px-Flag_of_Wales.svg.png 2x" data-file-width="800" data-file-height="480"></a></span></span> <a href="/wiki/%C3%89quipe_du_pays_de_Galles_de_football" title="Équipe du pays de Galles de football">Pays de Galles</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Poland.svg?uselang=fr" class="mw-file-description" title="Drapeau : Pologne"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/1/12/Flag_of_Poland.svg/20px-Flag_of_Poland.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/1/12/Flag_of_Poland.svg/30px-Flag_of_Poland.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/1/12/Flag_of_Poland.svg/40px-Flag_of_Poland.svg.png 2x" data-file-width="640" data-file-height="400"></a></span></span> <a href="/wiki/%C3%89quipe_de_Pologne_de_football" title="Équipe de Pologne de football">Pologne</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Portugal.svg?uselang=fr" class="mw-file-description" title="Drapeau : Portugal"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Portugal.svg/20px-Flag_of_Portugal.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Portugal.svg/30px-Flag_of_Portugal.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Portugal.svg/40px-Flag_of_Portugal.svg.png 2x" data-file-width="600" data-file-height="400"></a></span></span> <a href="/wiki/%C3%89quipe_du_Portugal_de_football" title="Équipe du Portugal de football">Portugal</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Serbia.svg?uselang=fr" class="mw-file-description" title="Drapeau : Serbie"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Flag_of_Serbia.svg/20px-Flag_of_Serbia.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Flag_of_Serbia.svg/30px-Flag_of_Serbia.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Flag_of_Serbia.svg/40px-Flag_of_Serbia.svg.png 2x" data-file-width="1350" data-file-height="900"></a></span></span> <a href="/wiki/%C3%89quipe_de_Serbie_de_football" title="Équipe de Serbie de football">Serbie</a></span><br><span class="nowrap"><span style="margin:0px 3px 0px 2px"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Switzerland.svg?uselang=fr" class="mw-file-description" title="Drapeau : Suisse"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Flag_of_Switzerland.svg/15px-Flag_of_Switzerland.svg.png" decoding="async" width="15" height="15" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Flag_of_Switzerland.svg/23px-Flag_of_Switzerland.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/f/f3/Flag_of_Switzerland.svg/30px-Flag_of_Switzerland.svg.png 2x" data-file-width="512" data-file-height="512"></a></span></span></span> <a href="/wiki/%C3%89quipe_de_Suisse_de_football" title="Équipe de Suisse de football">Suisse</a></span>
</td></tr>
<tr>
<td bgcolor="#FFD18F"></td>
<td><a href="/wiki/Conf%C3%A9d%C3%A9ration_africaine_de_football" title="Confédération africaine de football">CAF</a></td>
<td>Afrique (<a href="/wiki/%C3%89liminatoires_de_la_zone_Afrique_de_la_Coupe_du_monde_de_football_2022" title="Éliminatoires de la zone Afrique de la Coupe du monde de football 2022">article</a>)</td>
<td align="center">54</td>
<td align="center">5
</td>
<td><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Cameroon.svg?uselang=fr" class="mw-file-description" title="Drapeau : Cameroun"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Flag_of_Cameroon.svg/20px-Flag_of_Cameroon.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Flag_of_Cameroon.svg/30px-Flag_of_Cameroon.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Flag_of_Cameroon.svg/40px-Flag_of_Cameroon.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_Cameroun_de_football" title="Équipe du Cameroun de football">Cameroun</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Ghana.svg?uselang=fr" class="mw-file-description" title="Drapeau : Ghana"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/1/19/Flag_of_Ghana.svg/20px-Flag_of_Ghana.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/1/19/Flag_of_Ghana.svg/30px-Flag_of_Ghana.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/1/19/Flag_of_Ghana.svg/40px-Flag_of_Ghana.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_Ghana_de_football" title="Équipe du Ghana de football">Ghana</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Morocco.svg?uselang=fr" class="mw-file-description" title="Drapeau : Maroc"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Flag_of_Morocco.svg/20px-Flag_of_Morocco.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Flag_of_Morocco.svg/30px-Flag_of_Morocco.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Flag_of_Morocco.svg/40px-Flag_of_Morocco.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_Maroc_de_football" title="Équipe du Maroc de football">Maroc</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Senegal.svg?uselang=fr" class="mw-file-description" title="Drapeau : Sénégal"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/f/fd/Flag_of_Senegal.svg/20px-Flag_of_Senegal.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/f/fd/Flag_of_Senegal.svg/30px-Flag_of_Senegal.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/f/fd/Flag_of_Senegal.svg/40px-Flag_of_Senegal.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_S%C3%A9n%C3%A9gal_de_football" title="Équipe du Sénégal de football">Sénégal</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Tunisia.svg?uselang=fr" class="mw-file-description" title="Drapeau : Tunisie"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Tunisia.svg/20px-Flag_of_Tunisia.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Tunisia.svg/30px-Flag_of_Tunisia.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Tunisia.svg/40px-Flag_of_Tunisia.svg.png 2x" data-file-width="1200" data-file-height="800"></a></span></span> <a href="/wiki/%C3%89quipe_de_Tunisie_de_football" title="Équipe de Tunisie de football">Tunisie</a></span>
</td></tr>
<tr>
<td bgcolor="#D583AC"></td>
<td><a href="/wiki/Conf%C3%A9d%C3%A9ration_de_football_d%27Am%C3%A9rique_du_Nord,_d%27Am%C3%A9rique_centrale_et_des_Cara%C3%AFbes" title="Confédération de football d'Amérique du Nord, d'Amérique centrale et des Caraïbes">CONCACAF</a></td>
<td>Amérique du Nord, Amérique centrale et Caraïbes (<a href="/wiki/%C3%89liminatoires_de_la_zone_Am%C3%A9rique_du_Nord,_Am%C3%A9rique_centrale_et_Cara%C3%AFbes_de_la_Coupe_du_monde_de_football_2022" title="Éliminatoires de la zone Amérique du Nord, Amérique centrale et Caraïbes de la Coupe du monde de football 2022">article</a>)</td>
<td align="center">35</td>
<td align="center">4 (*)
</td>
<td><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Canada.svg?uselang=fr" class="mw-file-description" title="Drapeau : Canada"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/c/cf/Flag_of_Canada.svg/20px-Flag_of_Canada.svg.png" decoding="async" width="20" height="10" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/c/cf/Flag_of_Canada.svg/30px-Flag_of_Canada.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/c/cf/Flag_of_Canada.svg/40px-Flag_of_Canada.svg.png 2x" data-file-width="1200" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_Canada_de_soccer" title="Équipe du Canada de soccer">Canada</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Costa_Rica.svg?uselang=fr" class="mw-file-description" title="Drapeau : Costa Rica"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Flag_of_Costa_Rica.svg/20px-Flag_of_Costa_Rica.svg.png" decoding="async" width="20" height="12" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Flag_of_Costa_Rica.svg/30px-Flag_of_Costa_Rica.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Flag_of_Costa_Rica.svg/40px-Flag_of_Costa_Rica.svg.png 2x" data-file-width="1000" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_Costa_Rica_de_football" title="Équipe du Costa Rica de football">Costa Rica</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_the_United_States.svg?uselang=fr" class="mw-file-description" title="Drapeau : États-Unis"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/a/a4/Flag_of_the_United_States.svg/20px-Flag_of_the_United_States.svg.png" decoding="async" width="20" height="11" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/a/a4/Flag_of_the_United_States.svg/30px-Flag_of_the_United_States.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/a/a4/Flag_of_the_United_States.svg/40px-Flag_of_the_United_States.svg.png 2x" data-file-width="1235" data-file-height="650"></a></span></span> <a href="/wiki/%C3%89quipe_des_%C3%89tats-Unis_de_soccer" title="Équipe des États-Unis de soccer">États-Unis</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Mexico.svg?uselang=fr" class="mw-file-description" title="Drapeau : Mexique"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/f/fc/Flag_of_Mexico.svg/20px-Flag_of_Mexico.svg.png" decoding="async" width="20" height="11" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/f/fc/Flag_of_Mexico.svg/30px-Flag_of_Mexico.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/f/fc/Flag_of_Mexico.svg/40px-Flag_of_Mexico.svg.png 2x" data-file-width="980" data-file-height="560"></a></span></span> <a href="/wiki/%C3%89quipe_du_Mexique_de_football" title="Équipe du Mexique de football">Mexique</a></span>
</td></tr>
<tr>
<td bgcolor="#ACD583"></td>
<td><a href="/wiki/Conf%C3%A9d%C3%A9ration_sud-am%C3%A9ricaine_de_football" title="Confédération sud-américaine de football">CONMEBOL</a></td>
<td>Amérique du Sud (<a href="/wiki/%C3%89liminatoires_de_la_zone_Am%C3%A9rique_du_Sud_de_la_Coupe_du_monde_de_football_2022" title="Éliminatoires de la zone Amérique du Sud de la Coupe du monde de football 2022">article</a>)</td>
<td align="center">10</td>
<td align="center">4 (*)
</td>
<td><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Argentina.svg?uselang=fr" class="mw-file-description" title="Drapeau : Argentine"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/1/1a/Flag_of_Argentina.svg/20px-Flag_of_Argentina.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/1/1a/Flag_of_Argentina.svg/30px-Flag_of_Argentina.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/1/1a/Flag_of_Argentina.svg/40px-Flag_of_Argentina.svg.png 2x" data-file-width="800" data-file-height="500"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Argentine_de_football" title="Équipe d'Argentine de football">Argentine</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Brazil.svg?uselang=fr" class="mw-file-description" title="Drapeau : Brésil"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/0/05/Flag_of_Brazil.svg/20px-Flag_of_Brazil.svg.png" decoding="async" width="20" height="14" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/0/05/Flag_of_Brazil.svg/30px-Flag_of_Brazil.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/0/05/Flag_of_Brazil.svg/40px-Flag_of_Brazil.svg.png 2x" data-file-width="1060" data-file-height="742"></a></span></span> <a href="/wiki/%C3%89quipe_du_Br%C3%A9sil_de_football" title="Équipe du Brésil de football">Brésil</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Ecuador.svg?uselang=fr" class="mw-file-description" title="Drapeau : Équateur"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Flag_of_Ecuador.svg/20px-Flag_of_Ecuador.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Flag_of_Ecuador.svg/30px-Flag_of_Ecuador.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Flag_of_Ecuador.svg/40px-Flag_of_Ecuador.svg.png 2x" data-file-width="1440" data-file-height="960"></a></span></span> <a href="/wiki/%C3%89quipe_d%27%C3%89quateur_de_football" title="Équipe d'Équateur de football">Équateur</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Uruguay.svg?uselang=fr" class="mw-file-description" title="Drapeau : Uruguay"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/f/fe/Flag_of_Uruguay.svg/20px-Flag_of_Uruguay.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/f/fe/Flag_of_Uruguay.svg/30px-Flag_of_Uruguay.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/f/fe/Flag_of_Uruguay.svg/40px-Flag_of_Uruguay.svg.png 2x" data-file-width="945" data-file-height="630"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Uruguay_de_football" title="Équipe d'Uruguay de football">Uruguay</a></span>
</td></tr>
<tr>
<td bgcolor="#FFB6C1"></td>
<td><a href="/wiki/Conf%C3%A9d%C3%A9ration_asiatique_de_football" title="Confédération asiatique de football">AFC</a></td>
<td>Asie (<a href="/wiki/%C3%89liminatoires_de_la_zone_Asie_de_la_Coupe_du_monde_de_football_2022" title="Éliminatoires de la zone Asie de la Coupe du monde de football 2022">article</a>)</td>
<td align="center">46</td>
<td align="center">6 (*)
</td>
<td><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Saudi_Arabia.svg?uselang=fr" class="mw-file-description" title="Drapeau : Arabie saoudite"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/0/0d/Flag_of_Saudi_Arabia.svg/20px-Flag_of_Saudi_Arabia.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/0/0d/Flag_of_Saudi_Arabia.svg/30px-Flag_of_Saudi_Arabia.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/0/0d/Flag_of_Saudi_Arabia.svg/40px-Flag_of_Saudi_Arabia.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Arabie_saoudite_de_football" title="Équipe d'Arabie saoudite de football">Arabie saoudite</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Australia.svg?uselang=fr" class="mw-file-description" title="Drapeau : Australie"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Flag_of_Australia.svg/20px-Flag_of_Australia.svg.png" decoding="async" width="20" height="10" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Flag_of_Australia.svg/30px-Flag_of_Australia.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Flag_of_Australia.svg/40px-Flag_of_Australia.svg.png 2x" data-file-width="1280" data-file-height="640"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Australie_de_football" title="Équipe d'Australie de football">Australie</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_South_Korea.svg?uselang=fr" class="mw-file-description" title="Drapeau : Corée du Sud"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/0/09/Flag_of_South_Korea.svg/20px-Flag_of_South_Korea.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/0/09/Flag_of_South_Korea.svg/30px-Flag_of_South_Korea.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/0/09/Flag_of_South_Korea.svg/40px-Flag_of_South_Korea.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_de_Cor%C3%A9e_du_Sud_de_football" title="Équipe de Corée du Sud de football">Corée du Sud</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Iran.svg?uselang=fr" class="mw-file-description" title="Drapeau : Iran"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Flag_of_Iran.svg/20px-Flag_of_Iran.svg.png" decoding="async" width="20" height="11" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Flag_of_Iran.svg/30px-Flag_of_Iran.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Flag_of_Iran.svg/40px-Flag_of_Iran.svg.png 2x" data-file-width="630" data-file-height="360"></a></span></span> <a href="/wiki/%C3%89quipe_d%27Iran_de_football" title="Équipe d'Iran de football">Iran</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Japan.svg?uselang=fr" class="mw-file-description" title="Drapeau : Japon"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/9/9e/Flag_of_Japan.svg/20px-Flag_of_Japan.svg.png" decoding="async" width="20" height="13" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/9/9e/Flag_of_Japan.svg/30px-Flag_of_Japan.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/9/9e/Flag_of_Japan.svg/40px-Flag_of_Japan.svg.png 2x" data-file-width="900" data-file-height="600"></a></span></span> <a href="/wiki/%C3%89quipe_du_Japon_de_football" title="Équipe du Japon de football">Japon</a></span><br><span class="nowrap"><span class="flagicon"><span class="mw-image-border noviewer" typeof="mw:File"><a href="//commons.wikimedia.org/wiki/File:Flag_of_Qatar.svg?uselang=fr" class="mw-file-description" title="Drapeau : Qatar"><img alt="" src="//upload.wikimedia.org/wikipedia/commons/thumb/6/65/Flag_of_Qatar.svg/20px-Flag_of_Qatar.svg.png" decoding="async" width="20" height="8" class="mw-file-element" srcset="//upload.wikimedia.org/wikipedia/commons/thumb/6/65/Flag_of_Qatar.svg/30px-Flag_of_Qatar.svg.png 1.5x, //upload.wikimedia.org/wikipedia/commons/thumb/6/65/Flag_of_Qatar.svg/40px-Flag_of_Qatar.svg.png 2x" data-file-width="1400" data-file-height="550"></a></span></span> <a href="/wiki/%C3%89quipe_du_Qatar_de_football" title="Équipe du Qatar de football">Qatar</a></span> (pays hôte)
</td></tr>
<tr>
<td bgcolor="#F7F733"></td>
<td><a href="/wiki/Conf%C3%A9d%C3%A9ration_du_football_d%27Oc%C3%A9anie" title="Confédération du football d'Océanie">OFC</a></td>
<td>Océanie (<a href="/wiki/%C3%89liminatoires_de_la_zone_Oc%C3%A9anie_de_la_Coupe_du_monde_de_football_2022" title="Éliminatoires de la zone Océanie de la Coupe du monde de football 2022">article</a>)</td>
<td align="center">9</td>
<td align="center">0 (*)
</td>
<td>
</td></tr>
<tr>
<td colspan="3">Total</td>
<td align="center">209</td>
<td align="center">32
</td>
<td>
</td></tr></tbody></table>

# Directives particulières <a name="directives"></a>
* Respecter [guide de codage](https://ena.etsmtl.ca/pluginfile.php/1933883/mod_resource/content/0/INF145%20-%20Normes%20de%20programmations.pdf)
* Noms de variables et fonctions adéquats (concis, compréhensibles);  
* Pas de librairies externes autres que celles déjà importées;
  
# 1. Introduction <a name="introduction"></a>
<div align="justify">
  L'analyse de données sportives, en particulier dans le contexte du football, est devenue un domaine d'étude et d'application de première importance dans le monde contemporain. La collecte, l'analyse et l'interprétation des données relatives aux performances des équipes, aux statistiques des matchs et au classement mondial revêtent une importance capitale non seulement pour les clubs et les organisations sportives, mais aussi pour les fans et les analystes.<br><br>

Ce projet propose une immersion dans l'univers fascinant de la simulation sportive au moyen du langage de programmation C. La simulation de la Coupe du Monde de Football, un événement qui retient l'attention globale tous les quatre ans, sera réalisée en s'appuyant sur des données concrètes. Ce processus permettra de développer des compétences importantes en manipulation de données, en algorithmique et en programmation structurée.</div>


# 2. Objectifs du Projet <a name="objectif"></a>

<div align="justify">
 Ce projet vise à atteindre les objectifs suivants :
  
- **Maîtrise des notions de base et des structures de données en C** : Approfondir la compréhension et l'application des concepts fondamentaux et des structures de données spécifiques au langage C, essentiels pour la modélisation et la simulation de compétitions sportives.
- **Gestion de fichiers** : Développer les compétences nécessaires pour manipuler des fichiers en C, permettant de lire et stocker des informations relatives aux équipes, aux joueurs, et aux résultats des matchs.
- **Adhésion aux standards de programmation** : Encourager l'adoption des meilleures pratiques de programmation, y compris le respect des conventions de codage et la production d'un code clair, maintenable, et efficace.
- **Simulation de matchs** : Utiliser des algorithmes pour simuler les rencontres entre équipes, prenant en compte divers facteurs tels que le classement des équipes, les performances historiques, et l'avantage de jouer à domicile.
- **Analyse statistique des résultats** : Appliquer des techniques d'analyse pour traiter et interpréter les données issues des simulations, afin de produire des statistiques détaillées sur les performances des équipes et prédire les issues potentielles des matchs.</div>

# 3. Énoncé de travail <a name="description"></a>
<div align="justify">
L'objectif de ce projet est de simuler la Coupe du Monde de Football Qatar 2022. Cet événement majeur du football mondial rassemble les meilleures équipes nationales, chacune aspirant à remporter le titre le plus prestigieux. À travers une série de simulations, ce projet vise à prédire les résultats des matchs, en s'appuyant sur des données réelles telles que le classement FIFA des équipes, leurs performances historiques, et d'autres statistiques pertinentes. La question centrale est de savoir comment, en utilisant des méthodes de programmation en C et des algorithmes de simulation, il est possible de calculer les probabilités de chaque équipe de progresser à travers les différentes phases du tournoi, de la phase de groupes à la finale. Ce faisant, le projet explorera la capacité de modéliser des événements sportifs complexes et d'en prédire les issues, en se basant sur l'analyse de données et la simulation informatique.</div>

## 3.1 Votre mission:
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


## 3.2 Données:
<div align="justify">
  
Pour simuler avec précision la Coupe du Monde de Football Qatar 2022, les données suivantes seront utilisées :

- `equipes2022.txt` : 
- `matchs2022.txt` : 

## Format des Fichiers de Données

### Fichier `equipes2022.txt`
Ce fichier contient les informations des équipes participantes, organisées par confédération. Chaque section commence par le nombre d'équipes suivi du nom de la confédération. Pour chaque équipe, les informations incluent le nom, l'identifiant FIFA, le classement FIFA, et le groupe d'affectation, formatées comme suit :

```
[nombre d'équipes] [nom de la confédération]
    [nom de l'équipe] [identifiant FIFA] [classement FIFA] [groupe]
...
...
...

[nombre d'équipes] [nom de la confédération]
    [nom de l'équipe] [identifiant FIFA] [classement FIFA] [groupe]
...
...
```

### Fichier `matchs2022.txt`
Liste tous les matchs de la phase de groupes avec les identifiants des équipes domicile et visiteuse. Chaque ligne représente un match :

```
[id équipe domicile] [id équipe visiteuse]
...
...
```
Ces fichiers fourniront la base de données nécessaire pour alimenter le programme de simulation, permettant ainsi de reproduire le déroulement du tournoi de manière réaliste et fondée sur des données authentiques.</div>

## 3.3 Mécanisme de Simulation

La simulation réaliste des matchs de la Coupe du Monde de Football Qatar 2022 est le cœur de notre projet. Pour ce faire, nous adoptons une approche méthodique qui tient compte à la fois des performances historiques des équipes et de leur classement FIFA actuel. Le processus de simulation est divisé en étapes clairement définies pour assurer des résultats à la fois cohérents et imprévisibles, reflétant la nature dynamique du football.

### Étape 1: Préparation des Données
Avant la simulation, les données pertinentes sur les équipes, incluant le classement FIFA, les performances historiques et les statistiques de match, sont collectées et structurées. Ces données servent de base pour évaluer la force relative de chaque équipe.

### Étape 2: Simulation des Matchs
Chaque match est simulé en tenant compte des facteurs suivants :
- **Classement FIFA :** Influence directement les probabilités de victoire, de nul ou de défaite pour chaque équipe.
- **Distribution des Scores :** Utilisation d'une fonction générant des scores basés sur une distribution normale, ajustée selon le classement FIFA des équipes. Cela permet de simuler des résultats de matchs qui reflètent les capacités réelles des équipes.
- **Résolution des Égalités :** En cas de match nul à la fin du temps réglementaire, des mécanismes tels que la prolongation ou les tirs au but sont aléatoirement choisis pour déterminer le gagnant.

### Étape 3: Mise à Jour des Statistiques
Après chaque match simulé, les statistiques des équipes sont mises à jour pour inclure les résultats, les buts marqués et encaissés, et d'autres données pertinentes. Cela permet de maintenir un classement à jour et de préparer le terrain pour les simulations suivantes.

### Étape 4: Avancement et Élimination
- **Phase de Groupes :** Les équipes sont classées selon leurs performances, avec les deux meilleures équipes de chaque groupe avançant aux phases éliminatoires.
- **Phases Éliminatoires :** À partir des huitièmes de finale, les matchs sont éliminatoires, menant finalement à la finale où le champion est couronné.

### Étape 5: Analyse et Répétition
Le processus de simulation peut être répété plusieurs fois pour générer des données statistiques significatives, permettant une analyse approfondie des performances des équipes et la prédiction des issues potentielles du tournoi.


# 4. Déroulement de la Coupe du Monde de Football Qatar 2022 <a name="saison"></a>
<div align="justify">
La Coupe du Monde de Football Qatar 2022 se distingue par son format unique et sa répartition globale des équipes. Le tournoi regroupe 32 équipes nationales issues de différentes confédérations à travers le monde, réparties en huit groupes de quatre équipes chacun. La phase de groupes est suivie par les phases éliminatoires, incluant les huitièmes de finale, les quarts de finale, les demi-finales, et la finale.

- **Phase de groupes** : Chaque équipe joue trois matchs, un contre chaque autre équipe de son groupe. Les points sont attribués comme suit:
  - **Victoire** : 3 points pour l'équipe gagnante.
  - **Match nul** : 1 point pour chaque équipe.
  - **Défaite** : 0 point pour l'équipe perdante.

- **Phases éliminatoires** : Les deux premières équipes de chaque groupe, basées sur le total de points accumulés, se qualifient pour les huitièmes de finale. Les matchs éliminatoires sont joués sur un format de match unique, où le vainqueur avance à l'étape suivante, tandis que le perdant est éliminé du tournoi.

- **Critères de départage** : En cas d'égalité de points dans les phases de groupes, plusieurs critères sont utilisés pour départager les équipes, tels que la différence de buts générale, le nombre de buts marqués, et les résultats directs entre les équipes concernées.

À la fin du tournoi, l'équipe gagnante de la finale est couronnée championne du monde, tandis que les équipes ayant perdu en demi-finales jouent un match pour la troisième place. Ce format garantit une compétition intense et offre de nombreuses possibilités de surprises et de moments mémorables.</div>


# 5. Structures de Données Utilisées <a name="data-structures"></a>

Ce projet utilise des structures de données spécifiques pour modéliser les aspects clés de la Coupe du Monde de Football. Ces structures représentent les équipes, les groupes, les matchs, et l'organisation générale du tournoi. Voici une explication détaillée de chaque structure et de ses champs :

## Structure `Equipe`
Cette structure représente une équipe participant au tournoi, contenant toutes les informations nécessaires relatives à son identité et ses performances.
```c
typedef struct {
    char id[10];          // Identifiant unique de l'équipe, souvent basé sur des abréviations ou des codes FIFA.
    char nom[20];         // Nom complet de l'équipe.
    char conf[20];        // Confédération à laquelle appartient l'équipe (ex : UEFA, CONMEBOL).
    char groupe;          // Lettre désignant le groupe dans lequel l'équipe est placée.
    size_t vic;           // Nombre de victoires de l'équipe dans le tournoi.
    size_t def;           // Nombre de défaites de l'équipe dans le tournoi.
    size_t nul;           // Nombre de matchs nuls de l'équipe dans le tournoi.
    size_t buts_p;        // Nombre total de buts marqués par l'équipe.
    size_t buts_c;        // Nombre total de buts encaissés par l'équipe.
    size_t diff_buts;     // Différence entre les buts marqués et les buts encaissés.
    size_t pts;           // Nombre total de points accumulés par l'équipe dans le tournoi.
    size_t clas;          // Classement FIFA de l'équipe.
    size_t matche_jouer;  // Nombre total de matchs joués par l'équipe.
} Equipe;
```

## Structure `Groupe`
Organise les équipes en groupes pour la phase de groupes du tournoi.
```c
typedef struct {
    char nom;             // Lettre désignant le nom du groupe.
    Equipe* eqp;          // Pointeur vers un tableau dynamique d'équipes dans le groupe.
    size_t nb_eqp;        // Nombre d'équipes actuellement dans le groupe.
    size_t cap;           // Capacité actuelle du tableau d'équipes (permet d'allouer dynamiquement plus d'espace si nécessaire).
} Groupe;
```

## Structure `Buts`
Contient le décompte des buts pour un match donné entre deux équipes.
```c
typedef struct {
    int buts_eq1;         // Nombre de buts marqués par l'équipe 1.
    int buts_eq2;         // Nombre de buts marqués par l'équipe 2.
} Buts;
```

## Structure `Eliminatoire`
Définit une rencontre éliminatoire, pouvant être un match des huitièmes de finale, quarts de finale, demi-finales, ou la finale.
```c
typedef struct {
    Equipe rencontre[2];  // Les deux équipes participant à la rencontre éliminatoire.
} Eliminatoire;
```

## Structure `W_CUP`
Représente la structure globale du tournoi, incluant toutes les phases de jeu.
```c
typedef struct {
    Groupe grp[8];           // Tableau des 8 groupes de la phase de groupes.
    Eliminatoire tour_16[8]; // Tableau des 8 matchs des huitièmes de finale.
    Eliminatoire tour_8[4];  // Tableau des 4 matchs des quarts de finale.
    Eliminatoire tour_4[2];  // Tableau des 2 matchs des demi-finales.
    Eliminatoire finale;     // La finale du tournoi.
} W_CUP;
```

## Structure `Matche` et `Liste_matches`
Ces structures permettent de gérer les informations relatives aux matchs programmés et simulés durant le tournoi.
```c
typedef struct{
    char id_vis[10];        // Identifiant de l'équipe visiteuse.
    char id_dom[10];        // Identifiant de l'équipe à domicile.
    size_t clas_vis;        // Classement FIFA de l'équipe visiteuse.
    size_t clas_dom;        // Classement FIFA de l'équipe à domicile.
    size_t buts_eq1;        // Buts marqués

 par l'équipe à domicile.
    size_t buts_eq2;        // Buts marqués par l'équipe visiteuse.
    size_t pts_vis;         // Points accumulés par l'équipe visiteuse.
    size_t pts_dom;         // Points accumulés par l'équipe à domicile.
} Matche;

typedef struct{
    Matche* matches;        // Pointeur vers un tableau dynamique de matchs.
    size_t nb_matche;       // Nombre de matchs contenus dans le tableau.
    size_t cap;             // Capacité actuelle du tableau (pour allocation dynamique).
} Liste_matches;
```

La compréhension de ces structures est essentielle pour naviguer à travers les différentes phases du projet de simulation.

# 6. Organisation du Projet en Modules <a name="project-modules"></a>

Afin de structurer le projet de manière modulaire et de faciliter la compréhension ainsi que la manipulation du code par les étudiants, le projet est divisé en cinq modules principaux, chacun ayant une responsabilité spécifique. Voici une description de chaque module et de son rôle au sein du projet :

## Module 1: Déclaration des Structures (`structures.h`)
Ce module contient les déclarations de toutes les structures de données utilisées dans le projet, offrant une référence centrale pour la modélisation des éléments du tournoi.
- **`structures.h`** : Contient les déclarations des structures `Equipe`, `Groupe`, `Buts`, `Eliminatoire`, `Matche`, `Liste_matches`, et `W_CUP`.

## Module 2: Lecture des Fichiers (`lecture_fichiers.c` et `lecture_fichiers.h`)
Ce module se charge de lire les informations des équipes et des matchs depuis des fichiers, permettant de charger les données nécessaires pour le tournoi.
- **`lecture_fichiers.h`** : Définit les prototypes des fonctions `lire_equipes` et `lire_matches`.
- **`lecture_fichiers.c`** : Implémente les fonctions pour la lecture des fichiers des équipes et des matchs.

## Module 3: Simulation de la Phase de Groupes (`simulation_phase_groupe.c` et `simulation_phase_groupe.h`)
Ce module gère la simulation des matchs de la phase de groupes, y compris la mise à jour des classements et l'affichage des statistiques des groupes.
- **`simulation_phase_groupe.h`** : Définit les prototypes des fonctions pour simuler les matchs de la phase de groupes et afficher les groupes.
- **`simulation_phase_groupe.c`** : Implémente la logique de simulation des matchs de la phase de groupes et les fonctions d'affichage.

## Module 4: Gestion de la Phase Éliminatoire (`phase_eliminatoire.c` et `phase_eliminatoire.h`)
Ce module prend en main la simulation des matchs éliminatoires, de la phase des huitièmes de finale jusqu'à la finale.
- **`phase_eliminatoire.h`** : Définit les prototypes des fonctions `jouer_match_eliminatoire`, `simuler_tour`, et `tour_eliminatoires`.
- **`phase_eliminatoire.c`** : Implémente les fonctions pour gérer et simuler la phase éliminatoire du tournoi.

## Module 5: Gestion des Statistiques Finales (`statistiques_finales.c` et `statistiques_finales.h`)
Ce module est responsable de l'analyse et de l'affichage des statistiques finales après la conclusion du tournoi, fournissant des insights sur les performances des équipes.
- **`statistiques_finales.h`** : Définit les prototypes des fonctions pour l'affichage des statistiques finales et éventuellement d'autres analyses.
- **`statistiques_finales.c`** : Implémente les fonctions pour calculer et présenter diverses statistiques finales du tournoi.

## Résumé de l'Organisation des Fichiers
- **`structures.h`** : Déclarations centrales des structures.
- **`lecture_fichiers.c` / `lecture_fichiers.h`** : Lecture des données à partir de fichiers.
- **`simulation_phase_groupe.c` / `simulation_phase_groupe.h`** : Simulation de la phase de groupes.
- **`phase_eliminatoire.c` / `phase_eliminatoire.h`** : Gestion de la phase éliminatoire.
- **`statistiques_finales.c` / `statistiques_finales.h`** : Analyse et présentation des statistiques finales.

Cette organisation modulaire permet une meilleure répartition des responsabilités au sein du code, facilitant ainsi la gestion du projet et permettant aux étudiants de se concentrer sur des aspects individuels de la simulation du tournoi.

# 7. Fonction à implémenter <a name="fonctions"></a>
## 7.1 Partie 1: Lire et construire la base de données <a name="part1"></a>

### lire_equipes() / 5
<div align="justify">
Cette fonction est conçue pour charger les données des équipes qualifiées pour la Coupe du Monde de Football Qatar 2022 à partir d'un fichier texte. Elle lit les informations concernant chaque équipe, telles que le nom de l'équipe, son identifiant FIFA, son classement FIFA, et le groupe auquel elle appartient. Ces informations sont ensuite organisées dans une structure <code>Equipe</code> et stockées dans un tableau dynamique au sein d'une structure <code>Groupe</code>, elle-même intégrée dans une structure globale <code>W_CUP</code> représentant la Coupe du Monde.<br><br>

Le fichier est structuré par confédérations, avec chaque section débutant par le nombre d'équipes et le nom de la confédération. Pour chaque équipe, la fonction lit le nom, l'identifiant FIFA, le classement FIFA, et le groupe d'affectation, avant d'ajouter l'équipe à son groupe respectif dans la structure `W_CUP`. Si nécessaire, l'espace alloué pour les équipes dans un groupe est dynamiquement agrandi pour accueillir de nouvelles entrées.

####  Paramètres :
- `nom_fichier` : Chaîne de caractères constante représentant le chemin vers le fichier contenant les données des équipes.
- `wc` : Pointeur vers une structure `W_CUP`, qui sera remplie avec les données des équipes lues du fichier.

####  Déroulement de la fonction :
1. **Ouverture du fichier** : La fonction commence par ouvrir le fichier spécifié pour la lecture. Si l'ouverture échoue, elle affiche un message d'erreur et s'arrête.
2. Lecture séquentielle du fichier. Pour chaque confédération, le nombre d'équipes et le nom de la confédération sont lus, puis chaque équipe est traitée individuellement.
3. Pour chaque équipe, les informations sont lues et stockées dans une structure `Equipe`. Cette structure est ensuite ajoutée à un tableau dynamique correspondant au groupe de l'équipe dans la structure `W_CUP`.
4. Le tableau des équipes dans chaque groupe est agrandi dynamiquement au besoin pour accueillir toutes les équipes.
5. Fermeture du fichier une fois toutes les données lues et traitées.

####  Exemple d'utilisation :
```c
W_CUP worldCupData;
lire_equipes("equipes2022.txt", &worldCupData);
```
</div>

### Afficher les Groupes

La fonction `afficher_groupe` est conçue pour présenter les informations détaillées de chaque groupe de la phase de groupes de la Coupe du Monde de Football. Elle parcourt tous les groupes, affichant pour chaque équipe son nom, son identifiant (ID), et son classement FIFA, fournissant ainsi une vue d'ensemble claire de la composition initiale des groupes du tournoi.

#### Fonctionnement :
- **Parcours des groupes :** La fonction itère sur chaque groupe de la Coupe du Monde, affichant le nom du groupe suivi des détails des équipes qui le composent.
- **Affichage des équipes :** Pour chaque équipe dans un groupe, le nom de l'équipe, son identifiant (ID) et son classement FIFA sont affichés, offrant une perspective sur la force relative des équipes au sein de chaque groupe.

#### Paramètres :
- `wc` : Une structure `W_CUP` passée par valeur, contenant les informations complètes des groupes et des équipes de la Coupe du Monde.

#### Type de retour :
- Aucun. Les informations sont affichées directement à l'écran.

#### Exemple d'utilisation :
```c
W_CUP wc;
// Supposons que wc a été préalablement initialisé avec les données des groupes et des équipes.

// Afficher les détails de chaque groupe de la Coupe du Monde
afficher_groupe(wc);
```

### Lire les matchs

Cette fonction lit les informations des matchs prévus pour la Coupe du Monde de Football Qatar 2022 à partir d'un fichier nommé `matchs2022.txt`. Chaque ligne du fichier contient les identifiants des deux équipes qui s'affronteront, ce qui permet d'organiser les données des matchs de manière efficace. La fonction procède à la lecture de chaque ligne, extrayant les identifiants des équipes participantes et les stockant dans des structures `Matche` correspondantes. Ces structures sont ensuite ajoutées à un tableau dynamique, qui est capable de s'agrandir au besoin pour accueillir tous les matchs lus du fichier.

#### Paramètres :
- `nom_fichier` : Chaîne de caractères constante indiquant le chemin d'accès au fichier contenant les données des matchs.
- `liste_matches` : Pointeur vers une structure `Liste_matches` qui est utilisée pour stocker le tableau des matchs lus, ainsi que le nombre total de matchs et la capacité actuelle du tableau.

#### Fonctionnalités :
- **Ouverture du fichier** : La fonction commence par ouvrir le fichier spécifié pour la lecture. Si l'ouverture échoue, elle affiche un message d'erreur et s'arrête.
- **Initialisation du tableau de matchs** : Avant de commencer la lecture, la fonction initialise la structure `Liste_matches` avec une capacité initiale de 1, prête à être agrandie selon le besoin.
- **Lecture des matchs** : La fonction lit le fichier ligne par ligne. Pour chaque ligne lue avec succès, elle crée une nouvelle structure `Matche` et la remplit avec les identifiants des équipes domicile et visiteur lues.
- **Gestion dynamique de la mémoire** : Si le nombre de matchs lus atteint la capacité actuelle du tableau, la fonction augmente cette capacité en la doublant, utilisant `realloc` pour ajuster la taille du tableau en mémoire.
- **Fermeture du fichier** : Une fois toutes les lignes lues et traitées, la fonction ferme le fichier.

#### Exemple d'utilisation :
```c
int nombreMatchs;
Match* matches = lire_matchs("matchs2022.txt", &nombreMatchs);
```

### Afficher les Matchs

La fonction `afficher_match` est conçue pour présenter une liste des matchs programmés dans un format simplifié, en affichant les identifiants (ID) des équipes domicile et visiteuse pour chaque match prévu. Cela permet d'avoir une vision claire de l'ensemble des confrontations à venir ou simulées dans le cadre de la Coupe du Monde de Football.

#### Détails de la fonction :
- **Itération sur les matchs :** La fonction parcourt l'ensemble des matchs enregistrés dans la liste fournie, affichant les identifiants des équipes impliquées dans chaque rencontre.
- **Affichage simplifié :** Pour chaque match, les identifiants de l'équipe à domicile et de l'équipe visiteuse sont affichés côte à côte, facilitant ainsi la compréhension rapide des confrontations prévues.

#### Paramètres :
- `liste_matches` : Une structure `Liste_matches` contenant la liste des matchs à afficher, y compris le nombre de matchs et un tableau des rencontres.

#### Type de retour :
- Aucun. Les informations sur les matchs sont directement affichées à l'utilisateur.

#### Exemple d'utilisation :
```c
Liste_matches liste_matches;
// Supposons que liste_matches a été préalablement remplie avec les données des matchs à venir.

// Afficher les identifiants des équipes pour chaque match prévu
afficher_match(liste_matches);
```

## 7.2 Partie 2: Simulation de la Phase de Groupes <a name="part2"></a>
### Trouver équipe par identifiant

La fonction `trouver_equipe_par_id` est essentielle dans le contexte de la simulation de la Coupe du Monde de Football FIFA Qatar 2022, car elle permet de localiser une équipe spécifique à partir de son identifiant unique. Cette capacité est cruciale pour le bon déroulement des simulations de matchs, assurant que chaque équipe puisse être correctement identifiée et manipulée avant, pendant, et après les matchs simulés.

#### Fonctionnement :
La fonction effectue une recherche séquentielle à travers la structure `W_CUP`, qui est organisée en groupes contenant les équipes qualifiées. Chaque groupe inclut un tableau d'équipes, avec chaque équipe représentée par une structure contenant des informations telles que son identifiant, son nom, et d'autres données pertinentes.

Pour trouver une équipe, la fonction parcourt chaque groupe et, au sein de chaque groupe, compare l'identifiant de chaque équipe avec l'identifiant recherché. Si elle trouve une équipe dont l'identifiant correspond à celui fourni, la fonction retourne immédiatement un pointeur vers cette structure `Equipe`. Si aucune correspondance n'est trouvée dans l'ensemble des groupes, la fonction retourne `NULL`, signalant ainsi l'absence d'une équipe correspondant à l'identifiant spécifié.

#### Paramètres :
- `wc` : Pointeur vers la structure `W_CUP` contenant les données de tous les groupes et équipes de la Coupe du Monde.
- `id` : Chaîne de caractères constante représentant l'identifiant unique de l'équipe recherchée.

#### Type de retour :
- Un pointeur vers la structure `Equipe` trouvée, contenant les informations détaillées de l'équipe correspondante. Retourne `NULL` si aucune équipe correspondante n'est trouvée.

#### Exemple d'utilisation :
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



### Générateur de buts basé sur une distribution normale

La fonction décrite est un générateur de nombres aléatoires qui simule le nombre de buts marqués dans un match de football, en s'appuyant sur une distribution normale. Cette méthode est idéale pour refléter la distribution statistique réelle des scores dans le football, où la majorité des matchs se terminent avec peu de buts.

#### Fonctionnement :
Le générateur utilise la méthode Box-Muller pour convertir deux nombres aléatoires uniformes en une variable suivant une distribution normale standard. La procédure est détaillée ci-dessous, indépendamment de tout langage de programmation :

1. **Génération de deux nombres aléatoires uniformes** \(u_1\) et \(u_2\). Ces nombres sont choisis de manière à être distribués uniformément dans l'intervalle ouvert (0, 1).

2. **Transformation de Box-Muller** : À partir de \(u_1\) et \(u_2\), une variable aléatoire \(z_0\) suivant une distribution normale standard est générée selon les formules :
   - \(z_0 = \sqrt{-2 \ln(u_1)} \cos(2 \pi u_2)\)

La variable \(z_0\) obtenue est ensuite ajustée pour modéliser un score de football réaliste. Pour ce faire, on la normalise avec une moyenne \(\mu\) et un écart-type \(\sigma\), puis on restreint le résultat à un intervalle spécifique pour assurer que le nombre de buts est réaliste dans le contexte d'un match de football.

#### Ajustement du score :
Le score final est ajusté pour s'assurer qu'il reste dans une plage acceptable, typiquement entre 0 et 6 buts, pour refléter les scores communs observés dans les matchs de football. Cette restriction est appliquée à la variable normalisée pour obtenir un nombre entier de buts conforme aux attentes du contexte sportif.

#### Formule d'ajustement du score :
La variable normalisée et ajustée pour le contexte du football est calculée comme suit, sans se limiter à une implémentation spécifique dans un langage de programmation :
- Le score ajusté est obtenu en limitant la valeur de \(z_0\) normalisée (avec \(\mu\) et \(\sigma\)) à l'intervalle [0, 6].

#### Paramètres :
- `mu` : La moyenne de la distribution, représentant le score moyen attendu dans un match.
- `sigma` : L'écart-type de la distribution, indiquant la variabilité des scores autour de la moyenne.

#### Type de retour :
- Un entier représentant le nombre de buts généré, garanti d'être compris entre 0 et 6.

#### Exemple d'utilisation :
```c
int butsMarques = normalvariate(2, 1);
```


### Jouer un match

La fonction `jouer_match` simule l'issue d'une rencontre entre deux équipes lors de la Coupe du Monde de Football FIFA Qatar 2022, en se basant sur leur classement FIFA pour prédire le résultat du match. Cette approche de simulation est conçue pour refléter de manière réaliste l'influence du classement FIFA sur la performance des équipes, fournissant une prédiction du résultat basée sur les performances historiques.

#### Principes de la simulation :
- **Influence du classement FIFA :** Le classement FIFA est utilisé pour ajuster la probabilité de marquer des buts pour chaque équipe, en prenant en compte la différence de classement entre les deux équipes. Cela permet à l'équipe avec un meilleur classement d'avoir statistiquement plus de chances de marquer.
- **Détermination des scores :** Le nombre de buts marqués par chaque équipe est généré à l'aide d'une distribution normale, où la moyenne est ajustée selon la différence de classement FIFA. Cela simule l'avantage ou le désavantage d'une équipe en fonction de son classement.

#### Résultat du match :
Le match peut se terminer par une victoire d'une des équipes ou un match nul. La fonction calcule les scores finaux sans nécessiter de prolongation ou de tirs au but pour les matchs de phase de groupe.

#### Paramètres :
- `eq1` : Pointeur vers la première structure `Equipe`, représentant l'une des équipes participant au match.
- `eq2` : Pointeur vers la seconde structure `Equipe`, représentant l'autre équipe participant au match.

#### Type de retour :
- Renvoie une structure `Buts` qui contient le nombre de buts marqués par chaque équipe pendant le match.

#### Exemple d'utilisation :
```c
Equipe eq1 = {"FRA", "France", "UEFA", 'A', 1750}; // Exemple d'équipe 1
Equipe eq2 = {"BRA", "Brésil", "CONMEBOL", 'B', 1822}; // Exemple d'équipe 2

Buts resultat = jouer_match(&eq1, &eq2);

printf("Résultat: %s %d - %d %s\n", eq1.nom, resultat.buts_eq1, resultat.buts_eq2, eq2.nom);
```

### Mettre à jour le classement

La fonction `mettre_a_jour_classement` joue un rôle crucial dans l'actualisation des statistiques des équipes à la suite d'un match dans le cadre de la simulation de la Coupe du Monde de la FIFA. Elle permet d'ajuster les données telles que le nombre de buts marqués et encaissés, ainsi que les points accumulés, en fonction des résultats des matchs, assurant ainsi que le classement reflète fidèlement les performances des équipes.

#### Processus de mise à jour :

- **Buts marqués et encaissés :** Les buts marqués durant le match sont ajoutés au total de buts pour et contre de chaque équipe, impactant directement leur différence de buts, un facteur déterminant pour le classement dans les phases de groupe.
- **Attribution des points :** Les points sont attribués en fonction du résultat du match (3 points pour une victoire, 1 point pour un nul, et 0 point pour une défaite), jouant un rôle essentiel dans le classement du groupe.
- **Mises à jour additionnelles :** Le nombre total de matchs joués, de victoires, de nuls, et de défaites est également mis à jour pour chaque équipe, offrant un aperçu complet de leur parcours dans le tournoi.

Ces mises à jour garantissent une gestion précise et à jour du classement des équipes, permettant une analyse plus approfondie de leurs performances.

#### Paramètres :
- `eq1` et `eq2` : Pointeurs vers les structures `Equipe` représentant les deux équipes ayant participé au match.
- `but` : Une structure `Buts` indiquant le nombre de buts marqués par chaque équipe.

#### Type de retour :
- Aucun. Les modifications sont appliquées directement aux structures `Equipe` fournies en paramètres.

#### Exemple d'utilisation :
```c
// Initialisation des équipes
Equipe equipe1 = {"Eq1", "Equipe 1", 0, 0, 0, 0, 0, 0, 0, 0};
Equipe equipe2 = {"Eq2", "Equipe 2", 0, 0, 0, 0, 0, 0, 0, 0};

// Simulation d'un résultat de match
Buts resultatMatch = {2, 1}; // L'équipe 1 marque 2 buts, l'équipe 2 marque 1 but

// Mise à jour des statistiques des équipes
mettre_a_jour_classement(&equipe1, &equipe2, resultatMatch);

// Affichage des statistiques pour vérification
printf("Equipe 1 - Points: %d, Buts Pour: %d, Buts Contre: %d, Différence de Buts: %d\n", equipe1.pts, equipe1.buts_p, equipe1.buts_c, equipe1.diff_buts);
printf("Equipe 2 - Points: %d, Buts Pour: %d, Buts Contre: %d, Différence de Buts: %d\n", equipe2.pts, equipe2.buts_p, equipe2.buts_c, equipe2.diff_buts);
```

### Fonction pour échanger deux équipes

La fonction `echanger` permet de permuter les données de deux équipes au sein de simulations ou de traitements nécessitant la réorganisation des structures d'équipes. Cet échange est utile dans divers scénarios, tels que le tri des équipes selon leur classement, la mise à jour de leur positionnement dans un tableau, ou d'autres opérations de manipulation de données.

#### Mécanisme d'échange :

La fonction réalise l'échange en copiant temporairement les données de la première équipe (`eq1`) dans une structure `Equipe` intermédiaire, puis en copiant les données de la seconde équipe (`eq2`) dans la première équipe, et finalement en copiant les données de la structure temporaire dans la seconde équipe. Ce processus garantit que les données des deux équipes sont échangées de manière efficace et sûre, sans perte d'informations.

#### Paramètres :
- `eq1` et `eq2` : Pointeurs vers les structures `Equipe` dont les données doivent être échangées.

#### Type de retour :
- Aucun. L'échange des données est effectué directement sur les structures passées en paramètres.

#### Exemple d'utilisation :
```c
Equipe equipe1 = {"Eq1", "Equipe 1", 0, 0, 0, 0, 0, 0, 0, 0};
Equipe equipe2 = {"Eq2", "Equipe 2", 0, 0, 0, 0, 0, 0, 0, 0};

// Avant l'échange
printf("Avant l'échange : Equipe 1 - %s, Equipe 2 - %s\n", equipe1.nom, equipe2.nom);

// Échange des équipes
echanger(&equipe1, &equipe2);

// Après l'échange
printf("Après l'échange : Equipe 1 - %s, Equipe 2 - %s\n", equipe1.nom, equipe2.nom);
```

### Trier les groupes

La fonction `trier_groupes` est essentielle dans le processus de simulation de la Coupe du Monde de Football, car elle organise les équipes de chaque groupe en fonction de leur performance. Le classement se base sur les critères officiels du tournoi, tels que les points accumulés, la différence de buts, et le nombre total de buts marqués, pour mettre en avant les équipes les plus performantes.

#### Mécanisme de tri :
- **Critères de classement :** Les équipes sont d'abord classées par points. En cas d'égalité, la différence de buts puis le nombre total de buts marqués sont utilisés pour départager les équipes.
- **Algorithme de tri :** Un algorithme de tri à bulles est employé pour ordonner les équipes selon ces critères, en effectuant des échanges successifs jusqu'à ce que le tableau soit entièrement trié.

#### Processus de tri :
- **Points :** Principal critère de classement. Les équipes avec le plus de points sont classées en premier.
- **Différence de buts :** Utilisée pour départager les équipes à égalité de points.
- **Buts marqués :** Critère final en cas d'égalité de points et de différence de buts.

#### Paramètres :
- `grp` : Pointeur vers le groupe d'équipes à trier. Ce groupe contient un tableau d'équipes avec leurs statistiques respectives.

#### Type de retour :
- Aucun. Le tri est effectué in situ, modifiant l'ordre des équipes directement dans le tableau fourni.

#### Exemple d'utilisation :
```c
// Initialisation d'un groupe avec des données fictives
Groupe groupeA;
// Configuration initiale du groupe et allocation de la mémoire pour les équipes
// Initialisation des équipes avec des données fictives
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

// Tri des équipes du groupe A selon leur performance
trier_groupes(&groupeA);

// Affichage du classement après tri
printf("Classement du Groupe A après tri :\n");
for (size_t i = 0; i < groupeA.nb_eqp; i++) {
    printf("%s - Points : %zu, Buts pour : %zu, Buts contre : %zu\n",
           groupeA.eqp[i].nom, groupeA.eqp[i].pts, groupeA.eqp[i].buts_p, groupeA.eqp[i].buts_c);
}

// Libération de la mémoire allouée pour les équipes
free(groupeA.eqp);
```

</div>
 
### Simuler les matchs

La fonction `simuler_matchs` est une composante clé de la simulation de la Coupe du Monde de Football Qatar 2022, permettant de simuler tous les matchs prévus dans le tournoi en se basant sur des données spécifiques telles que le classement FIFA et d'autres indicateurs de performance des équipes.

#### Processus de simulation :
- **Identification et confrontation des équipes :** Pour chaque match, les équipes sont identifiées grâce à leurs identifiants uniques. Elles sont ensuite confrontées via la fonction `jouer_match`, qui prend en compte le classement FIFA pour estimer les résultats possibles du match, tels que la victoire, le nul, ou la défaite.
- **Mise à jour des statistiques :** Après chaque match simulé, les statistiques des équipes, y compris les buts marqués et encaissés ainsi que les points gagnés, sont actualisées. Ces informations sont essentielles pour établir le classement des équipes dans leurs groupes respectifs.
- **Classement des équipes :** Une fois tous les matchs simulés, un tri est réalisé au sein de chaque groupe pour ordonner les équipes selon leurs performances, en utilisant des critères tels que les points accumulés, la différence de buts, et le total de buts marqués.

#### Paramètres :
- `wc` : Référence à la structure globale de la Coupe du Monde, comprenant les détails de chaque équipe et les groupes.
- `liste_matches` : Référence à une liste des matchs à simuler, incluant les identifiants des équipes.

#### Type de retour :
- Aucun. La fonction effectue les simulations et met à jour les structures concernées directement.

#### Exemple d'utilisation :
```c
W_CUP wc;
Liste_matches liste_matches;

// Chargement des équipes et des matchs
lire_equipes("equipes2022.txt", &wc);
lire_matches("matchs2022.txt", &liste_matches);

// Simulation des matchs et mise à jour des classements
simuler_matchs(&wc, &liste_matches);

// Affichage du classement final des groupes
for (int i = 0; i < 8; i++) {
    printf("Classement final du Groupe %c:\n", wc.grp[i].nom);
    for (size_t j = 0; j < wc.grp[i].nb_eqp; j++) {
        printf("%d. %s - %zu points\n", j + 1, wc.grp[i].eqp[j].nom, wc.grp[i].eqp[j].pts);
    }
    printf("\n");
}

// Libération des ressources allouées
for (int i = 0; i < 8; i++) {
    free(wc.grp[i].eqp);
}
free(liste_matches.matches);
```

## 7.3 Partie 3: Gestion de la Phase Éliminatoire <a name="part3"></a>
### Équipes qualifiées

La fonction `equipes_qualifiees` identifie les équipes qui avancent aux phases éliminatoires de la Coupe du Monde de Football Qatar 2022, en se basant sur les résultats finaux de la phase de groupes. Cette étape est cruciale pour la transition du tournoi vers les huitièmes de finale, où les enjeux sont considérablement accrus.

#### Sélection des équipes :
- **Critères de qualification :** Les deux meilleures équipes de chaque groupe sont sélectionnées selon leur nombre total de points. En cas d'égalité, la différence de buts, le nombre total de buts marqués, et les résultats des confrontations directes sont utilisés comme critères de départage.
- **Organisation pour les huitièmes de finale :** Les équipes qualifiées sont appariées pour les matchs des huitièmes de finale en fonction de leur position dans les groupes, assurant une progression équilibrée vers les phases suivantes du tournoi.

#### Paramètres :
- `wc` : Référence à la structure globale de la Coupe du Monde, contenant les détails des groupes et des équipes.

#### Type de retour :
- Aucun. Les équipes qualifiées sont directement intégrées dans la structure `W_CUP`, préparant le tableau pour les huitièmes de finale.

#### Exemple d'utilisation :
```c
W_CUP wc;
// Initialisation de la structure W_CUP avec les résultats de la phase de groupes

// Identification des équipes qualifiées pour les phases éliminatoires
equipes_qualifiees(&wc);

// Les équipes qualifiées sont désormais prêtes pour les huitièmes de finale
```

### Jouer un match éliminatoire

La fonction `jouer_match_eliminatoire` simule un match éliminatoire entre deux équipes dans le cadre de la Coupe du Monde de Football, prenant en compte non seulement le score du match mais également les mécanismes de décision en cas d'égalité, tels que la prolongation ou les tirs au but, pour déterminer l'équipe qui avance dans le tournoi.

#### Mécanisme de simulation :
- **Calcul du score :** Utilise les classements FIFA des équipes pour simuler le résultat du match, ajustant les statistiques de buts marqués et encaissés en conséquence.
- **Mise à jour des statistiques :** Les statistiques des équipes, incluant les buts marqués, encaissés, et le nombre de matchs joués, sont actualisées suite au match.
- **Détermination du gagnant :** En cas de match nul à la fin du temps réglementaire, une décision aléatoire détermine le gagnant soit par une prolongation, soit par des tirs au but.

#### Paramètres :
- `eq1` et `eq2` : Pointeurs vers les structures `Equipe` des équipes participant au match éliminatoire.

#### Type de retour :
- Retourne un pointeur vers l'équipe gagnante qui avance dans le tournoi.

#### Exemple d'utilisation :
```c
Equipe equipe1; // Initialisée avec des données spécifiques
Equipe equipe2; // Initialisée avec des données spécifiques

Equipe* equipeGagnante = jouer_match_eliminatoire(&equipe1, &equipe2);

// Affichage de l'équipe gagnante
printf("L'équipe gagnante est : %s\n", equipeGagnante->nom);
```

### Simuler un tour éliminatoire

La fonction `simuler_tour` joue un rôle crucial dans la progression des étapes éliminatoires de la Coupe du Monde de Football, en simulant chaque match d'un tour donné (huitièmes de finale, quarts de finale, demi-finales, et finale) et en préparant les confrontations pour le tour suivant, basées sur les équipes gagnantes.

#### Fonctionnement :
- **Simulation des matchs :** Pour chaque rencontre du tour actuel, les deux équipes sont confrontées via la fonction `jouer_match_eliminatoire`, qui détermine l'équipe gagnante en tenant compte des résultats du match, y compris les décisions en cas de match nul.
- **Préparation du prochain tour :** Les équipes gagnantes sont ensuite assignées au tour suivant, organisant les futures rencontres en fonction des résultats actuels.
- **Gestion de la finale :** Si le tour actuel est la finale, le gagnant est enregistré comme le vainqueur final du tournoi.

#### Paramètres :
- `wc` : Pointeur vers la structure globale de la Coupe du Monde, contenant les détails des tours éliminatoires.
- `tour_actuel` : Tableau contenant les rencontres du tour actuel.
- `nb_matchs` : Nombre de matchs dans le tour actuel.
- `prochain_tour` : Pointeur vers le tableau des rencontres du prochain tour, ou `NULL` si le tour actuel est la finale.

#### Type de retour :
- Aucun. Les résultats des matchs et les configurations des tours suivants sont mis à jour directement dans les structures fournies.

#### Exemple d'utilisation :
```c
W_CUP wc;
// Supposons que wc contient déjà les informations des tours éliminatoires correctement initialisées

// Simulation des huitièmes de finale
simuler_tour(&wc, wc.huitiemes, 8, wc.quarts);

// Après la simulation des huitièmes, les quarts sont prêts à être simulés, et ainsi de suite jusqu'à la finale
```

### Tournoi Éliminatoire

La fonction `tour_eliminatoires` orchestre la progression des tours éliminatoires dans la simulation de la Coupe du Monde de Football, depuis les huitièmes de finale jusqu'à la grande finale. Elle utilise la fonction `simuler_tour` pour simuler chaque tour, en s'appuyant sur les résultats pour déterminer les confrontations du tour suivant, jusqu'à couronner le champion du tournoi.

#### Déroulement :
- **Huitièmes de finale :** Le tournoi commence avec la simulation des huitièmes de finale, où les 16 équipes qualifiées sont confrontées pour déterminer les 8 qui avanceront.
- **Quarts de finale :** Les équipes victorieuses des huitièmes de finale sont ensuite engagées dans les quarts de finale, réduisant le nombre d'équipes à 4.
- **Demi-finales :** Les demi-finales déterminent les deux finalistes, ainsi que les équipes qui disputeront la troisième place.
- **Finale :** La simulation culmine avec la finale, où l'équipe gagnante est couronnée championne du monde.

#### Paramètres :
- `wc` : Pointeur vers la structure `W_CUP` contenant les détails des équipes et des tours éliminatoires.

#### Type de retour :
- Aucun. Le champion du tournoi est déterminé et enregistré dans la structure `W_CUP`.

#### Exemple d'utilisation :
```c
W_CUP wc;
// La structure W_CUP doit être préalablement initialisée avec les équipes qualifiées et les configurations des tours éliminatoires.

// Lancer la simulation des tours éliminatoires du tournoi
tour_eliminatoires(&wc);

// À la fin, wc contient le champion de la Coupe du Monde de Football.
```
## 7.4 Partie 4: Gestion des Statistiques Finales <a name="part4"></a>
### Afficher les Statistiques du Premier Tour

La fonction `afficher_stats_premier_tour` est dédiée à la présentation des statistiques détaillées de chaque équipe participant à la phase de groupes de la Coupe du Monde de Football, après que tous les matchs de cette phase ont été joués. Elle offre un aperçu complet des performances des équipes, incluant les victoires, défaites, nuls, buts pour et contre, la différence de buts, et les points accumulés, le tout organisé par groupe.

#### Processus d'affichage :
- **Tri des équipes :** Avant l'affichage, les équipes de chaque groupe sont triées en fonction de leurs performances, assurant que les statistiques sont présentées de manière ordonnée et cohérente avec le classement final du groupe.
- **Présentation par groupe :** Les statistiques sont affichées groupe par groupe, avec un en-tête indiquant le nom du groupe suivi par les détails de chaque équipe.
- **Format des statistiques :** Pour chaque équipe, sont affichés le nom, le nombre de victoires (V), de défaites (D), de nuls (N), les buts pour (BP), les buts contre (BC), la différence de buts (DB), et le total des points (Pts).

#### Paramètres :
- `wc` : Pointeur vers la structure `W_CUP`, contenant les informations des groupes et des équipes de la Coupe du Monde.

#### Type de retour :
- Aucun. Les statistiques sont affichées directement sur la sortie standard.

#### Exemple d'utilisation :
```c
W_CUP wc;
// Supposons que wc est déjà initialisé et contient les résultats des matchs du premier tour.

// Affichage des statistiques des équipes du premier tour, organisées par groupe
afficher_stats_premier_tour(&wc);
```
