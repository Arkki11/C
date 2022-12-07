#include <stdio.h> /*pk - Tuomo ja Shane*/
int main(){
	float nro1;
	char c_f;
	printf("onko luku Fahrenheit (f) vai Celsius (c): ");
    scanf("%c", &c_f);
	printf("Syota lampotila ");
	scanf("%f", &nro1);
	if (c_f == 'f'){
        nro1 = ((nro1 - 32) * 0.5556);	
	}
	printf("%.2f", nro1);
	if (nro1 <= 0){
        printf(" pakkasta ");
	}
    else if(nro1 < 20){
        printf(" Suomen kesa ");
    }
    else if(nro1 < 35){
        printf(" vihdoinkin lammin ");
	}
    else if(nro1 < 60){
        printf(" liian kuuma ");
	}
    else if(nro1 > 60){
		printf(" olet saunassa ");
	}
	return 0;
}