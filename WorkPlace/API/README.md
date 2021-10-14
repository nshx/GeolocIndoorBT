## GOALS
_Application de communication avec un module Bluetooth HC-05_</br></br>
Cette application établie la **connexion** avec un module Bluetooth HC-05 connecté sur une arduino,
puis prend en charge la **communication bidirectionnelle** entre le smartphone et la carte en passant par le module.

Les boutons _On/Off_ de l'application permet de simplement **envoyer** un **'1'** ou un **'0'** plus rapidement qu'avec la zone de texte.

Le bouton _Disconnect_ **interrompt** la communication et **reset** l'affichage.

ADD or REMOVE a BEACON from the DATABASE
```python
{
		'id': 0,
    'addr': '12-34-56-ab-cd-ef',
		'pos_x': 0,
		'pos_y': 0
}
```

## TODO
Se connecter à plusieurs modules?</br>
Envoyer un message à plusieurs modules? -> AT+ADDR?</br>
Relever le niveau de signal à la réception d'un message.</br>
Requetes vers API:
<ul> GET position d'un beacon en fonction de son adresse</br>
POST ajout d'un beacon address+location à la BDD</br></ul>

## Running the application
>python api.py

## URLS
HomePage: http://127.0.0.1:5000/

Get whole registered beacons: http://127.0.0.1:5000/api/v1/beacons/all

Get specific beacon: http://127.0.0.1:5000/api/v1/beacons?id=0

## References
https://programminghistorian.org/en/lessons/creating-apis-with-python-and-flask
