#include <stdio.h>
int main(){
	int hinta, ale;
	char vastaus;
	
	do{
		printf("Syota tuotteen hinta: \n");
		scanf("%d", &hinta);
		printf("Syota alennusprosentti: \n");
		scanf("%d", &ale);
		printf("\nTuotteen alennettu hinta on %.2f euroa.", (hinta - (hinta*ale/100.00)));
		
		printf("\nOnko viela laskettavia tuotteita? (k tai e) \n");
		getchar();
		vastaus = getchar();
		getchar();
		
	}while (vastaus == 'k');
	printf("\nKiitos! Nahdaan uudelleen!");
	
	return 0;
}