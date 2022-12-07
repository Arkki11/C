#include <stdio.h>
int main(){
	int n;
	int m;
	
	printf("Syota taulukkoon luettavien lukujen lukumaara \n");
	scanf("%i", &n);
	int taulu[n];
	
	for (int i = 0; i < n; i++){
		printf("numero %i: \n", i);
		scanf("%i", &m);
		taulu[i]=m;
	}
	
	for (int i = n-1; i >= 0; i--){
		printf("%i", taulu[i]);
	}
	return 0;
}