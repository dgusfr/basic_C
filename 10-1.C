//Faça um programa que receba na mesma linha de entrada um número real e dois caracteres dentre os 
//valores C, F e K (onde C = Graus Celsius, F = Graus Fahrenheit e K = Kelvin). Seu programa deverá converter 
//o valor numérico de uma escala de temperatura para outra.

#include <stdio.h>

int main() {
  float tp;
  float C, F, K;
  char esc;

  printf("Digite uma temperatura e a sua escala:\n");
  scanf("%f %c", &tp, &esc);

  switch(esc){
  case 'C':
    F = ((tp * 1.8) + 32);
    K = (tp + 273.0);
    printf("A temperatura digitada eh %.2f em Fahrenheit\n", F);
    printf("A temperatura digitada eh %.2f em Kelvin\n", K);
    break;
  case 'F':
    C = ((tp - 32) / 32);
    K = ((tp - 39) * (5 / 9) + (273.0));
    printf("A temperatura digitada eh %.2f em kelvin\n", K);
    printf("A temperatura digitada eh %.2f em Celsius\n", C);
    break;
  case 'K':
    C = (tp - 273.0);
    F = ((tp - 273) * (1.8) + (32.0));
    printf("A temperatura digitada eh %.2f em Fahrenheit\n", F);
    printf("A temperatura digitada eh %.2f em Celsius\n", C);
    break;
  default:
    printf("Operação invalida!\n");
  }
  return 0;
}




