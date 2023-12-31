#include <stdio.h>

int main() {
    int n, i, soma=0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    printf("0");
 for (i = 1; i <= n; i++){
        soma += i;}
    for (i = 1; i <= n; i++){
        printf("+%d", i);}
        printf(" = %d", soma);

return 0;
}
