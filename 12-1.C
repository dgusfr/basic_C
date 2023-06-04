//Faça um programa que recebe números inteiros digitados pelo usuário e seja impresso na tela se o número 
//é par ou impar. Seu programa deverá ir lendo os números e dizendo se o número é par ou ímpar até que 
//um número negativo seja digitado pelo usuário. (Considere o número zero como sendo par)

#include<stdio.h>

int main(){
 int n=0;

 do{
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
     if(n%2 == 0){
        printf("O numero eh par!\n");
     }else{
        printf("O numero eh impar\n");}
 }while (n>0);

 return 0;
}
