#include <stdio.h>
#include <string.h>
char *kk_nimi(int k){
	static char kk[12][10] = {"tammikuu", "helmikuu", "maaliskuu", "huhtikuu", "toukokuu", "kesakuu", "heinakuu", "elokuu", "syyskuu", "lokakuu", "marraskuu", "joulukuu"};
	
	if(k == 1){
		printf("\n%d. on %s", k, kk[0]);
	}
	if(k == 2){
		printf("\n%d. on %s", k, kk[1]);
	}
	if(k == 3){
		printf("\n%d. on %s", k, kk[2]);
	}
	if(k == 4){
		printf("\n%d. on %s", k, kk[3]);
	}
	if(k == 5){
		printf("\n%d. on %s", k, kk[4]);
	}
	if(k == 6){
		printf("\n%d. on %s", k, kk[5]);
	}
	if(k == 7){
		printf("\n%d. on %s", k, kk[6]);
	}
	if(k == 8){
		printf("\n%d. on %s", k, kk[7]);
	}
	if(k == 9){
		printf("\n%d. on %s", k, kk[8]);
	}
	if(k == 10){
		printf("\n%d. on %s", k, kk[9]);
	}
	if(k == 11){
		printf("\n%d. on %s", k, kk[10]);
	}
	if(k == 12){
		printf("\n%d. on %s", k, kk[11]);
	}
	return kk_nimi;
}
int main(){
	int k;
	
	printf("Syota kuukausi numerona:\n");
	scanf("%d", &k);

	kk_nimi(k);

	return 0;
}