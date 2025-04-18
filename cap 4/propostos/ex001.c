/*
 * Questão 1:
 * Faça um programa que receba quatro notas de um aluno, calcule e mostre
 * a média aritmética das notas e a mensagem de aprovado ou reprovado,
 * considerando para aprovação média 7.
 */

#include <stdio.h>

int main ()
{
    float n1, n2, n3, n4, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    printf("Digite sua quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/4.0;

    printf("Sua media eh %.2f\n", media);

    if (media < 7)
    {
        printf("Voce esta reprovado\n");
    }
    else {
        printf("Voce esta aprovado\n");
    }


    return 0;

}