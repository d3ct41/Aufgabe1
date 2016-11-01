/*
 * Author: Andreas  Gkaitatzis, Maximilian Brinkmann
 * 
 * Version: 1.1
 * Datum: 21.10.2016
 * Gruppe 3
 * 
 * Umrechnung von Sekunden in Tage, Stunden, Minuten, Sekunden
 * */

#include <stdio.h>

int main() {
      /* Variablen */
      int anzahlSekunden;
      int restSekunden;
      int tage;
      int stunden;
      int minuten;
      
      
      /* Input vom Benutzer holen */
      printf("Bitte Anzahl Sekunden eingeben: ");
      scanf("%d", &anzahlSekunden);
      
      /* Ergebnis berechnen */
      tage = anzahlSekunden / 86400;
      restSekunden = anzahlSekunden % 86400;
      stunden = restSekunden / 3600;
      restSekunden = restSekunden % 3600;
      minuten = restSekunden / 60;
      restSekunden = restSekunden % 60;
      
      /* Ergebnis ausgeben */
      printf("Satellitenzeit: %d Tage %d:%d:%d \n", tage, stunden, minuten, restSekunden);
       
      return 0;
}
