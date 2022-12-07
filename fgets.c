#include <stdio.h> 
 int main(){

     char taulu[10];

     fgets (taulu, 10, stdin); //puuttui luettavien merkkien maara. 
     fputs (taulu, stdout);
 
return 0;
}