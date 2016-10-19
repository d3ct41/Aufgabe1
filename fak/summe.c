/* summe.c
 * Version 1.0
 * Vorlesung Programmieren 1 HAW Hamburg
 * Zweck: Beispielprogramm
 */
#include <stdio.h>

int main () {
   /* Input: n
    * Output: Summe aller nat. Zahlen 1 .. n */

   /* ---- Variablen (Daten - Zutaten) ---- */
   int n;         // Input
   int ergebnis;  // Summe der bisher addierten Zahlen
   int zaehler;   // Die Zahl, die jeweils an der Reihe ist (wird hochgezählt)

   /* ---- Anweisungen(Aktivitäten - Zubereitung) ---- */
   n = 4;
   ergebnis = 0;
   zaehler = 1;

   while (zaehler <= n) {
      /* Berechnung geht weiter */
      ergebnis = ergebnis + zaehler;
      zaehler = zaehler + 1;
   }

   /* Berechnung ist beendet, da zaehler > n
    * --> Ergebnis ausgeben */
   printf("Das Ergebnis ist: %d !\n", ergebnis);
   return 0;
}

