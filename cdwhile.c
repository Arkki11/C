#include <stdio.h>
int countdown(int num){
	while(num >= 0){
		printf("%d ", num);
		num --;
	}
	return 0;
}
int main(){
	int num;
	
	printf("Anna luku: ");
	scanf("%d", &num);
	
	countdown(num);
	return 0;
}