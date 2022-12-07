#include <stdio.h>
int main(){
	int n, x=0;
	
	printf("\n Check whether a given number is an ugly number:\n");
	printf("Input an integer number: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("Input a correct number: ");
		scanf("%d", &n);
	}
	if(n% 2 == 0){
		n= n!= 2;
	}
		else if(n% 3 == 0){
			n= n!= 3;
		}
		else if(n% 5 == 0){
			n= n!= 5;
		}
	else{
		printf("It is not an ugly number.\n");
		x = 1;
	}
	if(x==0){
		printf("It is an ugly number.\n");
	}
	
	return 0;
}