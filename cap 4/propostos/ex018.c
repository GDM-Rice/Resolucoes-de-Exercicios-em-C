/**
Questão 18: Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não
 */
#include <stdio.h>

int main ()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Voce eh maior de idade");
    }
    else
    {
        printf("Voce eh menor de idade");
    }

    return 0;
}