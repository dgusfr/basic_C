//Faça um programa que pergunte ao usuário a quantidade de números (N) que ele deseja digitar. Em 
//seguida, o usuário deverá digitar esses N números, que podem ou não ter casas decimais. Finalmente, seu 
//programa deverá imprimir na tela o maior e o menor valor dentre os números digitados. Obs: Utilize no 
//máximo cinco variáveis para resolver esse exercício e não utilize array/vetor. 

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
