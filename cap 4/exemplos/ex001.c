/**
Exemplo 1: A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
obedece aos pesos a seguir:
Nota                        Peso
Trabalho de laboratorio      2
Avaliação semestral          3
Exame final                 5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
a tabela:
8 <= media <= 10        A
7 <= media < 8          B
6 <= media < 7          C
5 <= media < 6          D
0 <= media < 5          E
 */
#include <stdio.h>

int main()
{
    float tl, as, ef, media;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &tl);

    printf("Digite a nota do exame final: ");
    scanf("%f", &as);

    printf("Insira a nota da exame final: ");
    scanf("%f", &ef);

    media = (tl * 2 + as * 3 + ef * 5) / 10.0;

    printf("Média ponderada: %.2f\n", media);

    if (media >= 8 && media <= 10)
    {
        printf("Obteve conceito A");
    }
    else if (media >= 7)
    {
        printf("Obteve conceito B");
    }
    else if (media >= 6)
    {
        printf("Obteve conceito C");
    }
    else if (media >= 5)
    {
        printf("Obteve conceito D");
    }
    else if (media >= 0)
    {
        printf("Obteve conceito E");
    }

    return 0;
}