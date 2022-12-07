#include <stdio.h>
int main(){
	int size;
	int array[size];
	int array2[size];
	
	printf("Syota taulun koko: \n");
	scanf("%d", &size);
	for (int i = 0; i < size; i++){
		printf("numero %d: ", i);
		scanf("%d", &array[i]);
	}
	
	kopioTaulu(array2, array, size);
	
	printf("\nAlkuperainen taulu: \n");
	tulostaTaulu(array, size);
	printf("\nUusi taulu: \n");
	tulostaTaulu(array2, size);
	
	return 0;
}
void kopioTaulu(int *array2, int *array, int size){
	for(int i = 0; i  < size; i++){
		array2[i] = array[i];
	}
}
void tulostaTaulu(int *array, int size){
	for(int i = 0; i < size; i++){
		printf("%d ", *(array + i));
	}
}