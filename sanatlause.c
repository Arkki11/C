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
	
	for(int i = 0; i < 3; i++){
		strcat(lause, nimi[i]);
		strcat(lause, " ");
		free(nimi[i]);
	}
	
	printf("Lause on - %s-\n"" ", lause);

	return 0;
}