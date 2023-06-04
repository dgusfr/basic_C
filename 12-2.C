//Faça um programa que recebe um número inteiro (N) digitado pelo usuário e seja impresso na tela a 
//soma de todos os números inteiros de 1 até N. 
//Exemplo: se o usuário digita 6, o programa deverá exibir 21, pois 1+2+3+4+5+6=21. 
//Álem isso faça com que seja exibida a soma. Exemplo: se o usuário digitar 7, o programa deverá exibir 1+2+3+4+5+6+7=28

#include <stdio.h>

int main() {
    int n, i, soma=0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    printf("0");
 for (i = 1; i <= n; i++){
        soma += i;}
    for (i = 1; i <= n; i++){
        printf("+%d", i);}
        printf(" = %d", soma);

return 0;
}
