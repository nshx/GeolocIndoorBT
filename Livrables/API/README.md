## DESCRIPTION
_Application Progamming Interface_</br></br>
Cette application permet la gestion de la flotte des balises.</br>
La database est enregistrée localement dans la RaspPi.</br>
Elle contient 3 balises et 1 drapeau. La position et l'adresse Bluetooth de chaque dispositif sont connues.</br>
Le drapeau régule la lecture des indicateurs d'intensité du signal BT reçu (RSSI).</br>
Chaque beacon est structuré de la manière suivante :</br>
```python
{
  'id': 1,
  'addr': '12-34-56-ab-cd-ef',
  'rssi': -20,
  'pos_x': 0,
  'pos_y': 1
}
```
Le drapeau</br>
```python
{
  'id': 0,
  'flag': 0
}
```
0 => Mise à jour des RSSI</br>
1 => Lecture autorisée : la WebApp peut récupérer les données</br>
## Livrable
Dans le dossier compressé v3.zip, vous trouverez l'arborescence suivante :
```
v3
  db
    beacons.json      => fichier d'initialisation de la database
  node_modules
    myapi.js          => définition des routes/requêtes HTTP autorisées
    package-lock.json => bibliothèques utilisées, fichier généré automatiquement lors de la création du projet JS
    package.json      => paramètres du fichier myapi.js
``` 
v3: JS + Compatibilité WebApp
## Installation
NodeJS:
```
  install nodeJS
  install npm
  npm i -s express
  npm i -s nodemon
``` 
HTTP requests:
```
  sudo apt update && sudo apt upgrade</br>
  sudo apt install curl</br>
```
Droits d'execution RaspPI, depuis le répertoire ./v3 :
```
  sudo chown 711 ./node_modules/.bin/nodemon
```
## Running the application
Télécharger puis décompresser le fichier .zip.</br>
Ouvrir l'invite de commande dans le répertoire du fichier index.js.</br>
Pour lancer l'API, exécuter l'instruction :
```
  npm start
```
## API cURL USE CASE
Les commandes cURL suivantes permettent de mettre à jour manuellement la data base.</br>
Elles ont été testées et validées sur la version 18.04 d'Ubuntu.</br>
**GET - EVERY BEACONS**: Liste l'ensemble de la database
```
curl http://localhost:3000/api/v3/beacons/
```
**POST - ADD BEACON**: Ajout d'une 4e balise
```
curl -H 'Content-Type: application/json' -d '{"id":4,"addr":"44-44-44-44-44-44","RSSI":-100,"pos_x":5,"pos_y":5}' http://localhost:3000/api/v3/beacons/
```
**PUT - UPDATE BEACON BY ID**: Mise à jour du RSSI de la 4e balise
```
curl -X PUT -H "Content-Type: application/json" -d '{"RSSI":-42}' http://localhost:3000/api/v3/beacons/4/
```
**GET - SINGLE BEACON BY ID**: Récupération des infos de la 4e balise
```
curl http://localhost:3000/api/v3/beacons/4/
```
**DELETE - REMOVE BEACON BY ID**: Suppression de la 4e balise
```
curl -X DELETE http://localhost:3000/api/v3/beacons/4/ -H "Accept: application/json"
```
## Intégration de l'API dans l'architecture BT
Il est fondamental de connecter la RaspPi et le smartphone sur le même réseau WiFi.
# Application Web
L'application Web check toutes les 5 secondes l'état du drapeau.</br>
S'il est à 1, elle lance une requête GET pour récupérer les données des 3 balises.</br>
Elle lance une requête PUT pour reset la valeur du drapeau à 0.</br>
# Application Android
Le téléphone scan et recherche les balises du réseau grâce à leur adresse BT unique.</br>
Il récupère jusqu'à 3 RSSI puis envoie une requête PUT pour mettre à jour la database</br>
et passer le drapeau à 1.</br>
## Updates :
&nbsp;&nbsp;&nbsp;- 24/11/2021: Version 1.0.0, Félix GOUBIN
## References
projet python API: https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask</br>
projet node.JS API + BDD mongoDB : https://www.youtube.com/watch?v=hjR52rCqlQU</br>
JS API: https://robert-drummond.com/2013/05/08/how-to-build-a-restful-web-api-on-a-raspberry-pi-in-javascript/</br>
CURL: https://adityasridhar.com/posts/how-to-easily-use-curl-for-http-requests</br>
CURL: https://gist.github.com/subfuzion/08c5d85437d5d4f00e58
nodemon errno 126: https://stackoverflow.com/questions/36128086/permission-denied-in-node-on-linux-when-running-start-script-w-local-nodemon/40353773
