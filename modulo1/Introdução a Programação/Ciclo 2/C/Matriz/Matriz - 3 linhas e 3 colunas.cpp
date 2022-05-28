/*Faça um programa que leia valores inteiros em
duas matrizes 3x3 e imprima a matriz soma das
duas.*/

#include <stdio.h>
#define max 3

int main()
{
    int matriz[max][max];
    int matriz2[max][max];
    int i, j;
    
    for(i=0;i<max;i++){
        for(j=0; j<max;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
     for(i=0;i<max;i++){
        for(j=0; j<max;j++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    
     for(i=0;i<max;i++){
        for(j=0; j<max;j++){
            printf("%d", matriz[i][j] + matriz2[i][j]);
        }
    }

    return 0;
}