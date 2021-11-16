## DESCRIPTION
_Application Progamming Interface_</br></br>
Cette application permet la gestion de la flotte de beacons.</br>
Il y a 3 beacons enregistrés par défaut dans la BDD.</br>
<ul> GET position d'un beacon en fonction de son adresse</br>
POST ajout d'un beacon address + location à la BDD</br></ul>

  'id': 0,</br>
  'addr': '12-34-56-ab-cd-ef',</br>
  'date': '14-10-2020',</br>
  'pos_x': 0,</br>
  'pos_y': 0</br>

v1: Python
v2: nodeJS
v3: BT?

## BDD ??
mariaDB/MySQL?
https://raspberrytips.fr/installer-mysql-raspberry-pi-mariadb/</br>
https://practicalprogramming.fr/nodejs-mysql

## BLUETOOTH API?!! ABANDON
https://web.dev/bluetooth/
Bluetooth Low Energy -> not implemented in the HC05 module.</br>
But great for IoT networks.
https://stackoverflow.com/questions/47511294/how-can-we-use-http-over-bluetooth-low-energy-ble</br>
RASPBERRY BT : http://commentgeek.com/comment-configurer-bluetooth-raspberry/

## TODO
Heberger l'API dans une RapsberryPI</br>
Sauvegarde du fichier d'initialisation beacon.json</br>
Ajout des utilisateurs + filtre de recherche

## Running the application
Dans le répertoire du fichier index.js :
>npm start</br>

HomePage: http://127.0.0.1:3000/

## API CURL COMMANDS UBUNTU
**GET - EVERY BEACONS** :</br>
curl http://localhost:3000/api/v2/beacons/</br>
**POST - ADD BEACON** :</br>
curl -H 'Content-Type: application/json' -d '{"addr": "44-44-44-44-44-44","pos_x":5,"pos_y":5}' http://127.0.0.1:3000/api/v2/beacons/</br>
**PUT - UPDATE BEACON** :</br>
curl -X PUT -H "Content-Type: application/json" -d '{"pos_x":-3,"pos_y":40}' http://localhost:3000/api/v2/beacons/5</br>
**GET - SINGLE BEACON BY ID** :</br>
curl http://localhost:3000/api/v2/beacons/5</br>
**DELETE - REMOVE BEACON BY ID** :</br>
curl -X DELETE http://localhost:3000/api/v2/beacons/5 -H "Accept: application/json"</br>


## References
projet python API: https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask</br>
projet node.JS API + BDD mongoDB : https://www.youtube.com/watch?v=hjR52rCqlQU</br>
JS API: https://robert-drummond.com/2013/05/08/how-to-build-a-restful-web-api-on-a-raspberry-pi-in-javascript/</br>
CURL: https://adityasridhar.com/posts/how-to-easily-use-curl-for-http-requests</br>
CURL: https://gist.github.com/subfuzion/08c5d85437d5d4f00e58
