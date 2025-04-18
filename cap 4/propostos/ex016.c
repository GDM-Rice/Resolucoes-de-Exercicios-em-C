/**
Questão 16: Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.
PEço ATuAL                      % desconto
Até R$ 30,00                    Sem desconto
Entre R$ 30,00 e R$ 100,00      10%
Acima de R$ 100,00              15%
 */
#include <stdio.h>

int main ()
{
    float preco, desc, final;
    printf("Digite o preco do produto que deseja comprar: ");
    scanf("%f", &preco);

    if ( preco > 100)
    {
        desc = preco * 0.15;
        final = preco - desc;
        printf("O produto tem disconto de 15 por cento. Logo o valor a pagar sera de R$%.2f e o valor do desconto eh %.2f", final, desc);
    }
    else if (preco > 30)
    {
        desc = preco * 0.1;
        final = preco - desc;
        printf("O produto tem disconto de 10 por cento. Logo o valor a pagar sera de R$%.2f e o valor do desconto eh %.2f", final, desc);
    }
    else
    {
        final = preco;
        printf("O produto nao tem disconto. Logo o valor a pagar sera de R$%.2f", final);
    }

    return 0;
}