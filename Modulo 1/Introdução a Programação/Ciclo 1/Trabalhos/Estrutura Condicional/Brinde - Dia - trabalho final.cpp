#include <stdio.h>

int main()
{
    int par, brinde, numBrinde, dia;

    printf("Informe a quantidade de brindes:");
    scanf("%d", &brinde);

    while (brinde)
    {
        printf("\nInforme o dia do seu aniversario:");
        scanf("%d", &dia);
        if (dia % 2 == 0)
        {
            printf("\nParabens!");
            brinde--;
        }
        else
            printf("Boa festa, voce nao foi sorteado");
    }
    if (brinde <= 0)
    {
        printf("Promocao encerrada");
    }
    return 0;
}