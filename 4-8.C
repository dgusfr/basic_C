//Desenvolva um programa no qual o usuário entra com um número inteiro (de 0 a 255) e seja impresso na 
//tela o caractere correspondente de acordo com a Tabela ASCII. Observação: Repare que alguns caracteres 
//da Tabela ASCII não são “imprimíveis” na tela. 

#include <stdio.h>
int main()
{
    char ch;
    int res = 0;
    printf("\nDigite um caracter: ");
    scanf("%c",&ch);
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);
}
