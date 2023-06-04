//um Triângulo de Floyd é um triângulo de números consecutivos de modo que na primeira linha há um 
//número, na segunda dois, na terceira três, e assim consecutivamente. O exemplo abaixo mostra um 
//triângulo de Floyd com 6 linhas.

#include <stdio.h>
int main()
{
    int n, i, j, number= 1;

    printf("Entre com o numero de linhas:");
    scanf("%d",&n);
      printf("\n");
    for(i=1; i <= n; i++){
        for(j=1; j <= i; ++j){
            printf("%d ", number);
            ++number;
        }
      printf("\n");
    }

    return 0;
}
