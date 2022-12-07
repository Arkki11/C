/*for(int i = n-1; 0 <= i; --i)*/
#include <stdio.h>
int main() {
  int i;
  int luku1;
  printf("Anna hyppyvali\n");
  scanf("%i", &luku1);
  for (i = 1; i <= 20; i+=luku1){
    printf("%i ", i);
  }
  return 0;
}