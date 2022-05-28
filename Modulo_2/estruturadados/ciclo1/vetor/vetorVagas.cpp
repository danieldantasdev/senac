/*
Um concurso para a vaga de professor de uma universidade teve 10 professores concorrendo a vaga. Escreva um programa em C que armazene as 10 notas em um vetor e encontre a maior nota armazenada
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int vaga = 10;
    // int maior = vet[0];

    // for (maior = 0; maior < 10; maior++)
    // {
    //     /* code */
    // }

    // float nota1, nota2, media;

    // do
    // {
    //     printf("Digite a primeira nota: ");
    //     scanf("%f", &nota1);
    // } while (nota1 < 0 || nota1 > 10);

    // do
    // {
    //     printf("Digite a segunda nota: ");
    //     scanf("%f", &nota2);
    // } while (nota2 < 0 || nota2 > 10);

    // media = (nota1 + nota2) / 2;

    // printf("Nota final: %.2f\n", media);

    int max = 10;
    float notas[max];
    int i, guarda_maior, guarda_menor;

    printf("Digite a 1o nota: ");
    scanf("%f", &notas[0]);

    guarda_maior = notas[0];
    guarda_menor = notas[0];

    for (i = 1; i < max; i++)
    {
        printf("\nDigite a %do nota: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] > guarda_maior)
            guarda_maior = notas[i];
        else if (notas[i] < guarda_menor)
            guarda_menor = notas[i];
    }

    printf("\nA menor nota e: %d", guarda_menor);
    printf("\nA maior nota e: %d", guarda_maior);

    // getch();
}
