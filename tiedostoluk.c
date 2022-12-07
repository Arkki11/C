//
//  main.c
//  tiedostoluk
//
//  Created by Admin on 28.3.2022.
//
#include <stdio.h>
struct opiskelija {
    char etunimi[20], sukunimi[20];
    int omanumero, tyhja;
    float arvosanat[10], kok;
};

int lisaa_oppilas(struct opiskelija rekisteri[30]);
int arvioi_tehtava(struct opiskelija rekisteri[30]);
int arvioi_yksi(struct opiskelija rekisteri[30]);
void nayta_kaikki (struct opiskelija rekisteri[30]);
void nayta_oppilas(struct opiskelija rekisteri[30]);

int main() {
   /* FILE *kanta;
    
    struct opiskelija rekisteri[30]={{0}};
    
    //Tiedosto avataan lukumuodolla
    kanta = fopen("/Users/admin/Desktop/Ohjelmointi/C/c_kurssi.txt", "r");
    
    if (kanta == NULL)
    {
        //Jos tiedosto on tyhja tai ei ole olemassa, luo uusi tiedosto
        fclose(kanta);
        kanta = fopen("/Users/admin/Desktop/Ohjelmointi/C/c_kurssi.txt", "w");
        //suorita ohjelma, ja lopussa kirjoita sinne opiskelijoiden tiedot
    }
    else
    {
        while (!feof(kanta)) {
        //Tiedosto ei ole tyhja, pitaa lukea sen sisalto ohjelmaan
        fscanf(kanta, "%s %s %i %f %f %f %f %f %f %f %f %f %f ", rekisteri[0].etunumi, rekisteri[0].sukunimi, &rekisteri[0].omanumero, &rekisteri[0].arvosanat[0], &rekisteri[0].arvosanat[1], &rekisteri[0].arvosanat[2], &rekisteri[0].arvosanat[3], &rekisteri[0].arvosanat[4], &rekisteri[0].arvosanat[5], &rekisteri[0].arvosanat[6], &rekisteri[0].arvosanat[7], &rekisteri[0].arvosanat[8], &rekisteri[0].arvosanat[9]);
        }
    } */
    
    int komento=0;
    struct opiskelija rekisteri[30]={{0}};
    
    do {
        printf("Valitse komento:\n1 - Lisaa oppilas\n2 - Nayta yhden oppilaan tiedot\n3 - Lisaa arvosanoja\n4 - Nayta kaikki oppilaat\n5 - Lopeta tiedoston lukeminen\n6 - Lisaa yhden opiskelijan arvosana\n");
        scanf("%i", &komento);
          //kysy mita halutaan tehda.
          //Talenna vastaus
        //maarittele komento ja caset oikein
        
        switch (komento) {
        case 1:
          if (lisaa_oppilas(rekisteri) != 0) {
            fprintf(stderr, "Oppilaan lisays epaonnistui\n");
          }
          break;
        case 2:
          nayta_oppilas(rekisteri);
          break;
        case 3:
          if (arvioi_tehtava(rekisteri) != 0) {
            fprintf(stderr, "Arvosanojen lisays epaonnistui\n");
          }
          break;
        case 4:
          nayta_kaikki(rekisteri);
          break;
        case 5:
        //Tee varmuuskopio alkuperaisesta tiedostosta valiaikaiseen tiedostoon
        //Kirjoita uusi rekisteri tiedostoon, tarkista etta se onnitui
        //Nimea tiedosto varmuuskopioksi
        //Nimea valiaikainen tiedeosto tiedostoksi.
         /* {
            kanta = fopen("tiedosto.tmp", "w+");
            int kirjoitettu = fwrite(rekisteri, sizeof(rekisteri), 1, kanta);
            if (kirjoitettu != 1) {
               talletus epaonnistui
              exit(3);
            }
            if (fclose(kanta) != 0) {
               talletus epaonnistui
              exit(3);
            } */
            rename("tiedosto", "tiedosto.bak");
            rename("tiedosto.tmp", "tiedosto");
            break;
        case 6:
                if (arvioi_yksi(rekisteri) != 0) {
                  fprintf(stderr, "Arvosanojen lisays epaonnistui\n");
                }
                break;
        }
      } while (komento != 5);
    //Missa vaiheessa pitaa lisata jotakin tiedostoon tarvittaessa?
    return 0;
}

