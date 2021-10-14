## Application Android
Se connecter à un module BT
Envoyer un message
Recevoir une confirmation de réception du module BT

## TODO
Se connecter à plusieurs modules?
Envoyer un message à plusieurs modules? -> AT+ADDR?
Relever le niveau de signal à la réception d'un message
Requetes vers API:
  GET position d'un beacon en fonction de son adresse
  POST ajout d'un beacon address+location à la BDD

## COMMIT ALEX
Application de communication avec un module Bluetooth HC-05
Cette application établie la connexion avec un module Bluetooth HC-05 connecté sur une arduino,
puis prend en charge la communication bidirectionnel entre le smartphone et la carte en passant par le module.

Les boutons On/Off de l'application permet de simplement envoyer un 1 ou un 0 plus rapidement qu'avec la zone de texte.

Le bouton Disconnect interrompt la communication et reset l'affichage.
