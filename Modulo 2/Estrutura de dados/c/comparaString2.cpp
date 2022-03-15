// // Online C compiler to run C program online
// // #include <stdio.h>

// // int main()
// // {
// //     // Write C code here
// //     int index = 0;

// //     // Enquanto os caracteres forem iguais, corre os vectores.
// //     while (a[index] == b[index])
// //     {
// //         // Verifica se alguma das strings terminou.
// //         // Se sim, sai do loop. Caso contrario, analisa o próximo carácter.
// //         if (a[index] == '\0' || b[index] == '\0')
// //             break;
// //         ++index;
// //     }

// //     // Se ambos terminaram, as strings contidas são iguais.
// //     if (a[index] == '\0' && b[index] == '\0')
// //         return 0;
// //     else
// //         return -1;
// // }

#include <stdio.h>
#include <stdlib.h>

// // int main()
// // {

// //     char vet1[20] = "Bom ";
// //     char vet2[20] = "dia";

// //     for (int i = 0; vet1[i] != '\0'; i++)
// //     {
// //         for (int j = 0; vet2[j] != '\0'; j++)
// //         {
// //             vet1[i] = vet2[j];
// //             printf("%c%c", vet1[i], vet2[j]);
// //         }
// //     }

// //     return 0;
// // }

int main()
{
    // char vet1[20] = "Bom ";
    // char vet2[20] = "dia";
    char vet1[20];
    char vet2[20];
    int i, j = 0;

    printf("Segunda frase: ");
    fgets(vet1, 50, stdin);

    printf("Primeira frase: ");
    fgets(vet2, 50, stdin);
    for (i = 0; vet1[i] != '\n'; i++)
        ;
    for (j = 0; vet2[j] != '\n'; j++)
        vet1[i++] = vet2[j];
    printf("%s", vet1);
}

// int main()
// {

//     char str1[20];
//     char str2[20];
//     char str3[20];
//     int i, j = 0;

//     printf("Digite aqui uma palavra: ");
//     fgets(str1, 50, stdin);
//     printf("Digite aqui outra palavra: ");
//     fgets(str2, 50, stdin);

//     for (i = 0; str3[i] != '\n'; i++)
//     {
//         str3[i] = str1[i];
//         if (str3[i] == '\n')
//         {
//             str3[i] = ' ';
//             i++;
//             for (i; str3[i] != '\n'; i++)
//             {
//                 str3[i] = str2[j];
//                 j++;
//             }
//         }
//     }
//     printf("%s", str3);
// }
