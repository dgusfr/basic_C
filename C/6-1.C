#include <stdio.h>
#include <stdlib.h>

int main(){
   int cris, isla, jud;
   printf("Qual eh a data no calendario cristao?\n");
   scanf("%d", &cris);
    if(cris <= 0){
        jud = (3761 + (cris));
        isla = ((cris) - 622);
        printf("O ano cristao no calendario do Judaismo eh: %d\n", jud);
        printf("O ano cristao no calendario do Islamismo eh: %d\n", isla);
    }else{
        jud = (3761 + (cris));
        printf("O ano cristao no calendario do Judaismo eh: %d\n", jud);
        if(cris <= 622){
          isla = 622 - (cris);
          printf("O ano cristao no calendario do Islamismo eh: - %d\n", isla);
        }else{
          isla = (cris) - 622;
          printf("O ano cristao no calendario do Islamismo eh: %d\n", isla);}
          }
}
