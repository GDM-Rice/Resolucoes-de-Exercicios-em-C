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
// versão menos trabalhosa e mais otimizada!
#include <stdio.h>

int main ()
{
    float preco_und = 0, preco, desc, final;
    int codigo, qnt;

    printf("Digite o codigo do produto que deseja comprar: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qnt);

    if(codigo >= 1 && codigo <=10)
    {
        preco_und = 10;
    }
    else if(codigo >= 11 && codigo <= 20)
    {
        preco_und = 15;
    }
    else if(codigo >= 21 && codigo <= 30)
    {
        preco_und = 20;
    }
    else if(codigo >= 31 && codigo <= 40)
    {
        preco_und = 30;
    }
    else
    {
        printf("Digite um valor valido para o codgio");
        
        return 1;
    }

    preco = preco_und * qnt;

    printf("O preco total eh R$%.2f!\n", preco);

    if(preco > 500)
    {
        desc = preco*0.15;
        final = preco - desc;
        printf("Porem voce tem direito a 15 por cento de desconto!\nAssim tendo R$%.2f de disconto.\n", desc);
        printf("Voce tera que pagar R$%.2f!", final);
    }
    else if (preco >= 250)
    {
        desc = preco*0.1;
        final = preco - desc;
        printf("Porem voce tem direito a 10 por cento de desconto!\nAssim tendo R$%.2f de disconto.\n", desc);
        printf("Voce tera que pagar R$%.2f!", final);
    }
    else
    {
        desc = preco*0.05;
        final = preco - desc;
        printf("Porem voce tem direito a 5 por cento de desconto!\nAssim tendo R$%.2f de disconto.\n", desc);
        printf("Voce tera que pagar R$%.2f!", final);
    }

    return 0;
}