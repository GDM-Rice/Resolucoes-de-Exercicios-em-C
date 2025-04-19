/**
Exemplo 6: Faça um programa que receba um número inteiro e verifique se é par ou ímpar.
*/
#include <stdio.h>

int main()
{
    int n1, r;
    printf("Digite um número: ");
    scanf("%d", &n1);

    r =  n1 % 2;

    if (r == 0)
    {
        printf("O número é par");
    }
    else
    {
        printf("O número é ímpar");
    }
    return 0;
}