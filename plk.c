#include <stdio.h>
#include <math.h>
int main(){
	double luku1, potenssi, nelio, itseis;
	char opek;
	
	printf("Minka operaation haluat tehda? Syota alkukirjain Potenssi(p), neliojuuri(n) tai itseisarvo(i): ");
	scanf("%c", &opek);
	printf("Syota luku: ");
	scanf("%lf", &luku1);
		
	switch(opek){
		case 'p':
			potenssi = pow(luku1, luku1);
			printf("%.2lf^%.2lf = %.2lf\n", luku1, luku1, potenssi);
			break;
		case 'n':
			printf("Luvun %.2lf neliojuuri on %.2lf", luku1, sqrt(luku1));
			break;
		case 'i':
			printf("Luvun %.2lf itseisarvo on %.2lf\n", luku1, fabs(luku1));
			break;
	}
	
	return 0;
}