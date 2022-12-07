#include <stdio.h>
int main(){
	for(int i = 1; i < 1000000; i++){//kokeilee lukuja yhden ja miljoonan valilta
		if(taikanumero(i)){
			printf("%d On taikanumero! \n", i);//jos luku on taikanumero, ohjelma tulostaa "on taikanumero"
		}
	}
}
int taikanumero(int num1){
	int x, y, taikanumero;
	
	x = sumnumd(num1);
	y = reversnum(x);
	taikanumero = x * y;
	
	if(num1 == taikanumero)
		return 1;	
	return 0;
}

int sumnumd(int i){			//tama osio laskee yhteen luvun osat
	int sum = 0;
	
	while(i > 0){
		sum = sum + (i % 10);
		i = i / 10;
	}
	return sum;
}

int reversnum(int num2){	//tama osio kaantaa summasta tulevan luvun
	int revnum = 0;
	
	while(num2 > 0){
		revnum = (revnum * 10) + (num2 % 10);
		num2 = num2 / 10;
	}
	return revnum;
}