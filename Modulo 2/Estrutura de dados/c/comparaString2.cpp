#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char vet1[20] = "Bom ";
    // char vet2[20] = "dia";
    char vet1[20];
    char vet2[20];
    int i, j = 0;

    printf("Primeira frase: ");
    fgets(vet1, 50, stdin);

    printf("Segunda frase: ");
    fgets(vet2, 50, stdin);

    for (i = 0; vet1[i] != '\0'; i++)
        ;

    for (j = 0; vet2[j] != '\0'; j++)
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

// int main()
// {

//     char str1[51];
//     char str2[51];
//     char str3[51];
//     int i, j;

//     printf("Digite aqui uma palavra: ");
//     fgets(str1, 51, stdin);
//     printf("Digite aqui outra palavra: ");
//     fgets(str2, 51, stdin);

//     for (i = 0; str1[i] != '\n'; i++)
//     {
//     }

//     for (j = 0; str2[j] != '\n'; j++, i++)
//     {
//         str1[i] = str2[j];
//     }

//     printf("%s", str1);
// }

// int main()
// {

//     char str1[51];
//     char str2[51];
//     char str3[51];
//     int i, j;

//     printf("Digite aqui uma palavra: ");
//     fgets(str1, 51, stdin);
//     printf("Digite aqui outra palavra: ");
//     fgets(str2, 51, stdin);

//     for (i = 0; str1[i] != '\0'; i++)
//     {
//         str3[i] = str1[i];
//         if (str3[i] == '\n')
//         {
//             str3[i] = ' ';
//             ++i;
//             for (j = 0; str2[j] != '\0'; j++)
//             {
//                 str3[i] = str2[j];
//                 ++i;
//             }
//         }
//     }
//     for (i = 0; str3[i] != '\0'; i++)
//     {
//         str1[i] = str3[i];
//     }

//     printf("%s", str1);
// }