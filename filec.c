#include <stdio.h>
int main(){
	
	FILE *fptr;
	
	char ch;
	int merkit = 0, sanat = 0, rivit = 0;
	
	fptr = fopen("cfile.txt", "r");
	if(fptr == NULL){
		printf("Virhe tiedostoa avattaessa!!!");
		return -1;
	}
	while ((ch = fgetc(fptr)) != EOF){
		if(ch != EOF){
			merkit++;
		}
		if(ch == ' ' || ch == '\n'){
			sanat++;
		}
		if(ch == '\n'){
			rivit++;
		}
	}
	fclose(fptr);
	
	printf("Merkkien maara: %d\nSanojen maara: %d\nRivien maara: %d", merkit, sanat+1, rivit+1);
	
	return 0;
}