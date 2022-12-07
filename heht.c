#include <stdio.h>
#include <math.h>
int main(){
	double sivu;
	double pintaa;
	
	printf("Syota tontin sivun pituus metreina: \n");
	scanf("%lf", &sivu);
	pintaa = pow(sivu, 2);
	
	printf("\nTontin pinta-ala hehtaareina on: %.2lf", pintaa/100000);
	
	return 0;
}