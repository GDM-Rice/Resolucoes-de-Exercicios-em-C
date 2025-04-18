/**
Questão 17: Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
 */
#include <stdio.h>

int main ()
{
    int senha;
    printf("Ola usuario digite sua senha: ");
    scanf("%d", &senha);

    if(senha == 4531)
    {
        printf("Seja bem vindo");
    }
    else
    {
        printf("Senha incorreta tente novamente!");
    }

    return 0;
}