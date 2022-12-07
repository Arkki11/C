#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char sana[60], *nimi[20], lause[60] = {0};

	for(int i = 0; i < 3; i++){
		printf("Syota %d. sana: ", i+1);
		scanf("%s", sana);
		
		nimi[i]=(char*)malloc(strlen(sana));
		strcpy(nimi[i], sana);
	}
	
	printf("\nSanat ovat: \n");
	for(int i = 2; i >= 0; i--){
	printf("%s\n", nimi[i]);
	free(nimi[i]);
	}

	return 0;
}