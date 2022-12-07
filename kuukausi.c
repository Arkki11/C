#include <stdio.h>
#include <string.h>
int main(){
	
	int num1;
	char kuu[20];
	
	printf("Syota kuukausi \n");
	scanf("%s", &kuu);
	
	printf("Syota vuosi \n");
	scanf("%i", &num1);
	
	if(strcmp (kuu,"tammi") == 0 ||strcmp (kuu,"maalis") == 0 ||strcmp (kuu,"touko") == 0 ||strcmp (kuu,"heina") == 0||strcmp (kuu,"elo") == 0||strcmp (kuu,"heina") == 0||strcmp (kuu,"loka") == 0||strcmp (kuu,"joulu") == 0){
		printf("\n Kuukaudessa on 31 paivaa \n");
	}
	else if(strcmp (kuu,"huhti") == 0 ||strcmp (kuu,"kesa") == 0||strcmp (kuu,"syys") == 0||strcmp (kuu,"marras") == 0){
		printf("\n Kuukaudessa on 30 paivaa \n");
	}
	else{
		if((num1 % 400 == 0)||(num1 % 4 == 0 && num1 % 100 != 0)){
			printf("\n Kuukaudessa on 29 paivaa \n");
		}
			else{
			printf("\n Kuukaudessa on 28 paivaa \n");
			}
	}
	
	return 0;
}