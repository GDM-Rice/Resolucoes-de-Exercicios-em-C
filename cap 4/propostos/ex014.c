/**
Questão 14: Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
FAixA sALAriAL           % dE AuMENTo
Até R$ 300,00                  50%
R$ 300,00 <= R$ 500,00         40%
R$ 500,00 <= R$ 700,00         30%
R$ 700,00 <= R$ 800,00         20%
R$ 800,00 <= R$ 1.000,00       10%
Acima de R$ 1.000,00           5%
 */
#include <stdio.h>

int main()
{
    float sal, amt, novo_salario;
    printf("Digite seu salario: ");
    scanf("%f", &sal);
    
    if (sal > 1000)
    {
        amt = sal*0.05;
    }
    else if (sal > 800)
    {
        amt = sal*0.1;
    }
    else if (sal > 700)
    {
        amt = sal*0.2;
    }
    else if (sal > 500)
    {
        amt = sal*0.3;
    }
    else if (sal > 300)
    {
        amt = sal*0.4;
    }
    else
    {
        amt = sal*0.5;
    }
    novo_salario = sal + amt;

    printf("Seu novo salario eh de R$%.2f, e o aumento foi de R$%.2f", novo_salario, amt);

    return 0;
}