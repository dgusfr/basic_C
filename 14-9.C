//Faça um programa no qual sejam definidos dois vetores de números inteiros com quaisquer tamanhos e 
//quaisquer valores e seja impresso na tela se esses vetores são iguais. Considere dois vetores iguais se eles 
//possuem o mesmo tamanho e se os elementos das posições correspondentes dos dois vetores são iguais 
//(isto é, o elemento da primeira posição do primeiro vetor é igual ao elemento da primeira posição do 
//segundo vetor, o elemento da segunda posição do primeiro vetor é igual ao elemento da segunda posição 
//do segundo vetor, e assim por diante). 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10], vet2[10];
    int i=0, j=0, tam1=0, tam2=0, verif=0;

printf("\nPrograma que verifica se dois vetores de 10 numeros sao iguais!\n");

    for(i=0; i<10; i++){
       printf("Digite um valor para o primeiro vetor: ", i);
       scanf("%d", &vet1[i]);}

printf("\n\n");

    for(i=0; i<10; i++){
       printf("Digite um valor para o segundo vetor: ", i);
       scanf("%d", &vet2[i]);}

    for(i=0; i<10; i++){
           for(j=0; j<10; j++){
             if(vet1[i] == vet2[j]){

}}

    return 0;
}
