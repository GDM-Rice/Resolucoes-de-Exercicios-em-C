/** 
Questão 3: Faça um programa que receba dois números e mostre o menor.
**/
#include <stdio.h>

int main()
{
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Os numeros sao %.2f e %.2f\n", n1, n2);

    if (n1 < n2)
    {
        printf("O menor numero eh %.2f\n", n1);
    }
    else if (n1 == n2)
    {
        printf("Eles possuem o mesmo valor\n");
    }
    else 
    {
        printf("O menor numero eh %.2f\n", n2);
    }

    return 0;
}