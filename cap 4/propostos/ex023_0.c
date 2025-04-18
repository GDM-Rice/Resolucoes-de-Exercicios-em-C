/**
Questão 23: Faça um programa que receba:
■■ o código do produto comprado; e
■■ a quantidade comprada do produto.
alcule e mostre:
■■ o preço unitário do produto comprado, seguindo a Tabela I;
■■ o preço total da nota;
■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■■ o preço final da nota depois do desconto. 
Codigo preco                
1 a 10 R$ 10,00
11 a 20 R$ 15,00
21 a 30 R$ 20,00
31 a 40 R$ 30,00

preço total                     % desconto
Até R$ 250,00                      5%
Entre R$ 250,00 e R$ 500,00        10%
Acima de R$ 500,00                 15%
**/

#include <stdio.h>

int main ()
{
    float preco, desc, final;
    int codigo, qnt;

    printf("Digite o codigo do produto que deseja comprar: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qnt);

    if (codigo > 30 && codigo <= 40)
    {
        preco = 30*qnt;
        printf("O preco do produto eh R$30\n");
        printf("O total dos produtos sera R$%.2f\n", preco);
        
        if (preco > 500)
        {
            desc = preco*0.15;
            final = preco - desc;
            printf("Por a quantia ser maior que R$500 voce tem direito a 15 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else if (preco >= 250)
        {
            desc = preco*0.1;
            final = preco - desc;
            printf("Por a quantia ser maior que R$250 voce tem direito a 10 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else
        {
            desc = preco*0.05;
            final = preco - desc;
            printf("Voce tem direito a 5 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }

    }
    else if (codigo > 20 && codigo <= 30)
    {
        preco = 20*qnt;
        printf("O preco do produto eh R$20\n");
        printf("O total dos produtos sera R$%.2f\n", preco);
        
        if (preco > 500)
        {
            desc = preco*0.15;
            final = preco - desc;
            printf("Por a quantia ser maior que R$500 voce tem direito a 15 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else if (preco >= 250)
        {
            desc = preco*0.1;
            final = preco - desc;
            printf("Por a quantia ser maior que R$250 voce tem direito a 10 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else
        {
            desc = preco*0.05;
            final = preco - desc;
            printf("Voce tem direito a 5 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
    }
    else if (codigo > 10 && codigo <= 20)
    { 
        preco = 15*qnt;
        printf("O preco do produto eh R$15\n");
        printf("O total dos produtos sera R$%.2f\n", preco);
        
        if (preco > 500)
        {
            desc = preco*0.15;
            final = preco - desc;
            printf("Por a quantia ser maior que R$500 voce tem direito a 15 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else if (preco >= 250)
        {
            desc = preco*0.1;
            final = preco - desc;
            printf("Por a quantia ser maior que R$250 voce tem direito a 10 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else
        {
            desc = preco*0.05;
            final = preco - desc;
            printf("Voce tem direito a 5 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
    }
        else if (codigo > 0 && codigo <= 10)
    { 
        preco = 10*qnt;
        printf("O preco do produto eh R$10\n");
        printf("O total dos produtos sera R$%.2f\n", preco);
        
        if (preco > 500)
        {
            desc = preco*0.15;
            final = preco - desc;
            printf("Por a quantia ser maior que R$500 voce tem direito a 15 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else if (preco >= 250)
        {
            desc = preco*0.1;
            final = preco - desc;
            printf("Por a quantia ser maior que R$250 voce tem direito a 10 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
        else
        {
            desc = preco*0.05;
            final = preco - desc;
            printf("Voce tem direito a 5 por cento de desconto.\nSendo R$%.2f de desconto!\n", desc);
            printf("O total a ser pago sera de R$%.2f", final);
        }
    }
    else
    {
        printf("Digite um valor valido para o codigo do produto!");
    }

    return 0;
}