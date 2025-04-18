/**
Questão 15: Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
1) poupança 3%
2) fundos de renda fixa 4%
 */
#include <stdio.h>

int main ()
{
    int investimento;
    float amt, valor, final;

    printf("Qual investimento e de seu agrado:\n 1)Poupanca com um aumento mensal de 3 por cento\n 2)Fundos de renda fixa com um aumento mensal de 4 por cento\n O que deseja: ");
    scanf("%d", &investimento);

    if(investimento == 1)
    {
        printf("Digite o valor que deseja investir: ");
        scanf("%f", &valor);
        amt = valor*0.03;
        final = valor + amt;
        printf("Apos um mes o o que foi investido sera R$%.2f", final);
    }
    else if (investimento == 2)
    {
        printf("Digite o valor que deseja investir: ");
        scanf("%f", &valor);
        amt = valor*0.04;
        final = valor + amt;
        printf("Apos um mes o o que foi investido sera R$%.2f", final);
    }
    else
    {
        printf("Digite um valor valido como 1 ou 2!");
    }
    return 0;

}