/**
Questão 21: Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
Codigo de origem | Região
1                   Sul
2                   Norte
3                   Leste
4                   Oeste
5 ou 6              Nordeste
7 ou 8 ou 9         Sudeste
10 a 20             Centro-oeste
21 a 30             Nordeste
 */
#include <stdio.h>

int main ()
{
    float preco;
    int codigo_origem;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo_origem);

    if ( codigo_origem > 20 && codigo_origem <= 30)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Nordeste", preco);
    }
    else if (codigo_origem == 5 || codigo_origem == 6)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Nordeste", preco);
    }
    else if (codigo_origem >= 10 && codigo_origem <= 20)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Centro-oeste", preco);
    }
    else if (codigo_origem == 7 || codigo_origem == 8 || codigo_origem == 9)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Sudeste", preco);
    }
    else if (codigo_origem == 4)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Oeste", preco);
    }
    else if (codigo_origem == 3)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Leste", preco);
    }
    else if (codigo_origem == 2)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Norte", preco);
    }
    else if (codigo_origem == 1)
    {
        printf("O preco de seu produto eh R$%.2f.\nA procedencia dele eh: Sul", preco);
    }
    else
    {
        printf("Digite um valor valido para o codigo do produto");
    }
    
    return 0;
}