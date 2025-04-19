/**
Exemplo 7: Faça um programa que receba quatro valores: I, A, B e C.
Desses valores, I é inteiro e positivo, A, B e C são reais.
Escreva os números A, B e C obedecendo à seguinte lógica:
- Se I = 1: mostre os números em ordem crescente.
- Se I = 2: mostre os números em ordem decrescente.
- Se I = 3: mostre o maior número no meio.
Suponha que o valor digitado para I seja sempre válido (1, 2 ou 3) e que A, B e C sejam diferentes entre si.
*/
// Tem uma forma melhor de fazer irei criar um outro arquivo(ex007_1.c) para mostar a forma que estou falando.
#include <stdio.h>

int main()
{
    int I;
    float A, B, C;

    printf("Digite um valor para A: ");
    scanf("%f", &A);

    printf("Digite um valor para B: ");
    scanf("%f", &B);

    printf("Digite um valor para C: ");
    scanf("%f", &C);

    printf("Digite um valor para I (1, 2 ou 3): ");
    scanf("%d", &I);

    if (I == 1)
    {
        if (A < B && A < C)
        {
            if (B < C)
            {
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", A, B, C);
            }
            else
            {
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", A, C, B);
            }
        }
        else if (B < A && B < C)
        {
            if (A < C)
            {
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", B, A, C);
            }
            else
            {
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", B, C, A);
            }
        }
        else
        {
            if (A < B)
            {
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", C, A, B);
            }
            else
            {
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", C, B, A);
            }
        }
    }
    else if (I == 2)
    {
        if (A > B && A > C)
        {
            if (B > C)
            {
                printf("A ordem decrescente dos números é: %.2f %.2f %.2f", A, B, C);
            }
            else
            {
                printf("A ordem decrescente dos números é: %.2f %.2f %.2f", A, C, B);
            }
        }
        else if (B > A && B > C)
        {
            if (A > C)
            {
                printf("A ordem decrescente dos números é: %.2f %.2f %.2f", B, A, C);
            }
            else
            {
                printf("A ordem decrescente dos números é: %.2f %.2f %.2f", B, C, A);
            }
        }
        else
        {
            if (A > B)
            {
                printf("A ordem decrescente dos números é: %.2f %.2f %.2f", C, A, B);
            }
            else
            {
                printf("A ordem decrescente dos números é: %.2f %.2f %.2f", C, B, A);
            }
        }
    }
    else
    {
        if (A > B && A > C)
        {
            printf("A ordem desejada é: %.2f %.2f %.2f", B, C, A);
        }
        else if (B > A && B > C)
        {
            printf("A ordem desejada é: %.2f %.2f %.2f", A, B, C);
        }
        else
        {
            printf("A ordem desejada é: %.2f %.2f %.2f", A, C, B);
        }
    }
    return 0;
}