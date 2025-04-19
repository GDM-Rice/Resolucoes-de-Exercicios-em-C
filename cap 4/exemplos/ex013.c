/**
Exemplo 13: Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. erifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo.
Menu de opções:
1. Imposto
2. Novo salário
3.lassificação
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
a seguir.
Menor que R$ 500,00 -> %5 imposto
De R$ 500,00 (inclusive) a R$ 850,00 (inclusive) -> 10% imposto
Acima de R$ 850,00 -> 15% imposto

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as
regras a seguir.
Maior que R$ 1.500,00 - > 25,00 aumento
De R$ 750,00 (inclusive) a R$ 1.500,00 (inclusive) -> 50 aumento
De R$ 450,00 (inclusive) a R$ 750,00 -> 75 aumento
Menor que R$ 450,00 -> 100 aumento

Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir.
Até R$ 700,00 (inclusive) -> Mal remunerado
Maiores que R$ 700,00 -> Bem remunerado
 */
#include <stdio.h>

int main()
{
    int op;
    float sal, imp, amt, novo_sal;

    printf("MENU DE OPÇÕES\n");
    printf("1 - IMPOSTO\n");
    printf("2 - NOVO SALÁRIO\n");
    printf("3 - CLASSIFICAÇÃO\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("DIGITE O SALARIO: ");
        scanf("%f", &sal);

        // Verifica a faixa salarial e calcula o imposto com base nas regras
        if (sal < 500)
        {
            imp = sal * 0.05;
        }
        else if (sal >= 500 && sal <= 850)
        {
            imp = sal * 0.10;
        }
        else
        {
            imp = sal * 0.15;
        }
        printf("IMPOSTO: R$%.2f", imp);
    }
    else if (op == 2)
    {
        printf("DIGITE O SALARIO: ");
        scanf("%f", &sal);

        // Verifica a faixa salarial e calcula o aumento de acordo com as regras
        if (sal > 1500)
        {
            amt = 25;
        }
        else if (sal >= 750 && sal <= 1500)
        {
            amt = 50;
        }
        else if (sal >= 450 && sal < 750)
        {
            amt = 75;
        }
        else
        {
            amt = 100;
        }
        novo_sal = sal + amt;
        printf("NOVO SALARIO: R$%.2f", novo_sal);
    }
    else if (op == 3)
    {
        printf("DIGITE O SALARIO: ");
        scanf("%f", &sal);

        // Verifica a classificação do funcionário com base no salário
        if (sal > 700)
        {
            printf("Bem Remunerado");
        }
        else
        {
            printf("Mal Remunerado");
        }
    }
    else
    {
        printf("Opção Inválida");
    }
    return 0;
}