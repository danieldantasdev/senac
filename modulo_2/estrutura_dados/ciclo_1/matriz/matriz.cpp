#include <stdio.h>
#define mLin 3
#define mCol 3
int main()
{
    int m1[mLin][mCol], m2[mLin][mCol], mRes[mLin][mCol];
    int lin, col, soma = 0;
    // leitura da primeira matriz
    printf("\nDADOS DA PRIMEIRA MATRIZ:\n");
    for (lin = 0; lin < mLin; lin++)
    {
        for (col = 0; col < mCol; col++)
        {
            printf("Informe um valor: ");
            scanf("%d", &m1[lin][col]);
        }
    }

    // leitura da segunda matriz

    printf("\nDADOS DA SEGUNDA MATRIZ:\n");
    for (lin = 0; lin < mLin; lin++)
    {
        for (col = 0; col < mCol; col++)
        {
            printf("Informe um valor: ");
            scanf("%d", &m2[lin][col]);
        }
    }
    // Soma das matrizes
    printf("\n\nSoma:\n");
    for (lin = 0; lin < mLin; lin++)
    {
        for (col = 0; col < mCol; col++)
        {
            mRes[lin][col] = m1[lin][col] + m2[lin][col];
            printf("%d ", mRes[lin][col]);
        }
        printf("\n");
    }
}