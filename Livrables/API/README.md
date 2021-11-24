## DESCRIPTION
_Application Progamming Interface_</br></br>
Cette application permet la gestion de la flotte de beacons.</br>
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
## Running the application
Télécharger puis décompresser le fichier .zip.</br>
Ouvrir l'invite de commande dans le répertoire du fichier index.js.</br>
Pour lancer l'API, exécuter l'instruction :
```
  npm start
```
## API CURL COMMANDS UBUNTU
**GET - EVERY BEACONS** :</br>
curl http://localhost:3000/api/v3/beacons/</br>
**POST - ADD BEACON** :</br>
curl -H 'Content-Type: application/json' -d '{"id":4,"addr":"44-44-44-44-44-44","RSSI":-100,"pos_x":5,"pos_y":5}' http://localhost:3000/api/v3/beacons/</br>
**PUT - UPDATE BEACON** :</br>
curl -X PUT -H "Content-Type: application/json" -d '{"RSSI":-42}' http://localhost:3000/api/v3/beacons/4</br>
**GET - SINGLE BEACON BY ID** :</br>
curl http://localhost:3000/api/v3/beacons/4</br>
**DELETE - REMOVE BEACON BY ID** :</br>
curl -X DELETE http://localhost:3000/api/v3/beacons/4 -H "Accept: application/json"</br>

## References
projet python API: https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask</br>
projet node.JS API + BDD mongoDB : https://www.youtube.com/watch?v=hjR52rCqlQU</br>
JS API: https://robert-drummond.com/2013/05/08/how-to-build-a-restful-web-api-on-a-raspberry-pi-in-javascript/</br>
CURL: https://adityasridhar.com/posts/how-to-easily-use-curl-for-http-requests</br>
CURL: https://gist.github.com/subfuzion/08c5d85437d5d4f00e58