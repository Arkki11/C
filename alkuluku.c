#include <stdio.h>
int main(){
    int isPrime = 1;
    int taulu[10] = {21, 23, 26, 30, 35, 41, 48, 56, 65, 75};
    int primetaulu[10] = {0};

    //1. silmukassa haetaan luvut taulukosta
    for (int i = 0; i < 10; i++){
        int n = taulu[i];
        isPrime = 1;

        // 2.silmukassa katsotaan onko se alkuluku
        for (int j = 2; j <= n/2; ++j){
            if (n% j == 0){
                isPrime = 0;
            }
        }
        if (isPrime == 1){
        	if(taulu[1] != 0){
            	printf("Taulukossa oli alkuluku %d \n", taulu[i]);
        	}
		}
    }
    return 0;
}