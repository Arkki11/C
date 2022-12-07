#include <stdio.h>
int main(){
	int arr[] = {1, 2, 3, 4};
	
	tulostaTaulu(arr, 4);
	
	return 0;
}
void tulostaTaulu(int *taulu, int koko){
	for(int i = 0; i < koko; i++){
		printf("%d ", *(taulu + i));
	}
}