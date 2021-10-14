## MONITORING MAP: Triangulation
	place beacons à partir de l'API
	show circles of BT detection
	show phone position on the map with an "X" -> incertitudes -> triangle arrondi ?
	forme de la carte = cercle
		centre(barycentre des Beacons)
		rayon (beacon + éloigné + rayon de détection)*1.05
	> zoom

```
 --------------------------------
|               B1               |
|                                |
|       X?                       |
|                                |
|               .             B2 |
|                O(0;0)          |
|                                |
|                                |
| B0                 B4          |
 --------------------------------


SCALE??? = RSSI/d
=> d = RSSI/SCALE

position = intersection des cercles de rayon "d".

0 beacon -> LOL
1 beacon -> Circle
2 beacons -> 1-2 positions
3 beacons -> 1 position
4 beacons -> 1 position
```
