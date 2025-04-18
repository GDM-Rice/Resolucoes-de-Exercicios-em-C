/**
Questão 22: Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.
IDADE                                        PESO
                    Até 60          Entre 60 e 90 (inclusive)           Acima de 90
Menores que 20      9                       8                               7
De 20 a 50          6                       5                               4
Maiores que 50      3                       2                               1


 */
#include <stdio.h>

int main()
{
    int idade;
    float peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (idade > 50)
    {
        printf("Sua idade %d\n", idade);
        if (peso > 90)
        {
            printf("Voce esta no grupo de risco numero 1");
        }
        else if (peso >= 60)
        {
            printf("Voce esta no grupo de risco numero 2");
        }
        else
        {
            printf("Voce esta no grupo de risco numero 3");
        }
    }
    else if (idade >= 20)
    {
        printf("Sua idade %d\n", idade);
        if (peso > 90)
        {
            printf("Voce esta no grupo de risco numero 4");
        }
        else if (peso >= 60)
        {
            printf("Voce esta no grupo de risco numero 5");
        }
        else
        {
            printf("Voce esta no grupo de risco numero 6");
        }
    }
    else
    {
        printf("Sua idade %d\n", idade);
        if (peso > 90)
        {
            printf("Voce esta no grupo de risco numero 7");
        }
        else if (peso >= 60)
        {
            printf("Voce esta no grupo de risco numero 8");
        }
        else
        {
            printf("Voce esta no grupo de risco numero 9");
        }
    }

    return 0;
}