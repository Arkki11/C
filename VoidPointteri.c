#include <stdio.h>
int main(){
	int luku;
	printf("Syota joku kokonaisluku: \n");
	scanf("%d", &luku);
	
	pointteri(luku);
}
void pointteri(int i){
	int var = i;
	int *ptr = &i;
	
	printf("\nMuuttujan ptr arvo on %p \n", ptr);
	printf("Muuttujan var arvo on %d \n", var);
	printf("Muuttujan &ptr arvo on %p \n", &var);
	printf("Muuttujan *ptr arvo on %d \n", *ptr);
}