#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int V=0;
    float K, F, C;
    printf("Digite a temperaturana escala Celsius:\n");
    scanf("%f", &C);
        F = ((C * 1.8) + 32);
        K = (C + (273.15));
        V = (331.5 * (sqrt(1 + (C/273.15))));

        printf("A temperatura digitada em celsius eh %.2f em Farenhait\n", F);
        printf("A temperatura digitada em celsius eh %.2f em kelvin\n", K);
        printf("A velocidade do som na temperatura digitada eh %d (m/s)\n", V);

   return 0;
}
