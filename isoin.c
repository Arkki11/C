#include <stdio.h>
int main(){
	int nro1, nro2, nro3;
	printf("Syota kolme eri kokonaislukua \n");
	scanf("%i%i%i", &nro1, &nro2, &nro3);
	
	if (nro1 > nro2 && nro1 > nro3){
		printf("%i on isoin luku ", nro1);
	}
	if (nro2 > nro1 && nro2 > nro3){
		printf("%i on isoin luku ", nro2);
	}
	if (nro3 > nro1 && nro3 > nro2){
		printf("%i on isoin luku ", nro3);
	}
	else{
		printf("SYOTA KOLME ERI KOKONAISLUKUA!!! ");
	}
	return 0;
}