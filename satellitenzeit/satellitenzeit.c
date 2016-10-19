/* Satellitenzeit.c
   Version 1.0
   Vorlesung Programmieren 1 HAW Hamburg
   Zweck: Satellitenzeit Aufgabe 4 - mit Vorgabecode
   */

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
