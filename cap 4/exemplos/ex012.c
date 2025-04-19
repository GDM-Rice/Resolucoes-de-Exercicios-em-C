/**
Exemplo 12: Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
Codigo:
1-> Escriturário -> 50%
2-> Secretário -> 35%
3-> Caixa -> 20%
4-> Gerente -> 10%
5-> Diretor -> 0%
 */
#include <stdio.h>

int main()
{
    int cargo;
    float sal, amt, novo_sal;

    printf("“Digite o cargo do funcionário (1,2,3,4 ou 5): ");
    scanf("%d", &cargo);

    printf("Digite o valor do salário: ");
    scanf("%f", &sal);

    if (cargo == 1)
    {
        printf("O cargo é Escriturário");
        amt = sal * 0.5; // pode ser escrito como (50/100.0) também
        printf("O valor do aumento é: R$%.2f\n", amt);
        novo_sal = sal + amt;
        printf("O novo salário é: R$%.2f", novo_sal);
    }
    else if (cargo == 2)
    {
        printf("O cargo é Secretário");
        amt = sal * 0.35; // pode ser escrito como (35/100.0) também
        printf("O valor do aumento é: R$%.2f\n", amt);
        novo_sal = sal + amt;
        printf("O novo salário é: R$%.2f", novo_sal);
    }
    else if (cargo == 3)
    {
        printf("O cargo é Caixa");
        amt = sal * 0.2; // pode ser escrito como (20/100.0) também
        printf("O valor do aumento é: R$%.2f\n", amt);
        novo_sal = sal + amt;
        printf("O novo salário é: R$%.2f", novo_sal);
    }
    else if (cargo == 4)
    {
        printf("O cargo é  Gerente");
        amt = sal * 0.1; // pode ser escrito como (10/100.0) também
        printf("O valor do aumento é: R$%.2f\n", amt);
        novo_sal = sal + amt;
        printf("O novo salário é: R$%.2f", novo_sal);
    }
    else if (cargo == 5)
    {
        printf("O cargo é Diretor");
        amt = sal * 0.0; // pode ser escrito como (0/100.0) também
        printf("O valor do aumento é: R$%.2f\n", amt);
        novo_sal = sal + amt;
        printf("O novo salário é: R$%.2f", novo_sal);
    }
    else
    {
        printf("Cargo Inexistente!");
    }
    return 0;
}