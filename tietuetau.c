#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct satuhahmo{
	char satuhahmo[20], luonne[20], supervoima[20];
	int ika;
};
int main(){
	char vastaus;
	struct satuhahmo satuhahmot[5] = {{0}};;
		
	do{
		for(int i = 0; i < 5; i++){
			printf("\nAnna satuhahmo: ");
			scanf("%s", satuhahmot[i].satuhahmo);
			fflush(stdin);
			
			printf("\nSen luonne: ");
			scanf("%s", satuhahmot[i].luonne);
			fflush(stdin);
			
			printf("\nEnta supervoima: ");
			scanf("%s", satuhahmot[i].supervoima);
			fflush(stdin);
			
			printf("\nJa ika: ");
			scanf("&d", &satuhahmot[i].ika);
			fflush(stdin);
		}
	
	//haluatko jatkaa ohjelmaa?
	printf("\nHaluatko jatkaa? (k tai e)\n");
	vastaus = getchar();
	getchar();
	
	} while (vastaus == 'k');
	for(int i = 0; i < 5; i++){
		printf("\n%s, %s\n", satuhahmot[i].satuhahmo, satuhahmot[i].supervoima);
	}
	
	return 0;
}