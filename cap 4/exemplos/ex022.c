/*
Exemplos 22: Faça um programa que receba o salário base e o tempo de serviço de um funcionário. alcule e mostre:
■■ O imposto, conforme a tabela a seguir.
Salario                                                           %
< R$ 200,00                                                       0%
Entre R$ 200,00 (inclusive) e R$ 450,00 (inclusive)               3%
Entre R$ 450,00 e R$ 700,00                                       8%
>= R$ 700,00                                                      12%

A gratificação, de acordo com a tabela a seguir.
Salario Base                                Tempo                   Gratificação
Superior a R$ 500,00                        Até 3 anos              20
                                            Mais de 3 anos          30
Até R$ 500,00                               Até 3 anos              23
                                            Entre 3 e 6 anos        35
                                            De 6 anos para cima     33

■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
■■ A categoria, que está na tabela a seguir.
Salario liq                 Clasificação
Até R$ 350,00                     A
Entre R$ 350,00 e R$ 600,00       B
De R$ 600,00 para cima            C
*/
#include <stdio.h>

int main()
{
    int tempo;
    float sal_base, imposto, grat, sal_liq;

    printf("Digite o seu salario base: ");
    scanf("%f", &sal_base);
    printf("Digite o tempo em anos: ");
    scanf("%d", &tempo);

    if (sal_base < 200)
    {
        imposto = 0;
    }
    else if (sal_base <= 450)
    {
        imposto = 0.03 * sal_base;
    }
    else if (sal_base < 700)
    {
        imposto = 0.08 * sal_base;
    }
    else
    {
        imposto = 0.12 * sal_base;
    }
    printf("Imposto R$%.2f\n", imposto);

    if (sal_base > 500)
    {
        if (tempo <= 3)
        {
            grat = 20;
        }
        else
        {
            grat = 30;
        }
    }
    else
    {
        if (tempo <= 3)
        {
            grat = 23;
        }
        else if (tempo <= 6)
        {
            grat = 35;
        }
        else
        {
            grat = 33;
        }
    }
    printf("Gratificação R$%.2f\n", grat);

    sal_liq = sal_base - imposto + grat;
    printf("Salario liquido R$%.2f\n", sal_liq);

    if (sal_liq <= 350)
    {
        printf("Classificação: A\n");
    }
    else if (sal_liq < 600)
    {
        printf("Classificação: B\n");
    }
    else
    {
        printf("Classificação: C\n");
    }

    return 0;
}