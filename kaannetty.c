/*for(int i = n-1; 0 <= i; --i)*/
#include <stdio.h>
int main()
{
  int x;
  printf("Anna lukujono pituus\n");
  scanf("%i", &x);
  int taulu[x];
  for (int i = 1; i <= x; i++){
  taulu[i]=i;
  printf("%i ", taulu[i]);
  }
  return 0;
}