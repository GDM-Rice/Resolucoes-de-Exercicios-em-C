/** 
Questão: Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números
*/
#include <stdio.h>
#include <math.h>

int main ()
{
    int I;
    float n1, n2, potencia, raiz2_0, raiz2_1, raiz3_0, raiz3_1;

    printf("Escolha entre:\n 1)Primeiro elevado ao segundo\n 2)Raiz quadrada de cada numero\n 3)Raiz cubica de cada numero\nIsira o numero correspondente a funcao: ");
    scanf("%d", &I);


    if (I == 1)
    {
        printf("Voce escolheu o primeiro elevado ao segundo\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
    
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        potencia = pow(n1, n2);

        printf("A Potencia do primeiro pelo segundo eh %.2f", potencia);

    }
    else if (I == 2)
    {
        printf("Voce escolheu a raiz quadrada de cada numero\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
    
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        if(n1 < 0 || n2 < 0)
        {
            printf("Raizes nao reais\n");
            return 0;
        }

        raiz2_0 = sqrt(n1);
        printf("A raiz quadrada do primeiro numero eh %.2f\n", raiz2_0);
        
        raiz2_1 = sqrt(n2);
        printf("A raiz quadrada do segundo numero eh %.2f\n", raiz2_1);

         
    }
    else if (I == 3)
    {
        printf("Voce escolheu a raiz cubica dos dois numeros\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
    
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        raiz3_0 = cbrt(n1);
        printf("A raiz cubica do primeiro numero eh %.2f\n", raiz3_0);

        raiz3_1 = cbrt(n2);
        printf("A raiz cubica do segundo numero eh %.2f\n", raiz3_1);
         
    }
    else
    {
        printf("Digite um valor valido como: 1, 2, 3!\n");
    }

    return 0;

}