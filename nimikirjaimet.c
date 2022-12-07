#include <stdio.h>
int main(){
	char e, s, ch;
    char *E, *S;
     
    //Kirjoiota puuttuva koodi tahan
    printf("Syota etunimesi pienilla kirjaimilla: ");
    e = getchar();
    do{
    	ch=getchar();
	}	while(ch != '\n' && ch != EOF);
    
	printf("Syota sukunimesi pienilla kirjaimilla: ");
    s = getchar();
    
    E = &e;
    S = &s;
    printf("Nimikirjaimesi ovat %c%c", *E -32,*S-32);
	
	return 0;
}