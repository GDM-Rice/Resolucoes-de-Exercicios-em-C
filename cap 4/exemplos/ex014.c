/**
Exemplo 14: Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
acrescido de bonificação e de auxílio escola.

Bonificação
Até R$ 500,00 -> 5% do salário
Entre R$ 500,00 e R$ 1.200,00 -> 12% do salário
Acima de R$ 1.200,00 -> Sem bonificação

Auxilio escola
Até R$ 600,00 -> R$ 150,00
Acima de R$ 600,00 -> R$ 100,00
 */
#include <stdio.h>

int main()
{
    float sal, novo_sal, boni, aux;

    printf("Digite o salario: ");
    scanf("%f", &sal);

    if (sal <= 500)
    {
        boni = sal * 0.05;
    }
    else if (sal <= 1200)
    {
        boni = sal * 0.12;
    }
    else
    {
        boni = 0;
    }

    if (sal <= 600)
    {
        aux = 150;
    }
    else
    {
        aux = 100;
    }
    novo_sal = sal + boni + aux;
    
    printf("Novo salario é de R$%.2f", novo_sal);

    return 0;
}