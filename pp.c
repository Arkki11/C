#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	int parillinen[7] = {0};
	int pariton[7] = {0};
	int num;
	
	srand(time(0));

	for(int i=0; i<6; i++){
		num=rand();
		if(num%2==0){
			parillinen[i]=num;	
			}
			else{
			pariton[i]=num;
			}
	}
	printf(" Parilliset \n");
	for(int i=0; i<6; i++){
		if(parillinen[i]!=0){
		printf(" %d ", parillinen[i]);
		}
	}
	printf("\n Parittomat \n");
	for(int i=0; i<6; i++){
		if(pariton[i] !=0){
		printf(" %d ", pariton[i]);
		}
	}
	return 0;
}