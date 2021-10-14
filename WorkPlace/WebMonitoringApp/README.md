## MONITORING MAP: Triangulation
<ul>Place beacons à partir de l'API.</br>
Show circles of BT detection.</br>
Show phone position on the map with an "X" -> incertitudes -> triangle arrondi ?</br>
Forme de la carte = cercle.</br>
<ul>Centre(barycentre des Beacons).</br>
Rayon (beacon + éloigné + rayon de détection)*1.05.</br></ul>
> Zoom.</ul></br>

```
 --------------------------------
|               B1               |
|                                |
|       X?                       |
|                                |
|               .             B2 |
|                O(0;0)          |
|                                |
|                           B3   |
| B0                 B4          |
 --------------------------------
```

SCALE??? = RSSI/d
=> d = RSSI/SCALE

position = intersection des cercles de rayon "d".

0 beacon -> LOL
1 beacon -> Circle
2 beacons -> 1-2 positions
3 beacons -> 1 position
4 beacons -> 1 position
