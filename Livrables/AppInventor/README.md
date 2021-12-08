
## DESCRIPTION
### Application Mobile permettant le scan de module bluetooth pour une triangulation.</br>
Cette application permet à un utilisateur de scanner des modules bluetooth connu à proximité et de faire une requête à l'application web pour connaître sa position</br>
L'application permet un simple scan des modules bluetooth environnant et la lecture des niveaux RSSI:</br>
<ul>
En lançant l'application, on nous propose de lancer un scan des modules environnant.</br>
Tant que les 3 modules nécessaires à la triangulation, on continue l'acquisition.</br>
</ul>

## Livrable
Dans le dossier, vous trouverez une bibliothèque et le fichier de projet AppInventor de l'application.

## Installation
Télécharger les fichiers .aia et .aix.</br>
Le fichier .aia correspond au fichier projet de AppInventor.</br>
Le fichier .aix correspond à une bibliothèques de module bluetooth basse consommation. Celle-ci est a importer dans les bibliothèques du projet.</br>
Connecter vous à AppInventor, ensuite importer le projet et la bibliothèque.</br>
Lancer l'application sur votre smartphone (Android).</br>

### Fonctionnement de l'application
Au lancement de l'application, on appuie sur le bouton scan pour lancer l'acquisition.</br>
Le bouton check permet de vérifier que les modules que nous cherchons ont bien été détecté par l'application. </br>
Si ce n'est pas le cas, on relance une acquisition.</br>

Une fois les trois modules trouvés on envoie en commande curl des requètes permettant de mettre à jour la base de données utilisé par l'application Web et l'API.</br>
L'application Web prend alors le relai pour géolocaliser l'utilisateur.</br>

## Updates :
&nbsp;&nbsp;&nbsp;- 08/12/2021: Version 1.0.0, Arthur BORG
