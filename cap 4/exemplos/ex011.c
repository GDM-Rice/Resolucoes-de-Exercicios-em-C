/**
Exemplo 11: Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta
por duas variáveis inteiras: hora e minuto). alcule e mostre a duração do jogo (horas e minutos),
sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e
terminar no dia seguinte
 */
#include <stdio.h>

int main ()
{
    int hora_i, min_i, hora_f, min_f, hora_d, min_d;
    
    printf("Digite o horário inicial\n");
    printf("hora: ");
    scanf("%d", &hora_i);

    printf("minuto: ");
    scanf("%d", &min_i);

    printf("Digite o horário final\n");
    printf("hora: ");
    scanf("%d", &hora_f);

    printf("minuto: ");
    scanf("%d", &min_f);

    if (min_i > min_f)
    {
         // Se os minutos iniciais forem maiores, ajusta os minutos finais somando 60 minutos
        min_f = min_f + 60;
         // E subtrai 1 da hora final, pois houve um "deslocamento" de 1 hora ao ajustar os minutos
        hora_f = hora_f - 1;
    }
     // Verifica se a hora inicial é maior que a hora final (indicando que o jogo passou de um dia para outro)
    if(hora_i > hora_f)
    {
         // Se sim, adiciona 24 horas à hora final, pois o jogo terminou no dia seguinte
        hora_f = hora_f + 24;
    }
min_d = min_f - min_i;
hora_d = hora_f - hora_i;

printf("O jogo durou %02d hora(s) e %02d minuto(s)", hora_d, min_d);

return 0;
}