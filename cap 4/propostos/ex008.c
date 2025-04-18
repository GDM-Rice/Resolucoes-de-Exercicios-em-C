/**
Questão 8: Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
Salário                 Percentual de Aumtnto
Até R$ 300,00                    35%
Acima de R$ 300,00               15%

 */
#include <stdio.h>

int main()
{
    float sal, amt, salario_amt;
    printf("Informe seu salario: ");
    scanf("%f", &sal);
    printf("Seu salario eh: %.2f\n", sal);

    if (sal > 300)
    {
        amt = sal * 0.15;
        salario_amt = sal + amt;
    }
    else
    {
        amt = sal * 0.35;
        salario_amt = sal + amt;
    }
    printf("O seu novo salario sera de R$%.2f\n", salario_amt);

    return 0;
}