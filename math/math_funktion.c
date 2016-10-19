#include <stdio.h>

int main()
{
	int ergebnis;
	int x = 0;
	int y = 0;

	printf("Eingabe fuer x: ");
	scanf("%d", &x);
	
	printf("Eingabe fuer y: ");
	scanf("%d", &y);
	
	ergebnis = x*x + y*y;
	
	printf("Ergebnis: %d ", ergebnis);
}
