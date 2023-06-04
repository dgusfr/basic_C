//Desenvolva um programa no qual o usuário entra com dois ângulos, de acordo com o formato grau, 
//minuto e segundo (máscara de leitura de um ângulo: %dd%dm%ds) e seja impresso na tela o valor da 
//soma desses ângulos, também no formato grau, minuto e segundo.

#include <stdio.h>
int main(){
    int ang1, ang2;
    int d1, m1, s1;
    int d2, m2, s2;
    int soma_d=0, soma_m=0, soma_s=0;

    printf("Digite o grau, minuto e segundo do primeiro angulo:\n");
    scanf("%d %d %d", &d1, &m1, &s1);

    printf("Digite o grau, minuto e segundo do segundo angulo:\n");
    scanf("%d %d %d", &d2, &m2, &s2);

    soma_s = s1 + s2;
        if(soma_s >= 60){
        soma_s = (soma_s - 60);
        soma_m = soma_m + 1;
        }

    soma_m = soma_m + (m1 + m2);
        if(soma_m >= 60){
        soma_m = (soma_m - 60);
        soma_d = soma_d + 1;
        }

    soma_d = soma_d + (d1 + d2);


printf("A soma dos angulos 1 e 2 eh:\n");
printf("%dd%dm%ds", soma_d, soma_m, soma_s);
}
