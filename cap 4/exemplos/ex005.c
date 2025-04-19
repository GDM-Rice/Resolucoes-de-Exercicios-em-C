/**
Exemplo 5: Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha
que o usuário digitará quatro números diferentes.
*/
#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("Digite três números em ordem crescente: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite um número (fora de ordem): ");
    scanf("%f", &n4);

    if (n4 > n3)
    {
        printf("A ordem decrescente é: %.2f, %.2f, %.2f, %.2f", n4, n3, n2, n1);
    }
    else if (n4 > n2 && n4 < n3)
    {
        printf("A ordem decrescente é: %.2f, %.2f, %.2f, %.2f", n3, n4, n2, n1);
    }
    else if (n4 > n1 && n4 < n2)
    {
        printf("A ordem decrescente é: %.2f, %.2f, %.2f, %.2f", n3, n2, n4, n1);
    }
    else
    {
        printf("A ordem decrescente é: %.2f, %.2f, %.2f, %.2f", n3, n2, n1, n4);
    }
    return 0;
}