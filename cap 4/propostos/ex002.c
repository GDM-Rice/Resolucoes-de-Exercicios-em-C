/**
Questão 2: Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir: 0 <= media < 3 reprovado, 3 <= media < 7 exame, 7 <= media <= 10 aprovado
 **/
#include <stdio.h>

int main()
{
    float n1, n2, media;
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2)/2.0;

    printf("Sua media eh %.2f\n", media);

    if (media < 3)
    {
        printf("Voce esta reprovado\n");
    }
    else if (media < 7)
    {
        printf("Voce tera que fazer o exame\n");
    }
    else 
    {
        printf("Voce esta aprovado\n");
    }
    return 0;
}