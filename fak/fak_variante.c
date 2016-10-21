/*
 * Author: Andreas  Gkaitatzis, Maximilian Brinkmann
 * 
 * Version: 1.2
 * Datum: 21.10.2016
 * Gruppe 3
 * 
 * Berechnte die Fakultät einer Eingabe
 * */

#include <stdio.h>

int main()
{
	//Variabeln deklarieren
	int ergebnis;
	int n;
	int zaehler;
	
	//ergebnis und zaehler initalisieren
	ergebnis = 1;
	zaehler = 1;
	
	//Eingabe von n
	printf("Von welcher Zahl soll die Fakuktaet gebildet werden?\n");
	scanf("%d", &n);
	
	//solange zaehler kleine als n
	while (zaehler <= n)
	{
		ergebnis = ergebnis * zaehler;	//ergebnis * zaehler
		
		zaehler = zaehler + 1;			//zaehler hochzaehlen
	}
	
	//ausgabe ergebnis
	printf("Ergebnis: %d \n", ergebnis);
	
	
	return 0;
}

