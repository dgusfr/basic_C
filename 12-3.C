//Faça um programa que calcula a média aritmética de N números. Seu programa deverá perguntar ao 
//usuário a quantidade (N) de números que serão digitados, em seguida o usuário deverá digitar os N 
//números. Finalmente o programa imprimirá na tela o valor da média aritmética (com duas casas decimais). 

#include <stdio.h>

int main() {
    int i, N, num, soma=0;
    float med;

    printf("Quantos numeros serao digitados?\n");
    scanf("%d", &N);

    for(i=0; i<N; i++){
        printf("Digite um valor numerico:\n");
        scanf("%d", &num);
        soma = soma + num;}

    med = (soma / N);
    printf  ("A media dos numeros digitados eh: %.2f \n", med);

    return 0;
}
