#include <stdio.h>

/* PK - Puntila + Nevavesi */

/* nimi, ikä, pituus, seka ian ja pituuden keskiarvot */

int main()
{
	char nimi1[50], nimi2[50];
	float keskiarvo;
	float pituus1, pituus2;
	int ika1, ika2;
	
	printf("Syota ensimmainen nimi ");
	scanf("%s", &nimi1);
	printf("Syota toinen nimi ");
	scanf("%s", &nimi2);
	
	printf("Syota ensimmaisen pituus ");
	scanf("%f", &pituus1);
	printf("Syota toisen pituus ");
	scanf("%f", &pituus2);
	
	printf("Syota ensimmaisen ika ");
	scanf("%i", &ika1);
	printf("Syota toisen ika ");
	scanf("%i", &ika2);
	
	keskiarvo = (ika1 + ika2) / 2;
	printf(" %s ja %s, Teidan ian keskiarvo on %.1f.", nimi1, nimi2, keskiarvo);
	keskiarvo = (pituus1 + pituus2) / 2;
	printf(" %s ja %s, Teidan pituuden keskiarvo on %.1f.", nimi1, nimi2, keskiarvo);
	
	return 0;
}