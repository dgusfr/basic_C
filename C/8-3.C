#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0;
    int v1=0, v2=0, r1=0, r2=0;
    int n10_verif=0, n11_verif=0;

    printf("\n Verificar se CPF eh valido \n");
    printf("Digite os 9 primeiros numeros do CPF (espacados por ponto):\n");
    scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);

    //Calculo do n10
    v1 = (( n1 * 10 ) + ( n2 * 9 ) + ( n3 * 8 ) + ( n4 * 7 ) + ( n5 * 6 ) +
    ( n6 * 5 ) + ( n7 * 4 ) + ( n8 * 3 ) + ( n9 * 2 ));
    printf("v1 = %d\n",v1);
    r1 = v1 % 11;
    printf("r1 = %d\n",r1);
        if(r1 < 2){
        n10_verif == 0;
        }else{
        n10_verif = 11 - r1; }

    //Calculo do n11
    v2 = (( n1 * 11 ) + ( n2 * 10 ) + ( n3 * 9 ) + ( n4 * 8 ) + ( n5 * 7 ) +
    ( n6 * 6 ) + ( n7 * 5 ) + ( n8 * 4 ) + ( n9 * 3 ) + ( n10_verif * 2 ));
    printf("v2 = %d\n",v2);
    r2 = v2 % 11;
    printf("r2 = %d\n",r2);
        if(r2 < 2){
        n11_verif == 0;
        }else{
        n11_verif = 11 - r2;}

        printf("O CPF eh valido!\n");
        printf("Os digitos verificadores sao: %d e %d", n10_verif, n11_verif);
    return 0;
}
