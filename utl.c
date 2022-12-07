#include <stdio.h>//union, typdef, enum. PK - Tuomo, Tatu
#define TOSI 1
#define EPATOSI 0
int main(){
	union id{
		char nimi[15];
		int num;
	} t;
	union id tuote;
	t.num = 7;
	printf("union, id, tuote, num on %d\n", t.num);
	
	
	enum viikko {maanantai, tiistai, keskiviikko, torstai, perjantai, lauantai, sunnuntai};
	enum viikko tanaan;
	tanaan = maanantai;
	printf("enum, viikko, tanaan, paiva on %d\n", tanaan+1);
	
	
	typedef int BOOL;
	BOOL status;
	int number ;
	char ch = 'T';
	printf("typedef, BOOL, status, ch on %c", ch);
	
	return 0;
}