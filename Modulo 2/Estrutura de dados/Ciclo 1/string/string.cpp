#include <stdio.h>

int main()
{
    char string[100];
    printf("Digite seu nome: ");
    fgets(string, 100, stdin); // gets (string)
    printf("\n Ola %s", string);
}