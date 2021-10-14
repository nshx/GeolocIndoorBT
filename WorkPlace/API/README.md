## DESCRIPTION
_Application Progamming Interface_</br></br>
Cette application permet la gestion de la flotte de beacons.</br>
<ul> GET position d'un beacon en fonction de son adresse</br>
POST ajout d'un beacon address + location à la BDD</br></ul>

  'id': 0,</br>
  'addr': '12-34-56-ab-cd-ef',</br>
  'pos_x': 0,</br>
  'pos_y': 0</br>

## TODO
Heberger l'API dans une RapsberryPI</br>
Cela permet d'avoir une url accessible par le smartphone


## Running the application
>python api.py

## URLS
HomePage: http://127.0.0.1:5000/

Get whole registered beacons: http://127.0.0.1:5000/api/v1/beacons/all

Get specific beacon: http://127.0.0.1:5000/api/v1/beacons?id=0

## References
python API: https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask</br>
Add web API access to MIT App Inventor2 apps : https://www.youtube.com/watch?v=GVv00IP1x7Y</br>
JS API: https://robert-drummond.com/2013/05/08/how-to-build-a-restful-web-api-on-a-raspberry-pi-in-javascript/</br>
https://www.ionos.fr/digitalguide/serveur/configuration/configurer-un-serveur-web-raspberry-pi-avec-lamp/</br>
https://stackoverflow.com/questions/45853530/npm-install-error-not-foundram-files-nodejs-npm-3-mnt-c-program-files-nodejs</br>
CURL: https://adityasridhar.com/posts/how-to-easily-use-curl-for-http-requests
