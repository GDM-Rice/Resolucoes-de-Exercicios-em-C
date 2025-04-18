/**
Questão 19: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
.para homens: (72.7 * h) – 58.
.para mulheres: (62.1 * h) – 44.7. 
 */
#include <stdio.h>

int main ()
{
    float height, calc;
    char sexo;
    printf("Calculadora de peso ideal\n");
    printf("Digite seu sexo(M/F): ");
    scanf("%s", &sexo);
    printf("Digite sua altura(em metros): ");
    scanf("%f", &height);

    if(sexo == 'M' || sexo == 'm')
    {
        calc = (72.7 * height) - 58;
        printf("Seu peso ideal eh %.2fkg", calc);
    }
    else if(sexo == 'F' || sexo == 'f')
    {
        calc = (62.1 * height) - 44.7;
        printf("Seu peso ideal eh %.2fkg", calc);
    }
    else
    {
        printf("Digite um valor valido para o seu sexo como M, F, m ou f!");
    }

    return 0;
}