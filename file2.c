#include <stdio.h>
int main(){
	char ch, filename[100];//C:\Ohjelmointi\C\atesti.txt
	int c;
	FILE *fileptr;
	
	printf("Anna tiedoston osoite: \n");
	gets(filename);
	
	if((fileptr = fopen(filename, "a+")) == NULL){
		printf("\nTiedoston avaaminen ei onnistunut");
		return 1;
	}
	fprintf(fileptr,"Tama on fprintf testi...\n");
	fscanf(fileptr,"%d", &c);
	fprintf(fileptr, "Tama on toinen fprintf testi %d", c);
	//fputs("Tama on fputs testi...", fileptr);
	fclose(fileptr);
	
	fileptr = fopen(filename, "r");
	printf("\nTiedoston %s tulostus\n\n", filename);
	
	while(!feof(fileptr)){
		ch = fgetc(fileptr);
		putchar(ch);
	}
	fclose(fileptr);
	
	return 0;
}