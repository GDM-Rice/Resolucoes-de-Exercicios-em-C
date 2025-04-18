/**
Questão 24: Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
alcule e mostre:
■■ O valor do aumento, usando as regras que se seguem.
preco <= 25
categoria 1 = aumento de 5%
categoria 2 = aumento de 8%
categoria 3 = aumento de 10%
preco > 25
categoria 1 = aumento de 12%
categoria 2 = aumento de 15%
categoria 3 = aumento de 18%
O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
O novo preço, ou seja, o preço mais aumento menos imposto.
■■ A classificação, usando as regras a seguir. 
novo preço <= R$ 50,00 -> Barato
novo preço > R$ 50,00 && novo preço < R% 120,00  -> Normal
novo preço >= R$ 120,00 -> Caro

 */


#include <stdio.h>
// input: preço, categoria, situação;
// process: calcula o valor do aumento, valor do importo(5% para categoria 2 ou Situação R/ restante 8%), classificar em barato/normal/caro
// output: valor do aumento, valor do imposto, novo preço, classificação.

int main ()
{
    float preco, preco_novo, imposto, amt;
    int categoria;
    char situacao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 0)
    {
        printf("Preco invalido!");

        return 1;
    }

    printf("Informe a categoria do produto\n 1)Limpeza\n 2)Alimentacao\n 3)Vestuario\nDigite a categoria do produto: ");
    scanf("%d", &categoria);

    if(categoria != 1 && categoria != 2 && categoria != 3)
    {
        printf("Categoria invalida");

        return 1;
    }


    printf("Digite a situacao do produto\n R)Necessitam de refrigeracao\n N)Nao eh necessaria a refigeracao\nQual a situacao: ");
    scanf(" %c", &situacao);

    if (situacao != 'R' && situacao != 'r' && situacao !='N' && situacao != 'n')
    {
        printf("Situação invalida");

        return 1;
    }

    if (preco <= 25) {
        if (categoria == 1) {
            amt = preco * 0.05;
            printf("O aumento do produto sera de 5 por cento!\n");
        } else if (categoria == 2) {
            amt = preco * 0.08;
            printf("O aumento do produto sera de 8 por cento!\n");
        } else {
            amt = preco * 0.10;
            printf("O aumento do produto sera de 10 por cento!\n");
        }
    } else {
        if (categoria == 1) {
            amt = preco * 0.12;
            printf("O aumento do produto sera de 12 por cento!\n");
        } else if (categoria == 2) {
            amt = preco * 0.15;
            printf("O aumento do produto sera de 15 por cento!\n");
        } else {
            amt = preco * 0.18;
            printf("O aumento do produto sera de 18 por cento!\n");
        }
    }

    if (categoria == 2 || situacao == 'R' || situacao == 'r')
    {
        printf("O imposto sera de 5 por cento\n");
        imposto = preco*0.05;
    }
    else
    {
        printf("O imposto sera de 8 por cento\n");
        imposto = preco*0.08;
    }

    preco_novo = preco + amt + imposto;
    printf("O valor do aumento foi de R$%.2f\n", amt);
    printf("O valor do imposto eh de R$%.2f\n", imposto);
    printf("O novo preco do produto eh de R$%.2f!\n", preco_novo);

    if (preco_novo >= 120)
    {
        printf("O produto esta classificado como: Caro");
    }
    else if (preco_novo > 50)
    {
        printf("O produto esta classificado como: Normal");
    }
    else
    {
        printf("O produto esta classificado como: Barato");
    }


    return 0;
}