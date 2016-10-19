#include <stdio.h>

int main()
{
	int ergebnis;
	int n;
	int zaehler;

	printf("Von welcher Zahl soll die Fakuktaet gebildet werden?\n");
	scanf("%d", &n);

	ergebnis = n;
	zaehler = n;
	zaehler = zaehler - 1;
	
	while (zaehler > 0)
	{
		ergebnis = ergebnis * zaehler;
		//printf("work");
		
		zaehler = zaehler - 1;
		//printf("count");
	}
	
	printf("Ergebnis: %d \n", ergebnis);
	return 0;
}

