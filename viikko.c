#include <stdio.h>
#include <string.h>
int main(){
	
	char vkp[3];
	
	printf("Anna viikonpaivan kaksi ensimmaista kirjainta \n");
	scanf("%s", &vkp);
	
	if(strcmp (vkp,"ma") == 0 ||strcmp (vkp,"ti") == 0 ||strcmp (vkp,"ke") == 0 ||strcmp (vkp,"to") == 0){
		printf("On arki \n");
	}
	else if(strcmp (vkp,"la") == 0 ||strcmp (vkp,"su") == 0){
		printf("On VIIKONLOPPU!!! \n");
	}
	else{
		printf("Thank God it's Friday! \n");
	}	
	return 0;
}