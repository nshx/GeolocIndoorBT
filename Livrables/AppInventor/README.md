
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
    Assets            => Ensemble des images qui ont servi à l'esthétisme de la page WEB.
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

### Fonctionnement de la page WEB [Onglet "MAP"]
Ouvrir le dossier "WebApp_V6".</br>
Double-cliquez sur le fichier "page.html".</br>

#### Mode Simulation : Définir les niveaux des signaux RSSI.</br>


## Application Android
Le téléphone scan et recherche les balises du réseau grâce à leur adresse BT unique.</br>
Il récupère jusqu'à 3 RSSI puis envoie une requête PUT pour mettre à jour la database</br>
et passer le drapeau à 1.</br>

## Updates :
&nbsp;&nbsp;&nbsp;- 08/12/2021: Version 1.0.0, Arthur BORG

## References
Création page HTML/CSS: https://www.youtube.com/watch?v=oYRda7UtuhA&ab_channel=EasyTutorials</br>
