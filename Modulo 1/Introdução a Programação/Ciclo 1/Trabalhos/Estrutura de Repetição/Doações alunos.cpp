/* Os alunos de uma escola criaram o “Dia da Contribuição” para financiar a construção de uma nova quadra esportiva. Neste dia, todos os alunos da escola depositam até R$ 50,00 numa caixa colocada no portão da escola. 
Nesse contexto, você deve fazer um programa em C que, enquanto houver alunos disponíveis, leia o valor contribuído por cada aluno. Ao final, o programa deve mostrar na tela o montante total arrecadado.

Obs: Não há um limite de alunos, o sistema deve verificar se um novo aluno deseja contribuir. */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    float valor, total;
    total = 0;
    printf("Qual o valor desja contribuir: (digite 0 para encerrar)");
    scanf("%f",&valor);
    while (valor > 0)
    {
        total = total + valor;
        printf("\nQual valor o aluno deseja contribuir: (digite 0 para encerrar");
        scanf("%f",&valor);
    }
    if (total > 0)
    {
        printf("\nTotal arrecadado: R$%.2f",total);
    }
    else
    {
        printf("\nSem doacoes!\n");
    }
    return 0;
}