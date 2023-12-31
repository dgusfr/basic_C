#include<stdio.h>

int main()
{
 int numero, guarda_maior=0, guarda_menor=0;
 int i, N;

 printf("Quantos numeros serao digitados:\n");
 scanf("%d", &N);
 printf("Entre com o 1 numero inteiro: ");
 scanf("%d", &numero);

 guarda_maior=numero;
 guarda_menor=numero;

 for(i=1; i<N; i++){
    printf("\nEntre com o %d numero inteiro: ",i+1);
    scanf("%i", &numero);

   if(numero>guarda_maior)
      guarda_maior=numero;
   else
   if(numero<guarda_menor)
      guarda_menor=numero;
 }


 printf("\nO menor numero eh: %d", guarda_menor);
 printf("\nO maior numero eh: %d", guarda_maior);


}
