#include <stdio.h>
#include <math.h>

int main(){
	double tri;
	double trib;
	char tm = 0;
	printf("Kirjoita A:n pituus\n");
	scanf("%lf", &tri);

	printf("Kirjoita B:n pituus\n");
	scanf("%lf", &trib);

	double value = sqrt((tri * tri) + (trib * trib));

	printf("%.2lf", value);
	
	return 0;
}