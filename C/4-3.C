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

