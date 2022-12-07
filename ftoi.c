#include <stdio.h>
#include <math.h>
int main()
{
	int n;
// Kysytaan taulukon koko kokonaislukuna ja alustetaan sen kokoinen taulukko
	printf("Anna taulun koko \n");
	scanf("%i", &n); 
	float ftaulu[n];
	
	int itaulu[n];
// Kysytaan liukuluvut ja sijoitetaan liukuluku taulukkoon, seka pyoristetaan matemaattisesti oikein kokonaisluvuiksi \n
// ja sijoitetaan kokonaisluku taulukkoon. 
	for (int i = 0; i < n; i++){
		printf("numero %i: \n", i);
		scanf("%f", &ftaulu[i]);
		itaulu[i] = round(ftaulu[i]);
	}
// Tulostetaan kokonaislukutaulun alkiot
	for (int i = 0; i < n ; i++){
		printf("%i, ", itaulu[i]);
	}
	
	return 0;
}