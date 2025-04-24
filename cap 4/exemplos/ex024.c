/**
Exemplo 24: Faça um programa que receba o preço, o tipo (A — alimentação; L — limpeza; e V — vestuário) e a
refrigeração (S — produto que necessita de refrigeração; e N — produto que não necessita de refrigeração) de um produto. Suponha que haverá apenas a digitação de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. Calcule e mostre:
■ O valor adicional, de acordo com a tabela a seguir:
refrigeração     Tipo            Preço              Valor Adicional
                A               < R$ 15,00          R$ 2,00
                                >= R$ 15,00         R$ 5,00
N               L               < R$ 10,00          R$ 1,50
                                >= R$ 10,00         R$ 2,50
                V               < R$ 30,00          R$ 3,00
                                >= R$ 30,00         R$ 2,50
                A               -                   R$ 8,00
S               L               -                   R$ 0,00
                V               -                   R$ 0,00

O valor do imposto, de acordo com a regra a seguir.
< R$ 25,00 -> 5%
>= R$ 25,00 -> 8%

■ O preço de custo, ou seja, preço mais imposto.
■■ O desconto, de acordo com a regra a seguir.
O produto que não preencher nenhum dos requisitos a seguir terá desconto de 3%, caso contrário,
0 (zero)
Os requisitos são:
Tipo: A
Refrigeração: S

■■ O novo preço, ou seja, preço de custo mais adicional menos desconto.
■■ A classificação, de acordo com a regra a seguir. 
Novo Preço                           Classificação
< = R$ 50,00                         Barato
Entre R$ 50,00 e R$ 100,00           Normal
>= R$ 100,00                         Caro
*/
#include <stdio.h>

int main ()
{
    float pre, valor_adic, pre_custo, imposto, desconto, novo_pre;
    char refrig, tipo;

    printf("Digite o preco do produto: ");
    scanf("%f", &pre);

    printf("Digite o tipo do produto: ");
    scanf(" %c", &tipo);

    printf("Digite se o produto precisa de refigeracao(S/N): ");
    scanf(" %c", &refrig);

    if (refrig == 'N')
    {
        if (tipo == 'A')
        {
            if (pre < 15)
            {
                valor_adic = 2;
            }
            else
            {
                valor_adic = 5;
            }
        }
        else if (tipo == 'L')
        {
            if (pre < 10)
            {
                valor_adic = 1.5;
            }
            else
            {
                valor_adic = 2.5;
            }
        }
        else if (tipo == 'V')
        {
            if (pre < 30)
            {
                valor_adic = 3;
            }
            else
            {
                valor_adic = 2.5;
            }
        }
    }
    else if (refrig == 'S')
    {
        if (tipo == 'A')
        {
            valor_adic = 8;
        }
        else
        {
            valor_adic = 0;
        }
    }

    printf("Valor adicional de R$%.2f\n", valor_adic);

    if (pre < 25)
    {
        imposto = 0.05*pre;
    }
    else
    {
        imposto = 0.08*pre;
    }

    printf("Imposto de R$%.2f\n", imposto);

    pre_custo = pre + imposto;
    printf("Preco de custo de R$%.2f\n", pre_custo);

    if (tipo != 'A' && refrig != 'S')
    {
        desconto = 0.03*pre_custo;
    }
    else
    {
        desconto = 0;
    }

    printf("Desconto de R$%.2f\n", desconto);

    novo_pre = pre_custo + valor_adic - desconto;

    printf("Novo preco de R$%.2f\n", novo_pre);

    if (novo_pre <= 50)
    {
        printf("Classificacao Barato\n");
    }
    else if (novo_pre < 100)
    {
        printf("Classificacao Normal\n");
    }
    else
    {
        printf("Classificacao Caro\n");
    }

    return 0;
}