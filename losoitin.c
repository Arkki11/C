#include <stdio.h>
int main(){
	int num1, num2, sum, ero, tulo, jako;
	/*int var = i;
	int *ptr = &i;
	printf("Muuttujan *ptr arvo on %d \n", *ptr);*/
	
	printf("Syota kaksi positiivista kokonaislukua: ");
	scanf("%d %d", &num1, &num2);
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	sum = *ptr1 + *ptr2;
	ero = *ptr1 - *ptr2;
	tulo = *ptr1 * *ptr2;
	jako = *ptr1 / *ptr2;
	
	printf("\nLukujen %d ja %d \nSumma on %d\nErotus on %d\nTulo on %d\nJako on %d", *ptr1, *ptr2, sum, ero, tulo, jako);
	
	return 0;
}