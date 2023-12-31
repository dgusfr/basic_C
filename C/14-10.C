#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int i=0, numero, conta=0;

    for(i=0; i<10; i++){
       printf("Entre com um numero inteiro: ", i);
       scanf("%d", &vet[i]);}

    printf("Qual numero deseja saber se esta no vetor?\n");
    scanf("%d", &numero);


    for(i=0; i<10; i++){
       if(vet[i] == numero){
           conta = conta + 1;}}

 printf("O numero %d aparece %d vezes no vetor!\n", numero, conta);

    return 0;

}








