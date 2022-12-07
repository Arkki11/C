#include <stdio.h>
int main(){
	char lause [100];
	char taulu1[50][50];
	int s = 0, j = 0;
	
	printf("Syota lause: \n");
	fgets(lause, 100, stdin);
	
	for(int i = 0; i < 100; i++){
		if(lause[i] == ' ' || lause[i] == '\n'){
			taulu1[s][j] = '\0';
			s++;
			j = 0;
		}
		else{
			taulu1[s][j] = lause[i];
			j++;
		}
	}
	
	printf("{");
	for(int k = 0; k < s; k++){
		printf("{");
		printf("%s", (taulu1[k]));
		printf("}");
	}
	printf("}");
	
	return 0;
}