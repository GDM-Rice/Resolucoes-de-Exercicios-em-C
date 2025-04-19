/*
Exemplo 21: Faça um programa que receba:
■■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do
estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
■■ o peso da carga do caminhão em toneladas;
■■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro
entre 10 e 40.
Tabelas:
Codigo do Estado            Imposto
        1                    35%
        2                    25%
        3                    15%
        4                    5%
        5                    0%

Codigo de carga             preço por kg
    10 a 20                     100
    21 a 30                     250
    31 a 40                     340

Calcule e mostre:
■■ o peso da carga do caminhão convertido em quilos;
■■ o preço da carga do caminhão;
■■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem;
■■ o valor total transportado pelo caminhão, preço da carga mais imposto.
*/
#include <stdio.h>

int main()
{
    int cod_est, cod_carga;
    float peso_toneladas, peso_quilos, pre_carga, imposto, valor_total;

    printf("Codigo de Estado: ");
    scanf("%d", &cod_est);
    printf("Codigo de carga: ");
    scanf("%d", &cod_carga);
    printf("Peso Toneladas: ");
    scanf("%f", &peso_toneladas);

    peso_quilos = peso_toneladas * 1000;

 // Determinação do preço da carga por quilo, de acordo com o código da carga
    printf("Peso KG %.2f\n", peso_quilos);

    if (cod_carga >= 10 && cod_carga <= 20)
    {
        pre_carga = 100 * peso_quilos;
    }
    else if (cod_carga >= 21 && cod_carga <= 30)
    {
        pre_carga = 250 * peso_quilos;
    }
    else if (cod_carga >= 31 && cod_carga <= 40)
    {
        pre_carga = 340 * peso_quilos;
    }

    printf("Preço da carga: R$%.2f\n", pre_carga);

 // Cálculo do imposto baseado no código do estado
    if (cod_est == 1)
    {
        imposto = 0.35 * pre_carga;
    }
    else if (cod_est == 2)
    {
        imposto = 0.25 * pre_carga;
    }
    else if (cod_est == 3)
    {
        imposto = 0.15 * pre_carga;
    }
    else if (cod_est == 4)
    {
        imposto = 0.05 * pre_carga;
    }
    else if (cod_est == 5)
    {
        imposto = 0;
    }
    printf("Impostos R$%.2f\n", imposto);

    valor_total = pre_carga + imposto;
    printf("Valor total: R$%.2f\n", valor_total);

    return 0;
}