/**
Exemplo 9: Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA –
mês por extenso e hora:minuto.
*/
// Fiz com base na imagem e as intruções das paginas 69 e 70 do livro para responder, pois não sei usar struct ainda.
#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    struct tm *data_hora;
    int dia, mes, ano, hora, min;

    t = time(NULL);
    data_hora = localtime(&t);

    dia = data_hora->tm_mday;
    mes = data_hora->tm_mon + 1;
    ano = data_hora->tm_year + 1900;
    hora = data_hora->tm_hour;
    min = data_hora->tm_min;

    printf("Data Atual: %02d/%02d/%d - ", dia, mes, ano);

    if (mes == 1)
    {    
        printf("janeiro\n");
    }
    else if (mes == 2)
    {
        printf("fevereiro\n");
    }
    else if (mes == 3)
    {
        printf("março\n");
    }
    else if (mes == 4)
    {
        printf("abril\n");
    }
    else if (mes == 5)
    {
        printf("maio\n");
    }
    else if (mes == 6)
    {
    printf("junho\n");
    }
    else if (mes == 7)
    {
    printf("julho\n");
    }
    else if (mes == 8)
    {
    printf("agosto\n");
    }
    else if (mes == 9)
    {
    printf("setembro\n");
    }
    else if (mes == 10)
    {
    printf("outubro\n");
    }
    else if (mes == 11)
    {
    printf("novembro\n");
    }
    else if (mes == 12)
    {
        printf("dezembro\n");
    }
    else
    {
        printf("mês inválido\n");
    }
    
    printf("Hora Atual:");
    printf("%02d:%02d\n", hora, min);

    return 0;
}
