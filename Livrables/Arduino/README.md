## DESCRIPTION
### Programme arduino pour envoie de chaînes de caratères.</br>
Les programmes fournis permettent d'envoyer des chaînes de caractères au module bluetooth.


## Livrable
Vous trouverez les fichiers suivant :
```
Mini_projet_radio.ino
Mini_projet_radion_V2.ino
bluetooth.ino
``` 

## Installation
Télécharger les fichiers .ino.</br>

### Configuration du HC05
Ouvrir le fichier bluetooth.ino et le téléverser dans l'Arduino.</br>
Débrancher le 5V du module bluetooth et appuyer sur le bouton de celui-ci.</br>
Rebrancher le 5V et lâcher le bouton la led clignote toutes les 2 secondes.</br>
Ouvrir le monoteur série de l'IDE arduino et envoyer la commande AT, le module doit répondre OK sinon recommencer la procédure.</br>

AT : Vérifier la connexion avec le module</br>
AT+NAME : Voir le nom du module</br>
AT+ADDR : Voir l’adresse du module</br>
AT+VERSION : Connaitre la version</br>
AT+UART : Connaitre la vitesse de connexion</br>
AT+ROLE: Voir le rôle du module (1=master/ 0=slave/ 2=esclave boucle)</br>
AT+RESET : Redemarrage dy module et sortir du mode AT</br>
AT+ORGL : Restorer le module d’usine</br>
AT+PSWD : Consulter le mot de passe</br>
AT+INQM : configurer l'envoie des trames </br> ( 1,5,5 : 0-mode_standard 1----mode_rssi, nombre de modules pouvant répondre, délais entre salve(1.28s~61.44s => 1 à 48)

## Updates :
&nbsp;&nbsp;&nbsp;- 07/12/2021: Version 1.0.0, Thomas Lemaire

## References
Configuration HC05 : https://www.instructables.com/How-to-Configure-HC-05-Bluetooth-Module-As-Master-/
                      + sheet-arduino-n_17.pdf
