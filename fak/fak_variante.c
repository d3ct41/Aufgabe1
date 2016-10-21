#include <stdio.h>

int main()
{
	int ergebnis;
	int n;
	int zaehler;

	printf("Von welcher Zahl soll die Fakuktaet gebildet werden?\n");
	scanf("%d", &n);

	ergebnis = 1;
	zaehler = 1;
	
	while (zaehler <= n)
	{
		ergebnis = ergebnis * zaehler;
		
		zaehler = zaehler + 1;
	}
	
	printf("Ergebnis: %d \n", ergebnis);
	return 0;
}

