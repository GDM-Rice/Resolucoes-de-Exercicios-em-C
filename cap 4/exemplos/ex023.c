/*
Exemplo 23: . Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M — matutino;
— vespertino; ou N — noturno), a categoria (O — operário; G — gerente) e o número de horas trabalhadas no mês de um funcionário. Suponha a digitação apenas de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. alcule e mostre:
■■ O coeficiente do salário, de acordo com a tabela a seguir.
Turno de Trabalho               Valor do Coeficiente
M-Matutino                              10% do sm
V-Vespertino                            15% do sm
N-Noturno                               12% do sm

■ O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coeficiente do salário.
■■ O imposto, de acordo com a tabela a seguir.
Categoria                   Salario bruto                       Imposto sobre SB
O-operario                      >=300                                   5%
                                <300                                    3%
G-Gerente                       >=400                                   6%
                                <400                                    4%

■ A gratificação, de acordo com as regras a seguir.
Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de
R$ 50,00; caso contrário, será de R$ 30,00. Os requisitos são:
Turno: Noturno
Número de horas trabalhadas: Superior a 80 horas
■■ O auxílio alimentação, de acordo com as seguintes regras.
Se o funcionário preencher algum dos requisitos a seguir, seu auxílio alimentação será de um terço
do seu salário bruto; caso contrário, será de metade do seu salário bruto. Os requisitos são:
Categoria: Operário
Coeficiente do salário: < = 25
■■ O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação.
■■ A classificação, de acordo com a tabela a seguir:
Salario liquido                 Mensagem
Menor que R$ 350,00             Mal remunerado
Entre R$ 350,00 e R$ 600,00     Normal
Maior que R$ 600,00             Bem remunerado
*/
#include <stdio.h>

int main()
{
    float sal_min, nht, coeficiente, sal_bruto, imposto = 0, grat, auxilio, sal_liq;
    char turno, categoria;

    printf("Salario minimo: ");
    scanf("%f", &sal_min);
    printf("Turno (M/V/N): ");
    scanf(" %c", &turno);
    printf("Categoria (O/G): ");
    scanf(" %c", &categoria);
    printf("Horas trabalhadas: ");
    scanf("%f", &nht);

// Determina o coeficiente conforme o turno de trabalho
    if (turno == 'M' || turno == 'm')
        coeficiente = 0.10 * sal_min;
    else if (turno == 'V' || turno == 'v')
        coeficiente = 0.15 * sal_min;
    else 
        coeficiente = 0.12 * sal_min;

    printf("Coeficiente: R$ %.2f\n", coeficiente);

    sal_bruto = nht * coeficiente;
    printf("Salario Bruto: R$ %.2f\n", sal_bruto);
// Calcula o imposto com base na categoria e no salário bruto
    if (categoria == 'O' || categoria == 'o')
    {
        if (sal_bruto >= 300)
            imposto = 0.05 * sal_bruto;
        else
            imposto = 0.03 * sal_bruto;
    }
    else if (categoria == 'G' || categoria == 'g')
    {
        if (sal_bruto >= 400)
            imposto = 0.06 * sal_bruto;
        else
            imposto = 0.04 * sal_bruto;
    }

    printf("Imposto: R$ %.2f\n", imposto);

    if ((turno == 'N' || turno == 'n') && nht > 80)
        grat = 50;
    else
        grat = 30;

    printf("Gratificacao: R$ %.2f\n", grat);
// Calcula o auxílio alimentação
// Se for operário ou coeficiente <= 25: 1/3 do salário bruto
// Senão: 1/2 do salário bruto
    if ((categoria == 'O' || categoria == 'o') || coeficiente <= 25)
        auxilio = (1.0 / 3.0) * sal_bruto;
    else
        auxilio = (1.0 / 2.0) * sal_bruto;

    printf("Auxilio: R$ %.2f\n", auxilio);

    sal_liq = sal_bruto - imposto + grat + auxilio;
    printf("Salario Liquido: R$ %.2f\n", sal_liq);

    if (sal_liq < 350)
        printf("Classificacao: Mal Remunerado\n");
    else if (sal_liq <= 600)
        printf("Classificacao: Normal\n");
    else
        printf("Classificacao: Bem Remunerado\n");

    return 0;
}
