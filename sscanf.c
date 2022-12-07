#include <stdio.h>
int main(){
	char tiedot[100];
	char etunimi[20], sukunimi[20], kkunta[20];
	int onnennro;
	
	printf("Syota etunimi, sukunimi, kotikunta ja onnennumerosi ");
	gets(tiedot);
	sscanf(tiedot, "%s %s %s %d", etunimi, sukunimi, kkunta, &onnennro);
	
	printf("%s %d %s %s", kkunta, onnennro, sukunimi, etunimi);
	
	return 0;
}