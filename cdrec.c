#include <stdio.h>
int countdown(int num){

	printf("%d ", num);
	if(num == 0){
	return 0;
	}
	else{
		countdown(num - 1);
	}
}
int main(){
	int num;
	
	printf("Anna luku: ");
	scanf("%d", &num);
	
	countdown(num);
	return 0;
}