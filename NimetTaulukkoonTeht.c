#include <stdio.h>

int main()
{
	char nimi1[4], nimi2[4];

	nimi1[0] = 'A';
	nimi1[1] = 't';
	nimi1[2] = 't';
	nimi1[3] = 'e';
	
	nimi2[0] = 'J';
	nimi2[1] = 'o';
	nimi2[2] = 'n';
	nimi2[3] = 'i';

	printf("%c%c%c%". "c%c%c%c%c ", nimi1[0], nimi1[1], nimi1[2], nimi1[3], nimi2[0], nimi2[1], nimi2[2], nimi2[3]);
	printf("%c%c%c%c%c%c%c%c ", nimi1[3], nimi1[2], nimi1[1], nimi1[0], nimi2[3], nimi2[2], nimi2[1], nimi2[0]);

	return 0;
}