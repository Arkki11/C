#include <stdio.h>
int main(){
	int luokkanro, kerros;
	char kirjaintunnus, talonnimi[20];
	
	printf("Syota luokannumero: \n");/*302*/
	scanf("%d", &luokkanro);
	fflush(stdin);
	printf("\nSyota talon kirjain: \n");/*F*/
	scanf("%c", &kirjaintunnus);
	printf("\nSyota kerroksen numero: \n");/*3*/
	scanf("%d", &kerros);
	
	printf("\nTukiopetus on kerroksessa %d, luokassa %c%d Ruostetalossa - Tervetuloa", kerros, kirjaintunnus, luokkanro);
	
	return 0;
}