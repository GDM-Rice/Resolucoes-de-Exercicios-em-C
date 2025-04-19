/*
Exemplo 16: Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério:
Venda media mensal              Preço atual                 % de Aumento/Diminuição
< 500                          <R$30,00                                 +10%
>= 500 e < 1.200            >= R$ 30,00 e < R$ 80,00                    +15%
>= 1.200                     >= R$ 80,00                                -20%
*/
#include <stdio.h>

int main()
{
    float pre, venda, novo_pre;

    printf("Preço: ");
    scanf("%f", &pre);

    printf("Venda: ");
    scanf("%f", &venda);

    if (venda < 500 || pre < 30)
    {
        novo_pre = pre + (0.10 * pre); 
    }
    else if ((venda >= 500 && venda < 1200) || (pre >= 30 && pre < 80))
    {
        novo_pre = pre + (0.15 * pre); 
    }
    else if (venda >= 1200 || pre >= 80)
    {
        novo_pre = pre - (0.20 * pre); 
    }

    printf("Novo preço: R$%.2f\n", novo_pre);

    return 0;
}
