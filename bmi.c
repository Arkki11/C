#include <stdio.h>
/*ohjelma kysyy henkilon nimen, ian, pituuden yhden desimaalin tarkkuudella ja paino kahden desimaalin tarkkuudella*/
int main()
{
	char nimi1[50];
	int ika1;
	float pituus1, paino1, bmi;
	
	printf("Syota nimesi. ");
	scanf("%s", &nimi1);
	printf("Syota ikasi. ");
	scanf("%i", &ika1);
	printf("Syota pituutesi yhden desimaalin tarkkuudella. ");
	scanf("%f", &pituus1);
	printf("Syota painosi kahden desimaalin tarkkuudella. ");
	scanf("%f", &paino1);
	printf("%s olet %i vuotta vanha!\n", nimi1, ika1);
	bmi=paino1/(pituus1*pituus1);
	printf("\nPainoindeksisi on %.2f\n", bmi);
	printf("\nSled fast, stay away from grass!");
	
	return 0;
}