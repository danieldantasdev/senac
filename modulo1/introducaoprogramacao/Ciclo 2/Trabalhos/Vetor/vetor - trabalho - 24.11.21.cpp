#include <stdio.h>

#define max 10 //define constante

int main() {
    int vet1[max], vet2[max], vet3[max*2], i;

    //ler valores para o primeiro vetor
    for (i = 0; i < max; i++) {
        scanf("%i", &vet1[i]);
    }

    //ler valores para o segundo vetor
    for (i = 0; i < max; i++) {
        scanf("%i", &vet2[i]);
    }

    //preencher o terceiro vetor
    for (i = 0; i < max; i++) {
        vet3[i*2] = vet1[i];
    }
    for (i = 0; i < max; i++) {
        vet3[i*2+1] = vet2[i];
    }

    //mostra valores para o segundo vetor
    printf("Vetor 1: ");
    for (i = 0; i < max; i++) {
        printf("%i ", vet1[i]);
    }
    printf("\n");

    //mostra valores para o segundo vetor
    printf("Vetor 2: ");
    for (i = 0; i < max; i++) {
        printf("%i ", vet2[i]);
    }
    printf("\n");

    //mostra valores para o terceiro vetor
    printf("Vetor 3: ");
    for (i = 0; i < max*2; i++) {
        printf("%i ", vet3[i]);
    }

    return 0;
}