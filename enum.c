#include <stdio.h>
int main(){
	enum viikko {maanantai, tiistai, keskiviikko, torstai, perjantai, lauantai, sunnuntai};	//taulukko viikko
	enum viikko tanaan;	//muuttujaan tanaan, laitetaan taulukosta viikko, mones paiva on
	tanaan = lauantai;	//kuudes paiva
	printf("Tanaan on viikonpaiva numero %d\n", tanaan+1);	//printataan kuinka mones viikonpaiva on
	
	return 0;
}