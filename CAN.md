   5bits  |    octet3     |    octet2     |    octet1     | 
|0 1 2 3|4 5 6 7 8 9 0 1|2 3 4 5 6 7 8 9|0 1 2 3 4 5 6 7 8|
|Priorit|ID_émetteur____|ID_destinataire|Type_msg_______|

ID carte :
|0   1   2  |3   4   5  |6   7  |
|Type_______|Numéro_____|Robot__|

Types :
* 000 : Carte unique
  - 000 : Stratégie (Pi ?)
  - 001 :
  - 010 : Asservissement Pilote
  - 011 :
  - 100 : Carte IHM (Boutons + Pi)
  - 101 : PC (Wifi, Eth, CAN,…)
  - 110 :
  - 111 : Broadcast
* 001 : Motorisation
  - 000 : Gauche
  - 001 : Droite
* 010 : Capteurs proximité type 1
* 011 : Capteurs proximité type 2
* 100 : Cartes Balises
  - 000 : Sous-balise Robot gros
  - 001 : Sous-balise Robot petit
  - 010 : Robot adverse gros
  - 011 : Robot adverse petit
  - 100 : Fixe Opposée
  - 101 : Fixe Arrière
  - 111 : Fixe Avant


