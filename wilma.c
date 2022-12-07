#include <stdio.h>
int main(){
	char kirjaintunnus;
	int luokkanro, kerros;
	
	printf("Syota luokan kirjaintunnus (A) (B) (C) (E) (F) (G): ");
	scanf("%c", &kirjaintunnus);
	
	switch(kirjaintunnus){
		case 'A':
			printf("Syota luokan numero: ");
			scanf("%d", &luokkanro);
			kerros = luokkanro/100;
			printf("Tunti on A talon kerroksessa %d, luokassa %d\n", kerros, luokkanro);
			break;
		case 'B':
			printf("Syota luokan numero: ");
			scanf("%d", &luokkanro);
			kerros = luokkanro/100;
			printf("Tunti on B talon kerroksessa %d, luokassa %d\n", kerros, luokkanro);
			break;
		case 'C':
			printf("Syota luokan numero: ");
			scanf("%d", &luokkanro);
			kerros = luokkanro/100;
			printf("Tunti on C talon kerroksessa %d, luokassa %d\n", kerros, luokkanro);
			break;
		case 'E':
			printf("Syota luokan numero: ");
			scanf("%d", &luokkanro);
			kerros = luokkanro/100;
			printf("Tunti on E talon kerroksessa %d, luokassa %d\n", kerros, luokkanro);
			break;
		case 'F':
			printf("Syota luokan numero: ");
			scanf("%d", &luokkanro);
			kerros = luokkanro/100;
			printf("Tunti on F talon kerroksessa %d, luokassa %d\n", kerros, luokkanro);
			break;
		case 'G':
			printf("Syota luokan numero: ");
			scanf("%d", &luokkanro);
			kerros = luokkanro/100;
			printf("Tunti on G talon kerroksessa %d, luokassa %d\n", kerros, luokkanro);
			break;
	}
	
	return 0;
}