int lisaa_oppilas(struct opiskelija rekisteri[30]) {

    int omaara;
    printf("Kuinka monta oppilasta haluat lisata ?\n");
    scanf("%d", &omaara);

    int numero = 10001;
    for(int i = 0; i < omaara; i++){
        if(rekisteri[i].tyhja != 1){
            rekisteri[i].tyhja = 1;
            rekisteri[i].omanumero = numero+ i;
            printf("opiskelija numero: %d", rekisteri[i].omanumero);
            printf("\nopiskelijan etunimi: ");
            scanf("%s", rekisteri[i].etunimi);
            printf("opiskelijan sukunimi: ");
            scanf("%s", rekisteri[i].sukunimi);
        }
    }
    return 0;
}

int arvioi_tehtava(struct opiskelija rekisteri[30])
{

    int x;
    char k;
    
    do
    {
        printf("Anna tehtavan numero: ");
        scanf("%d", &x);
        getchar();

        for (int i = 0; i < 30; i++)
        {
          if (rekisteri[i].tyhja != 1)
            {
                break;
            }
        printf("Anna arvosana opiskelijalle %d %s %s: ", rekisteri[i].omanumero, rekisteri[i].etunimi, rekisteri[i].sukunimi);
        scanf("%f", &rekisteri[i].arvosanat[x-1]);
        getchar();
        }
        
        printf("Haluatko arvioida toisen tehtavan? k tai e: ");
        k = getchar();
    }while (k == 'k');

    return 0;
}

int arvioi_yksi(struct opiskelija rekisteri[30]) {

    int tieto, teht;

    printf("Opiskelija numero: ");
    scanf("%d", &tieto);

    if (tieto >= 10001 && tieto < 10030) {

        printf("Tehtava numero: ");
        scanf("%d", &teht);

        if (teht <= 10) {

            printf("Arvosana: ");
            scanf("%f", &rekisteri[tieto-10001].arvosanat[teht-1]);
            printf("Oppilaan arvosana on %.2f.\n", rekisteri[tieto-10001].arvosanat[teht-1]);

        }

    }
    
    return 0;
    
}

void nayta_kaikki (struct opiskelija rekisteri[30]) {

    puts("Numero        Nimi        Pisteet");

    for (int i = 0; i<30;i++){
        for (int j=0; j<10; j++) {
            if (rekisteri[i].tyhja !=1) {
                break;
            }
                rekisteri[i].kok += rekisteri[i].arvosanat[j];
        }

        if (rekisteri[i].tyhja !=1) {
            break;
        }
        printf("%d        %s %s        %.2f\n", rekisteri[i].omanumero, rekisteri[i].etunimi, rekisteri[i].sukunimi, rekisteri[i].kok);

    }

}

void nayta_oppilas(struct opiskelija rekisteri[30]) {
    int omanum=0;
    printf("Kenen oppilaan tiedot haluat tulostaa? (10001-10030): ");
    scanf("%i", &omanum);
    for (int i=0; i<10; i++) {
        if (rekisteri[i].tyhja !=1) {
            break;
        }
            rekisteri[omanum-10001].kok += rekisteri[omanum-10001].arvosanat[i];
    }
    
    printf("Tehtava     Arvosana\n");
    for (int a=0; a<10; a++)
    {
        printf("%i           %.2f\n", a+1, rekisteri[omanum-10001].arvosanat[a]);
    }
    printf("%.2f", rekisteri[omanum-10001].kok);
}