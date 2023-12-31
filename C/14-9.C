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
