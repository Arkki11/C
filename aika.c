//Ohjelma kertoo ajan GMT +4, koska DevC++ ottaa minun aikavyohykkeen
//automaattisesti
#include <stdio.h>
#include <time.h>
int main(){
	
	time_t nyky_aika = time(NULL) + 7200;
	printf("Nykyhetki on (GMT) + 4 : %s", ctime(&nyky_aika));
	
	return 0;
}