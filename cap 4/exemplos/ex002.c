/**
Exemplo 2: Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 6,0.
 0 <= media < 3 Reprovado
 3 <= media < 7 Exame
 7 <= media <= 10 Aprovado
 */
#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("Média aritmética: %.2f", media);

    if (media <= 7 && media >= 10)
    {
        printf("Aprovado");
    }
    else if (media >= 3)
    {
        float exame;
        exame = 12 - media;
        printf("Exame\n");
        printf("Deve tirar nota %.2f para ser aprovado", exame);
    }
    else
    {
        printf("Reprovado");
    }
    return 0;
}