/*
Exemplo 18: Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um
triângulo, escreva uma mensagem. Considere que:
■■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
■■ chama-se equilátero o triângulo que tem três lados iguais;
■■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
■■ recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/
#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Digite valor pra X: ");
    scanf("%f", &x);

    printf("Digite valor pra Y: ");
    scanf("%f", &y);

    printf("Digite valor pra Z: ");
    scanf("%f", &z);

     // Verifica se as medidas fornecidas podem formar um triângulo
    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y && y == z)
        {
            printf("Triângulo Equilátero");
        }
        else if (x == y || y == z || x == z)
        {
            printf("Triângulo Isósceles");
        }
        else
        {
            printf("Triângulo Escaleno");
        }
    }
    else
    {
        printf("Essas medidas não formam um triângulo");
    }

    return 0;
}