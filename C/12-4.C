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
