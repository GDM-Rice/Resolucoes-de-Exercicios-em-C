/**
Questão 25: Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))
> = 2.400 -> R$ 500,00
1800 <= H < 2400 -> R$ 400,00
1200 <= H < 1800 -> R$ 300,00
600 <= H < 1200 -> R$ 200,00
< 600 -> R$ 100,00
 */
#include <stdio.h>

int main()
{
    float horas, faltas, H;

    printf("Digite quantas horas extras voce fez: ");
    scanf("%f", &horas);

    printf("Digite quantas horas voce faltou: ");
    scanf("%f", &faltas);

    H = horas - (2*faltas)/3.0;

    if (H >= 2400)
    {
        printf("Seu saldo de horas %.2f;\n", H);
        printf("Voce tem direito a R$500 de bonus");
    }
    else if (H >= 1800)
    {
        printf("Seu saldo de horas %.2f;\n", H);
        printf("Voce tem direito a R$400 de bonus");
    }
    else if (H >= 1200)
    {
        printf("Seu saldo de horas %.2f;\n", H);
        printf("Voce tem direito a R$300 de bonus");
    }
    else if (H >= 600)
    {
        printf("Seu saldo de horas %.2f;\n", H);
        printf("Voce tem direito a R$200 de bonus");
    }
    else
    {
        printf("Seu saldo de horas %.2f;\n", H);
        printf("Voce tem direito a R$100 de bonus");
    }
    
    return 0;
}