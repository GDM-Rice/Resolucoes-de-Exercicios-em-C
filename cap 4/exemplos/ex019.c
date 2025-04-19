/*
Exemplo 19: Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre a classificação dessa pessoa.
                                       peso
Altura                até 60        60 - 90           acima de 90
Menores que 1,20        A               D                   G
De 1,20 a 1,70          B               E                   H
Maiores que 1,70        C               F                   I
*/
#include <stdio.h>

int main()
{
    float height, weight;

    printf("Peso(kg): ");
    scanf("%f", &weight);

    printf("Altura(metros): ");
    scanf("%f", &height);

// Caso 1: Altura menor que 1,20 metros
    if (height < 1.20)
    {
        if (weight <= 60)
        {
            printf("A");
        }
        else if (weight > 60 && weight <= 90)
        {
            printf("D");
        }
        else
        {
            printf("G");
        }
    }
     // Caso 2: Altura entre 1.20 e 1.70 metros (inclusive)
    else if (height <= 1.70 && height >= 1.20)
    {
        if (weight <= 60)
        {
            printf("B");
        }
        else if (weight > 60 && weight <= 90)
        {
            printf("E");
        }
        else
        {
            printf("H");
        }
    }
     // Caso 3: Altura maior que 1.70 metros
    else
    {
        if (weight <= 60)
        {
            printf("C");
        }
        else if (weight > 60 && weight <= 90)
        {
            printf("F");
        }
        else
        {
            printf("I");
        }
    }

    return 0;
}