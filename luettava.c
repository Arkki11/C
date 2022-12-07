#include <stdio.h>
int main(){
	int taulu1[5] = {11, 12, 13, 14, 15};	
	int taulu2[5] = {16, 17, 18, 19, 20};	//taulukoiden maarittaminen
	int taulu3[2];
	
	taulu3[0] = taulu1[2];	//taulun 1 keskimmaisen luvun kopioiminen tauluun 3
    taulu3[1] = taulu2[2];	//taulun 2 keskimmaisen luvun kopioiminen tauluun 3
    
    printf("Taulu 1: \n");
    for(int i = 0; i < 5; i++){
		printf("%d ", taulu1[i]);	//tulostetaan ensimmaisen taulun arvot
	}
	
	printf("\n\nTaulu 2: \n");
	for(int i = 0; i < 5; i++){
		printf("%d ", taulu2[i]);	//tulostetaan toisen taulun arvot
	}

	printf("\n\nUusi taulu: \n");
	for(int i = 0; i < 2; i++){
		printf("%d ", taulu3[i]);	//tulostetaan uuden taulun arvot
	}
	
	return 0;
}