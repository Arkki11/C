#include <stdio.h>
int countdown(int num){
	for(int i = num; i >= 0; i--){
		printf("%d ", i);
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