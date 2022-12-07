#include <stdio.h>

/* PK - Puntila + Nevavesi */
int main()
{
	float ala, sivu1, korkeus;
	
	printf("Anna pyramiidin sivu ja korkeus\n");
	scanf("%f%f", &sivu1, &korkeus); 				/* %f%f tarkoittaa muuttujien määrää tässä tapauksessa sivu1 ja korkeus */
	
	ala=0.33 * sivu1 * sivu1 * korkeus ;
	
	printf("\nPyramiidin tilavuus %.2f\n", ala);    /* %.2f rajoitaa kahden desimaalin tarkkuuteen */
	
	return 0;
}