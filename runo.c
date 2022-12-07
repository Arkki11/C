#include <stdio.h>
int main(){
	char adj[50], substm[50], verbik[50], paikka[50], substp[50];
	int nro1;
	
	printf("Syota adjektiivi\n"); 
  	scanf("%s", &adj); 
	
	printf("Syota substantiivi monikossa\n");
	scanf("%s", &substm);
	
	
	printf("Syota verbi kaskymuodossa\n");
	scanf("%s", &verbik);
	
	
	printf("Syota paikka\n");
	scanf("%s", &paikka);
	
	
	printf("Syota numero\n");
	scanf("%i", &nro1);
	
	
	printf("Syota substantiivi perusmuodossa\n");
	scanf("%s", &substp);
	
	
	printf("\n Anna kun kerron sinusta.\n ");
	printf(" Olet %s.\n ", adj);
	printf(" Haluaisit saada paljon %s.\n ", substm);
	printf(" Saadaksesi ne %s!\n ", verbik);
	printf(" %s on se paikka missa %s on %i.\n ", paikka, substm, nro1);
	printf(" %s on sinun kohtalosi", substp);
	
	return 0;
}