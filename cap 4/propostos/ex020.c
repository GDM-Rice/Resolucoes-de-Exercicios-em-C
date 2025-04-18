/**
Questão 20: 0. Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
Categoria
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 16 a 30
Sênior Acima de 30
 */
#include <stdio.h>

int main ()
{
    int idade;
    printf("Seja bem vindo nadador. Por favor digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 30)
    {
        printf("Voce participara da categoria Senior!");
    }
    else if (idade >= 16)
    {
        printf("Voce participara da categoria Adulto!");
    }
    else if (idade >= 11)
    {
        printf("Voce participara da categoria Adolescente!");
    }
    else if (idade >= 8)
    {
        printf("Voce participara da categoria Juvenil!");
    }
    else
    {
        printf("Voce participara da categoria Infantil!");
    }

    return 0;
}