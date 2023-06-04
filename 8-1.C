//Faça um programa em que o usuário digite um número qualquer (com ou sem casa decimal) e o programa 
//retorne se o número é inteiro ou não; caso o número digitado seja inteiro, retorne se ele é par ou ímpar. 

#include<stdio.h>

int main (){
    float valor;

    printf("Digite o numero:\n");
    scanf("%f",&valor);

    if (valor == (int)valor){
        printf("O numero digitado era inteiro");
    } else {
        printf("O numero digitado nao era inteiro");
    }

    return 0;
}
