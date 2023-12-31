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
