#include <stdio.h>
#include <time.h>
int main(){
	
	time_t nyky_aika = time(NULL);
	printf("Aika alkoi nyt !\n Paina enter lopettaaksesi ajan laskun.");
	
		while(1){
			if(getchar())
				break;
		}
	
	time_t nyky_aika2 = time(NULL);
	nyky_aika2 = nyky_aika2 - nyky_aika;
	printf("Loppu. Aikaa kului: %d sekuntia", nyky_aika2);
	
	return 0;
}