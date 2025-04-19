/*
Exemplo 17: Faça um programa para resolver equações do 2o grau.
*/
#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, delta, x1, x2;

    printf("Declare o valor de ax^2: ");
    scanf("%f", &a);

    printf("Declare o valor de bx: ");
    scanf("%f", &b);

    printf("Declare o valor de c: ");
    scanf("%f", &c);

    if (a== 0)
    {
        printf("Estes valores não formam uma equação de segundo grau");
        return 0;
    }

    delta = (b*b) - (4*a*c);

    if (delta < 0)
    {
        printf("Não existe raiz real");
    }
    else if (delta == 0)
    {
        printf("Existe uma raiz real\n");
        x1 = -(-b)/(2*a);
        printf("%.2f", x1);
    }
    else
    {
        printf("Existem duas raízes reais");
        
        x1= (-b + sqrt(delta))/(2*a);
        x2= (-b - sqrt(delta))/(2*a);

        printf("%.2f, %.2f", x1, x2);
    }
    return 0;
}