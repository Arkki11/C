#include <stdio.h>
int main(){
	int ch;
	char c;
	
	printf("Syota character \n");
	c = getchar();

	printf("Syotetty character ");
	putchar(c);
	
	printf("\nASCII arvo = %d, Character = %c\n", ch, ch);
	
	return 0;
}
