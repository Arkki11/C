#include <stdio.h>
int main(){
	char ksanaa [100];
	char taulu1[50][50];
	int s = 0, j = 0;
	
	printf("Syota kolme sanaa valilyonneilla erotellen: \n");
	fgets(ksanaa, 100, stdin);
	
	for(int i = 0; i < 100; i++){
		if(ksanaa[i] == ' ' || ksanaa[i] == '\n'){
			taulu1[s][j] = '\0';
			s++;
			j = 0;
		}
		else{
			taulu1[s][j] = ksanaa[i];
			j++;
		}
	}
	
	printf("\nTaulu on: \n");
	for(int k = 0; k < s; k++){
		printf("%s\n", (taulu1[k]));
	}
	
	return 0;
}