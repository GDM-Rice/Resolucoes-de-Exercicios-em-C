/**
Questão 12: Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.
TABELA dAs grATiFiCAçõEs
SALÁRIO                 GRATIFICAÇÃO
Até R$ 350,00           R$ 100,00
R$ 350,00 R$ 600,00     R$ 75,00
R$ 600,00 R$ 900,00     R$ 50,00
Acima de R$ 900,00      R$ 35,00
 */
#include <stdio.h>

int main ()
{
    float sal, receber, imposto;
    printf("Digite seu salario: ");
    scanf("%f", &sal);

    imposto = sal*0.07;

    if (sal > 900)
    {
        receber = sal - imposto + 35;
    }
    else if (sal >= 600)
    {
        receber = sal - imposto + 50;
    }
    else if (sal > 350)
    {
        receber = sal - imposto + 75;
    }
    else
    {
        receber = sal - imposto + 100;
    }
    printf("O valor a receber eh R$%.2f", receber);

    return 0;
}

