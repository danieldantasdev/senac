/*
Considere que uma string de no máximo 50 carcateres seja lida por um programa em C. Após a leitura, a string deve ser analisada quantos caracteres "A" tem
 */

#include <stdio.h>

int main()
{
    char string[51];
    int i, cont = 0;
    printf("Informe uma string: ");
    fgets(string, 51, stdin);

    for (size_t i = 0; string[i] != '\0'; i++)
    {
        /* code */
        if (string[i] == 'a' || string[i] == 'A')
        {
            /* code */
            cont++;
        }
        printf("Quantidade de caracteres 'a': %d", cont);
    }
}