/**
Exemplo 15: Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número
de dependentes do funcionário e a quantidade de horas extras trabalhadas. alcule e mostre o salário
a receber do funcionário de acordo com as regras a seguir:
■■ O valor da hora trabalhada é igual a 1/5 do salário mínimo.
■■ O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
■■ Para cada dependente, acrescentar R$ 32,00.
■■ Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
■■ O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas
extras.
■■ alcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:
 Inferior a R$ 200,00 -> Isento
 De R$ 200,00 até R$ 500,00 -> 10%
 Superior a R$ 500,00 -> 20%

 ■ O salário líquido é igual ao salário bruto menos IRRF.
■■ A gratificação é de acordo com a tabela a seguir:
Até R$ 350,00 -> R$ 100,00
Superior a R$ 350,00 ->  R$ 50,00
O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
 */
#include <stdio.h>

int main()
{
    float sal_min, nht, ndep, nhet, sal_receber, vh, smes, vdep, vhe, imp, sbruto, sliq, grat;

    printf("Salario minimo: ");
    scanf("%f", &sal_min);

    printf("Numero de horas trabalhadas: ");
    scanf("%f", &nht);

    printf("Numero de dependentes: ");
    scanf("%f", &ndep);

    printf("Numero de horas extras trabalhadas: ");
    scanf("%f", &nhet);

     // Calcula o valor da hora trabalhada: 1/5 do salário mínimo
    vh = 1 / 5 * sal_min;
     // Calcula o salário do mês: número de horas trabalhadas multiplicado pelo valor da hora
    smes = nht * vh;
     // Calcula o valor adicional pelos dependentes: R$32,00 por dependente
    vdep = 32 * ndep;
     // Calcula o valor das horas extras: 1,5 vezes o valor da hora normal
    vhe = nhet * (vh + (vh * 0.5)); // pode ser também vhe = nhet * (vh * 1.5);
    sbruto = smes + vdep + vhe;
    if (sbruto < 200)
    {
        imp = 0;
    }
    else if (sbruto >= 200 && sbruto <= 500)
    {
        imp = sbruto * 0.1;
    }
    else
    {
        imp = sbruto * 0.2;
    }

    sliq = sbruto - imp;

    if (sliq <= 350)
    {
        grat = 100;
    }
    else if (sliq > 350)
    {
        grat = 50;
    }

    sal_receber = sliq + grat;

    printf("Salario a receber é R$%.2f", sal_receber);

    return 0;
}