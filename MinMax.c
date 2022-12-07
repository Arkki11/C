#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int taulu1[3];	
	srand(time(NULL));
	
	for (int i = 0; i <= 2; i++){
		taulu1[i] = rand() % 100 + 1;
	}
	for(int i = 0; i <= 2; i++){
		printf("Paikka %d: %d\n", i, taulu1[i]);
	}
	
	min(taulu1);
	max(taulu1);
	
	return 0;
}
void min(int *taulu1){
	if(taulu1[0] <= taulu1[1] && taulu1[0] <= taulu1[2])
	printf("\n%d on pienin luku\n", taulu1[0]);
	
	if (taulu1[1] <= taulu1[0] && taulu1[1] <= taulu1[2])
    printf("\n%d on pienin luku\n", taulu1[1]);
	
	if(taulu1[2] <= taulu1[0] && taulu1[2] <= taulu1[1])
    printf("\n%d on pienin luku\n", taulu1[2]);
	
}
void max(int *taulu1){
	if(taulu1[0] >= taulu1[1] && taulu1[0] >= taulu1[2])
	printf("%d on suurin luku\n", taulu1[0]);
	
	if (taulu1[1] >= taulu1[0] && taulu1[1] >= taulu1[2])
    printf("%d on suurin luku\n", taulu1[1]);
	
	if(taulu1[2] >= taulu1[0] && taulu1[2] >= taulu1[1])
    printf("%d on suurin luku\n", taulu1[2]);
}