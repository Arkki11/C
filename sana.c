#include <stdio.h>
int main(){
	char taulu1[5];
	char *taulu1ptr;
	
	taulu1ptr = taulu1;
	
	printf("Syota viisi kirjainta erotettuina: \n");
	scanf(" %c %c %c %c %c", &taulu1[0], &taulu1[1], &taulu1[2], &taulu1[3], &taulu1[4]);
	
	for(int c = 0; c < 5; c++){
		*taulu1ptr = taulu1[c];
		taulu1ptr++;
	}
	taulu1ptr = taulu1;
	
	printf("Sana on : ");
	for(int c = 0; c < 5; c++){
		printf("%c", *taulu1ptr);
		taulu1ptr++;
	}
	
	return 0;
}