## Application Android
Se connecter à un module BT.</br>
Envoyer un message.</br>
Recevoir une confirmation de réception du module BT.</br>

## TODO
Se connecter à plusieurs modules?</br>
Envoyer un message à plusieurs modules? -> AT+ADDR?</br>
Relever le niveau de signal à la réception d'un message.</br>
Requetes vers API:</br>
<nbsp> GET position d'un beacon en fonction de son adresse</br>
<&nbsp> POST ajout d'un beacon address+location à la BDD</br>

## COMMIT ALEX
_Application de communication avec un module Bluetooth HC-05_</br></br>
Cette application établie la **connexion** avec un module Bluetooth HC-05 connecté sur une arduino,
puis prend en charge la **communication bidirectionnelle** entre le smartphone et la carte en passant par le module.

Les boutons _On/Off_ de l'application permet de simplement **envoyer** un **'1'** ou un **'0'** plus rapidement qu'avec la zone de texte.

Le bouton _Disconnect_ **interrompt** la communication et **reset** l'affichage.
