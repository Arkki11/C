#include <stdio.h> /*Tassa on esikasittelysaannot kaantajalle*/

int main()
{ /*tassa on paaohjelman aloitus, joka paattyy viimeisella rivilla loytyvaan merkkiin } */
    int num1, num2;  /*tassa nimetaan ohjelmassa tarvittavat muuttujat ja maaritellaan, etta ne ovat kokonaislukuja*/
   
    printf("Anna 2 lukua\n"); /*ohjelma kirjoittaa komentokehotteeseen, "syota kaksi lukua"*/
   
    scanf("%d%i", &num1, &num2); /*ohjelma lukee siihen syotetyt luvut ja palauttaa ne tassa tapauksessa seuraavalla rivilla, 
	siina tapauksessa, etta ohjelma hyvaksyy ne.*/
    printf("\n\nAnnoit luvut %d ja %i\n\n", num1, num2); /*Ohjelma kirjoittaa "Annoit luvut(ne luvut jotka se luki rivilla yhdeksan 
	kohdassa scanf)" ja  ohjelmaan syotetyt luvut.*/
   
 return 0; /*return 0 tarkoittaa, etta kaikki on ok ja ei palauta mitaan arvoa*/
}