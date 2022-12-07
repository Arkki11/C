#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// PK - Sahand, Tuomo, Mouadh
int main(){
						//nopeus1=km/h, nopeus2=m/h
	int km = 0;
	float m;
	char vastaus;
	
	do{
	printf("\nAnna nopeus km/h: \n");
	scanf("%d", &km);
	m = (km * 0.6213712);
	printf("\n%.1f on mailia tunnissa", m);
	getchar();
		

	printf("\nHaluatko jatkaa? (k tai e)\n");
	vastaus = getchar();
	getchar();
	
	} while (vastaus == 'k');
	printf("\nKiitos! Nahdaan uudelleen!");
	
	return 0;
}