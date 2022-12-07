#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int nro1, nro2, summa, tulo;
	char SvaiT, vastaus, ch;
	
	do{
	printf("\nAnna kaksi kokonaislukua: \n");
	scanf("%d %d", &nro1, &nro2);
	
	printf("Summa vai tulo: (+ tai *) \n");
	scanf(" %c", &SvaiT);
		do{
			ch = getchar();
			} while (ch != '\n' && ch != EOF);
	
		if(SvaiT == '+'){
			summa = nro1 + nro2;
			printf("\n%d + %d:n summa on %d\n", nro1, nro2, summa);
		}	
			else{
				tulo = nro1 * nro2;
				printf("\n%d * %d: tulo on %d\n", nro1, nro2, tulo);
			}
	
	printf("\nHaluatko jatkaa? (k tai e)\n");
	vastaus = getchar();
	getchar();
	
	} while (vastaus == 'k');
	printf("\nKiitos! Nahdaan uudelleen!");
	
	return 0;
}