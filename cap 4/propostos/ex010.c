/**
Questão 10: O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
Custo de Fábrica                        % do distribuidor              % dos impostos
Até R$ 12.000,00                        5                              isento
Entre R$ 12.000,00 e R$ 25.000,00       10                             15
Acima de R$ 25.000,00                   15                             20

 */
#include <stdio.h>

int main ()
{
    float preco, imposto, distribuidor, preco_final;
    printf("Digite o preco de fabrica do carro que deseja comprar: ");
    scanf("%f", &preco);

    if (preco > 25000)
    {
        imposto = preco*0.2;
        distribuidor = preco*0.15;
        preco_final = preco + imposto + distribuidor;
    }
    else if (preco >= 12000)
    {
        imposto = preco*0.15;
        distribuidor = preco*0.10;
        preco_final = preco + imposto + distribuidor;
    }
    else 
    {
        distribuidor = preco*0.05;
        preco_final = preco + distribuidor;
    }
    printf("Assim o preco final ficara R$%.2f\n", preco_final);
    
    return 0;
}