#include <stdio.h>
#include <stdlib.h>

void trocaValores(int *vetor, int p1, int p2)
{
    int variavelAuxiliar = vetor [p1];
    vetor [p1] = vetor[p2];
    vetor[p2] = variavelAuxiliar;
}

void selecaoDireta(int *vetor, int n)
{
    int i, j, menorValor;

    for (i = 0; i < n - 1; i++)
    {
        menorValor = i;

        for (j = i + 1; j < n; j++)
        {
            if (vetor[menorValor] > vetor[j])
            {
                menorValor = j;
            }
        }
        if (i != menorValor)
        {
            trocaValores(vetor, i, menorValor);
        }
    }
}

int main()
{
    int i, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor do vetor: ");
        scanf("%d", &vetor[i]);
    }

    selecaoDireta(vetor, n);

    printf("\nVetor ordenado: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
