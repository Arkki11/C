#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int num;
	int summa;
	
	printf("Syota kokonaisluku \n");
	scanf("%i", &num);

		if(num%2==0){
			printf("\n Luku %i on parillinen \n", num);	
		}
			else{
			printf("\n Luku %i on pariton \n", num);
			summa=num + 1;
			printf(" Seuraava parillinen luku on %i \n", summa);
			}
		
	return 0;
}