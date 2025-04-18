/**
Questão 9: Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
Saldo medio                                      Percentual
Acima de R$ 400,00                            30% do saldo médio
R$ 400,00 (inclusive) entre R$ 300,00         25% do saldo médio
R$ 300,00 (inclusive) entre R$ 200,00         20% do saldo médio
Até R$ 200,00                                 10% do saldo médio
 */
#include <stdio.h>

int main ()
{
    float saldo, amt;
    printf("O banco esta disponibilizando um credito especial de acordo com seu saldo medio do ano interior\nDigite o seu saldo medio: ");
    scanf("%f", &saldo);

    if (saldo > 400)
    {
        amt = saldo * 0.3;
    }
    else if (saldo > 300)
    {
        amt = saldo * 0.25;
    }
    else if (saldo > 200)
    {
        amt = saldo * 0.2;
    }
    else
    {
        amt = saldo * 0.1;
    }
    printf("Seu saldo eh de R$%.2f\nE o seu credito de R$%.2f", saldo, amt);

    return 0;
}