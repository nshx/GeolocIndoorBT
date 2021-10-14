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

## TODO
Heberger l'API dans une RapsberryPI</br>
Cela permet d'avoir une url accessible par le smartphone

## Running the application
>npm start

HomePage: http://127.0.0.1:3000/</br>
Get whole registered beacons: http://127.0.0.1:3000/beacons</br>
Get specific beacon by id: http://127.0.0.1:3000/beacons/0

## API CURL COMMANDS
GET: curl -v http://127.0.0.1:3000/beacons/0</br>
POST: ???</br>
PUT: ???</br>
DELETE: ???


## References
python API: https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask</br>
Add web API access to MIT App Inventor2 apps : https://www.youtube.com/watch?v=GVv00IP1x7Y</br>
JS API: https://robert-drummond.com/2013/05/08/how-to-build-a-restful-web-api-on-a-raspberry-pi-in-javascript/</br>
https://www.ionos.fr/digitalguide/serveur/configuration/configurer-un-serveur-web-raspberry-pi-avec-lamp/</br>
https://stackoverflow.com/questions/45853530/npm-install-error-not-foundram-files-nodejs-npm-3-mnt-c-program-files-nodejs</br>
CURL: https://adityasridhar.com/posts/how-to-easily-use-curl-for-http-requests</br>
https://gist.github.com/subfuzion/08c5d85437d5d4f00e58
