/**
Exemplo 8: Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
Menu de opções:
1. Somar dois números.
2. Raiz quadrada de um número.
Digite a opção desejada:
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int op;
    float n1, n2, soma, raiz;

    printf("Menu\n");
    printf("1- Somar dois números\n");
    printf("2- Raiz quadrada de um número\n");
    printf("Digite sua opção: ");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("Digite um valor para o primeiro número: ");
        scanf("%f", &n1);

        printf("Digite um valor para o segundo número: ");
        scanf("%f", &n2);

        soma = n1 + n2;
        printf("A soma de %.2f e %.2f é %.2f", n1, n2, soma);
    }
    else if (op == 2)
    {
        printf("Digite um valor: ");
        scanf("%f", &n1);

        raiz = sqrt(n1);

        printf("A raiz quadrada de %.2f é %.2f", n1, raiz);
    }
    else
    {
        printf("Opção inválida!");
    }

    return 0;
}