//Faça um programa em que o usuário digita um natural (número inteiro não negativo) e é impresso na tela se o número digitado é primo ou não. 
//“Um número é primo se ele é divisível somente por 1 e por ele mesmo” 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i, quantDiv = 0;
    printf("Digite um numero inteiro, positivo e natural:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0){
            quantDiv = quantDiv + 1;
        }}
            if (quantDiv == 2) {
            printf("O numero eh primo!\n");
            }else{
                printf("O numero NAO eh primo!\n");}

    return 0;
}
