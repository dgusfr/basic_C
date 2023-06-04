//Substituição dos "ifs" por condições ternárias

#include <stdio.h>

int main() {
 float num1, num2;
 char equ;
 printf( "Digite o 1o numero: " );
 scanf( "%f", &num1 );
 printf( "Digite o 2o numero: " );
 scanf( "%f", &num2 );

printf( (num1 == num2) ?  "Numeros Iguais\n" : (num1 > num2) ? "Primeiro numero maior\n" : "Segundo numero maior\n");
printf(( num1 == ( (int) num1 ) ) ? "Primeiro eh inteiro\n" : "Primeiro nao eh inteiro\n");
printf(( num2 == ( (int) num2 ) ) ? "Segundo eh inteiro\n" : "Segundo nao eh inteiro\n");

 return 0;
}
