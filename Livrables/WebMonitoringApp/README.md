## DESCRIPTION
### Application WEB servant d'interface utilisateur pour la localisation d'un téléphone par triangulation.</br>
Cette application permet de visualiser et de "simuler, en l'état" la position approximé d'un utilisateur entre 3 balises bluetooth.</br>
L'application est constituée de plusieurs zones d'interactions :</br>
<ul>
  - <strong>Home</strong> -> Brève description de l'application et accès rapide aux différentes sections de la page WEB via les raccourcis en haut à droite. De plus, un accès rapide au github est disponible via le bouton "download".</br>
  - <strong>Map</strong> -> Zone utilisée pour la visualisation de l'utilisateur sur un graphique de forme circulaire. La zone est cadrillée avec une certaine échelle décrite en-dessous de la forme. Les trois balises sont représentées en jaune avec respectivement, la première en haut, la seconde à gauche et la dernière à droite formant un triangle isocèle. L'utilisateur, quant à lui, se présente sous la forme d'un triangle rouge. Sa position est determinée par la puissance des signaux émis par les 3 balises. Ce niveau de signal appelé "RSSI" est pilotable depuis l'onglet MAP (sous la forme) pour entrer en mode simulation. Appuyez sur le bonton "scan_area" pour lancer la simulation.</br>
  - <strong>Authors</strong> -> Visualisation des tâches réalisées par les membres de l'équipe et remerciements pour la lecture et l'utilisation de l'application WEB.</br>
</ul>

## Livrable
Dans le dossier décompressé WebAPP_V6.zip, vous trouverez l'arborescence suivante :
```
v6
    Assets            => Ensemble des images qui ont servis à l'esthétisme de la page WEB.
        banner.jpg
        logo_ISTY.png
        logo_MECAVENIR.png
    fonctions.json    => Fichier d'instanciation des fonctions utilisateur pour interagir avec la page.
    page.html         => Double-clique pour visualiser la page WEB en localhost. (définition des éléments HTML de la page).
    style.css         => Modification physique des éléments HTML pour un meilleur confort visuel. (Arrangement des éléments pour que la page puisse aussi s'afficher sur des petits formats d'écran comme un téléphone)
``` 
WebAPP_V6: Fonction triangulation à jour et prête à l'emploi.</br>

## Installation
Télécharger puis décompresser le fichier WebApp_V6.zip.</br>

## Application WEB
Ouvrir le dossier "WebApp_V6".</br>
Double-clique sur le fichier nommé "page.html".</br>

### Fonctionnement de la page WEB [Onglet "MAP"]
#### Mode Simulation : Définir les niveaux des signaux RSSI.</br>
Dans les espaces d'édition de texte (B1 à B3), l'utilisateur à la possibilité de modifier les valeurs par défaut [-120].</br>
La plage de valeur autorisée est comprise entre -120 jusqu'à -30 dbm, correspondant au niveau de puissance qu'un module HC-05 peut émettre.</br>
<strong>-30</strong> étant un signal fort, le plus fort que le module puisse émettre, ce qui signifie que l'utilisateur se positionne à moins d'1m de la balise.</br>
<strong>-120</strong> est le signal le plus faible correspondant à une distance utilisateur-balise d'environ 10m moyennant les problèmes de propagation dûe à l'environnement où se trouve les deux entités.</br>
Pour réaliser la fonction de triangulation présentée ci-après, j'ai procédé par tests pour déterminer la distance correspondant à un niveau RSSI.</br>
Les données résultantes de la distance en fonction du signal reçu est écrite ci-dessous:</br>

<ul>
  <pre>
<strong>[dBm]        [m]</strong></br>
 -30         1</br>
 -40         2</br>
 -50         3</br>
 -60         4</br>
 -70         5</br>
 -80         6</br>
 -90         7</br>
 -100        8</br>
 -110        9</br>
 -120        10
   </pre>
</ul>

Si l'utilisateur ne donne pas un multiple de 10, alors la valeur qui sera donné en retour à la fonction de calcul de la triangulation sera la moyenne des valeurs sup et inf à celle-ci.</br> (Exemple: <strong>input</strong> = -34 dBm; </br> &nbsp;  &nbsp;  &nbsp;  &nbsp;  &nbsp;  &nbsp; &nbsp;  &nbsp; <strong>output</strong> = (-30 dBm) + (-40 dBm) / 2 -> (1 m + 2 m) / 2 = 1.5m)</br>

