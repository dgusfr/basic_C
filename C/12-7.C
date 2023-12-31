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
