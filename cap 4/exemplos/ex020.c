/*
Exemplo 20: Faça um programa que receba:
■■ O código de um produto comprado, supondo que a digitação do código do produto seja sempre
válida, isto é, um número inteiro entre 1 e 10.
■■ O peso do produto em quilos.
■■ O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 1 e 3.
Tabelas:
Codigo de Origem        Imposto
        1                  0%
        2                  15%
        3                  25%

Codigo do Produto       Preço/Grama
        1 a 4               10
        5 a 7               25
        8 a 10              35

alcule e mostre:
■■ o peso do produto convertido em gramas;
■■ o preço total do produto comprado;
■■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende
do país de origem;
■■ o valor total, preço total do produto mais imposto.
*/
#include <stdio.h>

int main()
{
    int cod_prod, cod_pais;
    float peso_quilos, peso_gramas, pre_total, imposto, valor_total, pre_gramas;

    printf("Codigo do Produto: ");
    scanf("%d", &cod_prod);

    printf("Codigo do país: ");
    scanf("%d", &cod_pais);

    printf("Peso em KG: ");
    scanf("%f", &peso_quilos);

    peso_gramas = peso_quilos * 1000;
    printf("Gramas: %.2f\n", peso_gramas);

  // Determinação do preço por grama com base no código do produto    
    if (cod_prod >= 1 && cod_prod <= 4)
    {
        pre_gramas = 10;
    }
    else if (cod_prod >= 5 && cod_prod <= 7)
    {
        pre_gramas = 25;
    }
    else if (cod_prod >= 8 && cod_prod <= 10)
    {
        pre_gramas = 35;
    }

    pre_total = peso_gramas*pre_gramas;

    printf("Preço: R$%.2f\n", pre_total);

     // Cálculo do imposto com base no código do país
    if (cod_pais == 1)
    {
        imposto = 0;
    }
    else if (cod_pais == 2)
    {
        imposto = pre_total * 0.15;
    }
    else if (cod_pais == 3)
    {
        imposto = pre_total * 0.25;
    }

    printf("Imposto R$%.2f\n", imposto);

    valor_total = pre_total + imposto;

    printf("Valor total: R$%.2f\n", valor_total);

    return 0;
}