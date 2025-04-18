/**
Questão 11: Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
SALÁRIO                         PERCENTUAL DE AUMENTO
Até R$ 300,00                         15%
R$ 300,00 < x < R$ 600,00             10%
R$ 600,00 <= x <= R$ 900,00           5%
Acima de R$ 900,00                    0% 
 */
#include <stdio.h>

int main ()
{
    float sal, amt, sal_novo;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &sal);

    if (sal > 900)
    {
        printf("Voce nao tem direito a um aumento");
    }
    else if (sal >= 600)
    {
        amt = sal * 0.05;
        sal_novo = sal + amt;
    }
    else if (sal > 300)
    {
        amt = sal * 0.1;
        sal_novo = sal + amt;
    }
    else
    {
        amt = sal * 0.15;
        sal_novo = sal + amt;
    }
    printf("Seu novo salario eh %.2f e o valor do aumento eh %.2f", sal_novo, amt);

    return 0;
}