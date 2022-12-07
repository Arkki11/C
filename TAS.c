#include <stdio.h>

int main()
{
	int summa = 0;
	int luku1, luku2, luku3, luku4, luku5;
	for (int i = 0; i <= 5; i++);
	{
	}
	
	printf(" Syota ensimmain luku viidesta ");
	scanf("%i", &luku1);
	
	printf("\n Syota toinen luku ");
	scanf("%i", &luku2);
	
	printf("\n Syota kolmas luku ");
	scanf("%i", &luku3);
	
	printf("\n Syota neljas luku ");
	scanf("%i", &luku4);
	
	printf("\n Syota viides luku ");
	scanf("%i", &luku5);
	
	summa = (luku1 + luku2 + luku3 + luku4 + luku5);
	
	printf("\n Lukusarjan summa on %i %i %i %i %i ", summa);
	
	
	return 0;
}