/**
Exemplo 4: Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes.
*/
#include <stdio.h>

int main()
{
    float n1, n2, n3;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

    // Existe uma forma de fazer isso de forma mais facil, porém eu decidi seguir o algoritmo descrito no livro.
    // Atualização: Eu fiz de outra forma, sem ser igual ao algoritmo do livro, no final do codigo em um comentario.

    if (n1 < n2 && n1 < n3)
    {
        if (n2 < n3)
        {
            printf("A ordem crescente é: %.2f, %.2f, %.2f.", n1, n2, n3);
        }
        else
        {
            printf("A ordem crescente é: %.2f, %.2f, %.2f.", n1, n3, n2);
        }
    }
    else if (n2 < n1 && n2 < n3)
    {
        if (n1 < n3)
        {
            printf("A ordem crescente é: %.2f, %.2f, %.2f.", n2, n1, n3);
        }
        else
        {
            printf("A ordem crescente é: %.2f, %.2f, %.2f.", n2, n3, n1);
        }
    }
    else
    {
        if (n1 < n2)
        {
            printf("A ordem crescente é: %.2f, %.2f, %.2f.", n3, n1, n2);
        }
        else
        {
            printf("A ordem crescente é: %.2f, %.2f, %.2f.", n3, n2, n1);
        }
    }
    return 0;
}
/**
    maior = A;
    if (maior < B)
    {
        maior = B;
    }
    if (maior < C)
    {
        maior = C;
    }

    menor = A;
    if (menor > B)
    {
        menor = B;
    }
    if (menor > C)
    {
        menor = C;
    }

    if (A != maior && A != menor)
    {
        meio = A;
    }

    if (B != maior && B != menor)
    {
        meio = B;
    }

    if (C != maior && C != menor)
    {
        meio = C;
    }

    printf("%.2f, %.2f, %.2f", menor, meio, maior);
 */