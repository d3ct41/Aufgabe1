#include <stdio.h>

int main()
{
	//deklaration von ergebnis, x, y
	int ergebnis;
	int x = 0;
	int y = 0;
	
	//eingabe von x, (initalisierung
	printf("Eingabe fuer x: ");
	scanf("%d", &x);
	//eingabe von y (initalisierung
	printf("Eingabe fuer y: ");
	scanf("%d", &y);
	
	//ergebnis berechnung
	ergebnis = x*x + y*y;
	
	//ausgabe vom ergebnis
	printf("Ergebnis: %d ", ergebnis);
	
	return 0;
}
