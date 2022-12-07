#include <stdio.h>
int main(){
	union id{ //alustetaan unioni id
		int num; //tuotteen numero
	} t;
	
	union id tuote; //viitataan unioniin id
	t.num = 7; //tuotteen numero
	printf("Tuotenumero on %d\n", t.num); //printataan tuotteen numero
	
	return 0;
}