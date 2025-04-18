/**
 Questão 7: Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.
**/
 #include <stdio.h>

int main ()
{
    float sal, amt, salario_amt;
    printf("Informe seu salario: ");
    scanf("%f", &sal);

    printf("Seu salario eh: %.2f\n", sal);

    if (sal < 500)
    {
        amt = sal * 0.3;
        salario_amt = sal + amt;

        printf("Seu novo salario sera de R$%.2f\n", salario_amt);
    }
    else
    {
        printf("Voce nao tem direito ao aumento de salario");
    }

    return 0;
}