#include <stdio.h>
int main(){
	int vkp;
	
	printf("Anna viikonpaivan numero ma = 1, ti = 2, ke = 3, to = 4, pe = 5, la = 6, su = 7 \n");
	scanf("%d", &vkp);
	
	switch(vkp){
		case 1:
		case 2:
		case 3:
		case 4:
			printf("On arki \n");
			break;
		case 5:
			printf("Thank god it's Friday! ");
			break;
		case 6:
		case 7:
			printf("On VIIKONLOPPU!!! \n");
			break;
	}
	return 0;
}