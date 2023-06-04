// Escreva um programa no qual o usuário digita uma data e seja impresso na tela o dia, mês e ano 
//separadamente (Exemplo: o programa pede para o usuário digitar uma data; o usuário digita 3/8/2003; o 
//programa imprime na tela: dia: 3 mês: 8 ano: 2003). 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2;
    int dia=0, mes=0, ano=0;
    printf("Digite uma data (separada por barra)!\n");
    scanf("%d%c%d%c%d", &dia, &c1, &mes, &c2, &ano);
    printf("dia: %d mes: %d ano: %d", dia, mes, ano);
    return 0;
}

