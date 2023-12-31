#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int vet[10];
    int cnt0=0, cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt5=0, cnt6=0, cnt7=0, cnt8=0, cnt9=0;

    for(i=0; i<10; i++){
       printf("Digite um numero de 0 ate 9:\n");
       scanf("%d", &vet[i]);
      if(vet[i] == 0){
        cnt0 = cnt0 + 1;}
      if(vet[i] == 1){
        cnt1 = cnt1 + 1;}
      if(vet[i] == 2){
        cnt2 = cnt2 + 1;}
      if(vet[i] == 3){
        cnt3 = cnt3 + 1;}
      if(vet[i] == 4){
        cnt4 = cnt4 + 1;}
      if(vet[i] == 5){
        cnt5 = cnt5 + 1;}
      if(vet[i] == 6){
        cnt6 = cnt6 + 1;}
      if(vet[i] == 7){
        cnt7 = cnt7 + 1;}
      if(vet[i] == 8){
        cnt8 = cnt8 + 1;}
      if(vet[i] == 9){
        cnt9 = cnt9 + 1;}
}

    if(cnt0 != 0){
    printf("O numero 0 foi digitado %d vezes\n", cnt0);}
    if(cnt1 != 0){
    printf("O numero 1 foi digitado %d vezes\n", cnt1);}
    if(cnt2 != 0){
    printf("O numero 2 foi digitado %d vezes\n", cnt2);}
    if(cnt3 != 0){
    printf("O numero 3 foi digitado %d vezes\n", cnt3);}
    if(cnt4 != 0){
    printf("O numero 4 foi digitado %d vezes\n", cnt4);}
    if(cnt5 != 0){
    printf("O numero 5 foi digitado %d vezes\n", cnt5);}
    if(cnt6 != 0){
    printf("O numero 6 foi digitado %d vezes\n", cnt6);}
    if(cnt7 != 0){
    printf("O numero 7 foi digitado %d vezes\n", cnt7);}
    if(cnt8 != 0){
    printf("O numero 8 foi digitado %d vezes\n", cnt8);}
    if(cnt9 != 0){
    printf("O numero 9 foi digitado %d vezes\n", cnt9);}

    return 0;
}