Une fois les valeurs RSSI entrées pour chaque balise, l'utilisateur peut lancer la localisation avec le bouton "scan-area".

#### Mode Simulation : La Triangulation.</br>
_Nota: Toutes les données sont des approximations. Puisque la simulation ne vérifie pas que les RSSI concordent entre eux, il y'a également une approximation sur ces données._</br>
Il existe quatre cas de figure:
<ul>
  - Aucune balise detecté,</br>
  - Une balise detecté,</br>
  - Deux balises detectés,</br>
  - Trois balises detectés.</br>
</ul>
Chaque cas est determiné par le RSSI des 3 balises.

Si le RSSI est supérieur à -30 dBm (alors il y'a une erreur donc rssi = 0) et si rssi est inférieur à -120 dBm (même opération, rssi = 0)
Lorsque le rssi d'une balise vaut 0 son signal n'existe pas et le nombre de balise detecté diminue de 1.

##### Traitement du cas 1: Zéros balise detectée </br>
Rien n'est mis à jour, le système reste dans sa dernière position connue.</br>

##### Traitement du cas 2: Une balise detectée </br>
L'utilisateur se place directement au-dessus de la balise dont le signal est capté.</br>
Cette approximation est obligatoire étant donné l'infinité de possibilité (l'utilisateur peut être n'importe où dans la zone de la balise).</br>

##### Traitement du cas 3: Deux balises detectées </br>
Détection des intersections des deux zones (cercles vert fluo).</br>
L'utilisateur se placera au centre de la droite qui lie les deux intersections.</br>

##### Traitement du cas 4: Trois balises detectées </br>
Détection des intersections des trois zones (cercles vert fluo).</br>
L'utilisateur se placera au centre du triangle que forme les trois intersections.</br>

## Serveur-WebAPP (en coordination avec Félix)
Avant de démarrer l'application (double click sur le fichier page.html),</br>
il faut vérifier l'adresse IP du serveur de l'API/Database (127.0.0.1 pour un test en local ou l'IP de la raspberry)</br>
Pour s'assurer de la récupération des données, nous regardons la console DevTools (touche F12) de la page Web.</br>
![setflag](https://user-images.githubusercontent.com/92402906/143230502-82cc5493-3866-4f65-9338-8d064d4c5c6a.jpg)</br>
Par défaut (et pour faciliter les tests), le drapeau est initialisé à 1.</br>
C'est pourquoi au lancement de la page web, nous récupérons les données stockées dans la database.</br>
L'application Web check toutes les 5 secondes l'état du drapeau :</br>
S'il est à 1, elle lance une requête GET pour récupérer les données des 3 balises.</br>
Elle lance une requête PUT pour reset la valeur du drapeau à 0.</br>
Nous simulons manuellement la mise à jour de nouvelles valeurs avec la commandes cURL PUT présentée précédemment.</br>
Pour indiquer l'état READ READY à l'application web, nous passons la valeur du drapeau à 1 : depuis un terminal Linux :
```
curl -X PUT -H "Content-Type: application/json" -d '{"flag":1}' http://localhost:3000/api/v3/beacons/0/
```
Une fois le drapeau à jour, l'application Web relance une requête GET (après 38 essais sur la capture d'écran) pour récupérer les données des 3 balises.</br>

## Application Android
Le téléphone scan et recherche les balises du réseau grâce à leur adresse BT unique.</br>
Il récupère jusqu'à 3 RSSI puis envoie une requête PUT pour mettre à jour la database</br>
et passer le drapeau à 1.</br>

## Updates :
&nbsp;&nbsp;&nbsp;- 24/11/2021: Version 1.0.0, Félix GOUBIN (nshx)

## References
projet python API: https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask</br>
projet node.JS API + BDD mongoDB : https://www.youtube.com/watch?v=hjR52rCqlQU</br>
JS API: https://robert-drummond.com/2013/05/08/how-to-build-a-restful-web-api-on-a-raspberry-pi-in-javascript/</br>
CURL: https://adityasridhar.com/posts/how-to-easily-use-curl-for-http-requests</br>
CURL: https://gist.github.com/subfuzion/08c5d85437d5d4f00e58</br>
nodemon errno 126: https://stackoverflow.com/questions/36128086/permission-denied-in-node-on-linux-when-running-start-script-w-local-nodemon/40353773
