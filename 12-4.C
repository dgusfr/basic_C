// Dado um número N inteiro e positivo, calcular a soma dos números inteiros pares e a soma dos números inteiros ímpares de 1 até N (intervalo [1,N]). 
//(a) Escreva o algoritmo matemático para resolver esse problema, indicando explicitamente os somatórios (Σ) envolvidos. 
//(b) Escreva um programa que resolve o problema, ou seja, o usuário digita um número inteiro positivo qualquer (N) e seja exibido na tela a soma dos números pares e a soma dos números ímpares de 1 até N.

#include <stdio.h>

int main() {
    int i, N;
    int soma_par=0, soma_impar=0;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &N);

    for(i=0; i<=N; i++){
            if(i%2 == 0){
               soma_par = soma_par + i;
            }else{
               soma_impar = soma_impar + i;}
    }

    printf("A soma dos pares de 0 ate %d eh: %d \n", N, soma_par);
    printf("A soma dos impares de 0 ate %d eh: %d \n", N, soma_impar);

    return 0;
}
