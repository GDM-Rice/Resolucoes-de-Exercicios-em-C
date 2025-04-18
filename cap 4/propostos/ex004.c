/**
Questão 4: Faça um programa que receba três números e mostre o maior.
 **/
#include <stdio.h>

int main ()
{
    float n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    printf("Aqui estao os 3 numero:\n%.2f\n%.2f\n%.2f\n", n1, n2, n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("O maior numero eh %.2f", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("O maior numero eh %.2f", n2);
    }
    else 
    {
        printf("O maior numero eh %.2f", n3);
    }

    return 0;
}