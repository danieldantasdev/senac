#include <stdio.h>
#include <stdlib.h>

void trocaValores(int *vetor, int posicao1, int posicao2)
{
    int variavelAuxiliar = vetor[posicao1];
    vetor[posicao1] = vetor[posicao2];
    vetor[posicao2] = variavelAuxiliar;
}

// posicaoFinal é o tamanho final do vetor
void selecaoDireta(int *vetor, int posicaoFinal)
{
    int posicaoInicial1, posicaoInicial2, menorValor;

    // posicaoInicial1 não pode ser posicaoInicial1 < posicaoFinal, porque se o vetor percorrer até o último valor, j não irá funcionar
    // por isso, posicaoInicial1 só pode ir até a penultima posição do vetor, posicaoInicial1 < posicaoFinal - 1

    for (posicaoInicial1 = 0; posicaoInicial1 < posicaoFinal - 1; posicaoInicial1++)
    {
        menorValor = posicaoInicial1;

        // posicaoInicial2 = posicaoInicial1 + 1, porque os valores a esquerda do valor já foram ordenados
        for (posicaoInicial2 = posicaoInicial1 + 1; posicaoInicial2 < posicaoFinal; posicaoInicial2++)
        {
            if (vetor[menorValor] > vetor[posicaoInicial2])
            {
                menorValor = posicaoInicial2;
            }
        }
        // Estamos garatindo que não terá troca da mesma posição
        if (posicaoInicial1 != menorValor)
        {
            trocaValores(vetor, posicaoInicial1, menorValor);
        }
    }
}

int main()
{
    int valorInicial, posicaoFinal;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &posicaoFinal);

    int vetor[posicaoFinal];
    for (valorInicial = 0; valorInicial < posicaoFinal; valorInicial++)
    {
        printf("Digite o valor do vetor: ");
        scanf("%d", &vetor[valorInicial]);
    }

    selecaoDireta(vetor, posicaoFinal);

    printf("\nVetor ordenado: \n");
    for (valorInicial = 0; valorInicial < posicaoFinal; valorInicial++)
    {
        printf("%d\n", vetor[valorInicial]);
    }
    return 0;
}