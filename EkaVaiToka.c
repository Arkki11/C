#include <stdio.h>
#include <string.h>

int main() {
    
    char eka[3];
    char toka[3];
        
    printf("Menetko ensimmaiselle tunnille ma vai to?\n");
    scanf("%s", eka);
     
    if (strcmp (eka, "ma") == 0){
         printf("Menetko  tokalle tunnille to vai pe?\n");
         scanf("%s", toka);
        if (strcmp (toka, "to") == 0){
             printf (" Ole oppitunneilla ma 8.30 - 13 (lahi) ja to 8.30 (lahi) - 12\n");
         }
         else {
             printf (" Ole oppitunneilla ma 8.30 - 13 (lahi) ja pe 8.30 - 12 (eta)\n");
         }
    }
    else{
         printf("Ole oppitunneilla to 12.30 - 16 (eta) ja pe 8.30 - 12  (eta)\n");
    }
   
    return 0;
}