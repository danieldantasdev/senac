// Online C compiler to run C program online
// #include <stdio.h>

// int main()
// {
//     // Write C code here
//     int index = 0;

//     // Enquanto os caracteres forem iguais, corre os vectores.
//     while (a[index] == b[index])
//     {
//         // Verifica se alguma das strings terminou.
//         // Se sim, sai do loop. Caso contrario, analisa o próximo carácter.
//         if (a[index] == '\0' || b[index] == '\0')
//             break;
//         ++index;
//     }

//     // Se ambos terminaram, as strings contidas são iguais.
//     if (a[index] == '\0' && b[index] == '\0')
//         return 0;
//     else
//         return -1;
// }

#include <stdio.h>
#include <stdlib.h>

// int main()
// {

//     char vet1[20] = "Bom ";
//     char vet2[20] = "dia";

//     for (int i = 0; vet1[i] != '\0'; i++)
//     {
//         for (int j = 0; vet2[j] != '\0'; j++)
//         {
//             vet1[i] = vet2[j];
//             printf("%c%c", vet1[i], vet2[j]);
//         }
//     }

//     return 0;
// }

int main()
{
    char vet1[20];
    char vet2[20];
    char vet3[20];
    int i, j = 0;

    printf("Digite a primeira: ");
    fgets(vet1, 50, stdin);

    printf("Digite a segunda: ");
    fgets(vet2, 50, stdin);
    // char vet1[20] = "Bom ";
    // char vet2[20] = "dia";
    // int i;
    for (i = 0; vet1[i] != '\0'; i++)
        ;
    for (j = 0; vet2[j] != '\0'; j++)
        vet1[i++] = vet2[j];
    printf("%s ", vet2);
}

// int main()
// {
// }