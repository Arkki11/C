#include <stdio.h>
int factorial(int num){
	int factorial = 1;
	
	for(int i  = num; i > 1; i--){
		factorial *= i;
	}
	return factorial;
}
int main(){
	int num;
	
	printf("Syota numero, jonka kertoman haluat: ");
	scanf("%d", &num);
	
	int fact = factorial (num);
	printf("Numeron %d, kertoma on %d", num, fact);
	
	return 0;
}