/**
Questão 5: Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
Escolha do usuário
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
 **/
#include <stdio.h>

int main()
{
    int I;
    float n1, n2, med, dif, prod, divi;

    printf("Escolha entre:\n 1)Media entre os numeros digitados\n 2)Diferenca do maior pelo menor\n 3)Produto entre os numeros digitados\n 4)Divisao do primeiro pelo segundo numero\nInsira a funcao desejada: ");
    scanf("%d", &I);

    if (I == 1)
    {
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        printf("Foi escolhido a media entre os numeros\n");
        med = (n1 + n2) / 2.0;
        printf("A media eh %.2f\n", med);
    }
    else if (I == 2)
    {
        printf("Foi escolhido a diferenca do maior pelo menor\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        if (n1 > n2)
        {
            dif = n1 - n2;
            printf("A diferenca eh %.2f\n", dif);
        }
        else
        {
            dif = n2 - n1;
            printf("A diferenca eh %.2f\n", dif);
        }
    }
    else if (I == 3)
    {
        printf("Foi escolhido o produto entre os numeros\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        prod = n1 * n2;
        printf("O produto eh %.2f\n", prod);
    }
    else if (I == 4)
    {
        printf("Foi escolhido a divisao do primeiro pelo segundo\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        if (n2 == 0)
        {
            printf("Divisao invalida\n");
            return 0;
        }

        divi = n1 / n2;
        printf("A diviso eh %.2f\n", divi);
    }
    else
    {
        printf("Digite um valor valido como: 1, 2, 3 e 4!\n");
    }

    return 0;
}