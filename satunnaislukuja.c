#include <stdio.h>
#include <stdlib.h>
// PK - Sahand, Tuomo, Mouadh
int main(){
    int num = 0;

    printf(" Kuinka monta satunnaista lukua haluat: ");
    scanf("%d", &num);

    srand(time(0));
    
// alla do while silmukalla
	
	int x = 0;
    printf("\nDo while silmukka: \n");
    do {
        printf("%d \n", rand());
        x++;
    } 
	while (x < num);

// alla while silmukalla

    x = 0;
    printf("\nWhile silmukka: \n");
    while (x < num) {
        printf("%d \n", rand());
        x++;
    }

    return 0;
}