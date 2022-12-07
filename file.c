#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch[40], filename[300];//D:\Ohjelmointi\nevavesi.tuomo\C\teksti.txt
	int num;
	FILE *fptr;
	
	printf("Anna tiedoston osoite: \n");
	gets(filename);
	fptr = fopen("", "a+");
	
	if((fptr = fopen(filename, "a+")) == NULL){
	printf("\nTiedoston avaaminen ei onnistunut");
	return 1;
	}
	
	printf("Syota num: ");
	scanf("%s", ch);
	fprinf(fptr, "%s""\n", ch);		//esimerkki toiminnosta fprintf
	fscanf(fptr, "%d""%s", &num, &filename);	//esimerkki toiminnosta fscanf
	printf("%d, %s", num, filename);
	fclose(fptr);
	
	return 0;
}