/**
Questão 13: Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
TABELA 1 — Percentual de Aumento
Preço                           %
Até R$ 50,00                    5
Entre R$ 50,00 e R$ 100,00      10
Acima de R$ 100,00              15

TABELA 2 — Classificações
Novo Preço                                      Classificação
Até R$ 80,00                                    Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)          Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)         Caro
Maior que R$ 200,00                             Muito caro
 */
#include <stdio.h>

int main()
{
    float preco, amt, preco_novo;
    printf("Digite o preco do produto para realizar o reajuste: ");
    scanf("%f", &preco);

    if (preco > 100)
    {
        amt = preco * 0.15;
        preco_novo = preco + amt;
        printf("O produto tera um aumento de 15 por cento. Assim seu preco sera %.2f\n", preco_novo);

        if (preco_novo > 200)
        {
            printf("O produto esta na classificacao: Muito Caro\n");
        }
        else if (preco_novo > 120)
        {
            printf("O produto esta na classificacao: Caro\n");
        }
        else
        {
            printf("O produto esta na classificacao: Normal\n");
        }
    }
    else if (preco >= 50)
    {
        amt = preco * 0.1;
        preco_novo = preco + amt;
        printf("O produto tera um aumento de 10 por cento. Assim seu preco sera %.2f\n", preco_novo);

        if (preco_novo >= 80)
        {
            printf("O produto esta na classificacao: Normal\n");
        }
        else
        {
            printf("O produto esta na classificacao: Barato\n");
        }
    }
    else
    {
        amt = preco * 0.05;
        preco_novo = preco + amt;
        printf("O produto tera um aumento de 5 por cento. Assim seu preco sera %.2f\n", preco_novo);
        printf("O produto esta na classificacao: Barato\n");
    }

    return 0;
}