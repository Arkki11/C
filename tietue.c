#include <stdio.h>
struct lemmikkiTiedot{
	char lnimi[20];
	char onimi[20];
	char elaji[20];
	int ika;
};
int main(){
	struct lemmikkiTiedot lemmikki;
 
	/*printf("Syota lemmikin nimi: \n");
	scanf("%s", lemmikki.lnimi);*/
	strcpy(lemmikki.lnimi, "Lumi");
	printf("Syota sinun nimesi: \n");
	scanf("%s", lemmikki.onimi);
	printf("Syota lemmikkisi elainlaji: \n");
	scanf("%s", lemmikki.elaji);
	printf("Syota lemmikkisi ika: \n");
	scanf("%d", &lemmikki.ika);

	printf("\n%s on lemmikin nimelta %s omistaja. %s on %d vuotias %s.", lemmikki.onimi, lemmikki.lnimi, lemmikki.lnimi, lemmikki.ika, lemmikki.elaji);

  return 0;
}