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
