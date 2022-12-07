#include <stdio.h>
/*int x = (int)f*/
int main()
{
	float f;
	int y;
	
	printf("Syota desimaaliluku valilta 97 ja 122 \n");
	scanf("%f", &f);
	
	y=(int)(f+0.5);
	printf("%c ", (char)y);
	
	return 0;
}