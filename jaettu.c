#include <stdio.h>
int main(){
	int i;
	int num1, num2;
	printf("Anna kaksi lukua \n");
	scanf("%i %i", &num1, &num2);
	
	if(num1>num2){
		for (i = num2; i <= num1; i+=num2){
		printf("%i ", i);
		}
	}
	else if(num1<num2){
		for (i = num1; i <= num2; i+=num1){
		printf("%i ", i);
		}
	}
	return 0;
}