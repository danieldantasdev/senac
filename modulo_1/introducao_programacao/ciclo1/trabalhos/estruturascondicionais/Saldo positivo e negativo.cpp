/*Escreva um programa que leia o número da conta e o saldo de várias pessoas, enquanto o usuário desejar. Para cada pessoa, o programa deve exibir o saldo informado junto com uma das mensagens: “Saldo positivo” ou “Saldo negativo”. Além disso, ao final, o programa deve também exibir a quantidade de pessoas com saldo negativo.*/

#include <stdio.h>
int main (){

    int numConta, qtdeNeg;
    float saldo;
    qtdeNeg = 0;
    printf("Informe o numero da conta (digite -1 par encerarr): ");
    scanf("%d",&numConta);
    while (numConta != -1)
    {
        printf("\nInforme seu saldo: ");
        scanf("%f",&saldo);
        if (saldo >= 0)
        {
            printf("\nSaldo positivo: %.1f",saldo);
        }
        else
        {
            printf("\nSaldo negativo: %.1f",saldo);
            qtdeNeg++;
        }
        printf("Informe o numero da conta (digite -1 par encerarr): ");
        scanf("%d",&numConta); 
    }
    printf("\nQuantidade de contas com saldos negativos: %d",qtdeNeg);
    return 0;
}