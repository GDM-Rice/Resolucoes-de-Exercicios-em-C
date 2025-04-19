// Aqui está a fomra que eu achei melhor
#include <stdio.h>

int main()
{
    float A, B, C, maior, menor, meio;
    int I;

    printf("Digite:\n 1) Para colocar os 3 numero em ordem crescente\n 2)Para colocar os 3 numero em ordem decrescente\n 3) Para colocar o maior no meio entre os outros numeros\nQual sua escolha: ");
    scanf("%d", &I);
    printf("Digite o primeiro  numero: ");
    scanf("%f", &A);
    printf("Digite o segundo  numero: ");
    scanf("%f", &B);
    printf("Digite o terceiro  numero: ");
    scanf("%f", &C);

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

    if (I == 1)
    {
        printf("Voce escolheu os 3 numero em ordem crescente\n");
        printf("%.2f, %.2f, %.2f", menor, meio, maior);
    }

    else if (I == 2)
    {
        printf("Voce escolheu os 3 numero em ordem decrescente\n");
        printf("%.2f, %.2f, %.2f", maior, meio, menor);
    }

    else if (I == 3)
    {
        printf("Voce escolheu o maior no meio\n");
        printf("%.2f, %.2f, %.2f\n", menor, maior, meio);
    }

    else
    {
        printf("Digite um valor valido para I");
    }

    return 0;
}