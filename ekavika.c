#include <stdio.h> //PK - Tuomo ja Tatu
#define FLAG
int main(){
	int num, count = 0;
	
	printf("Syota numero: ");
	scanf("%d", &num);
	
	printf("Viimeinen numero on: %d\n", num%10);
	while (num >= 10){
	num = num / 10;
#ifdef	FLAG
	printf("%d ", num);
#endif
	}
	
	printf("\nEnsimmainen numero on: %d\n", num);
	
	return 0;
}