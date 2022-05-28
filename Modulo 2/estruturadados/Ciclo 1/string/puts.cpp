#include <stdio.h>

int main()
{
    char string[80];
    printf("Digite seu nome: ");
    fgets(string, 80, stdin);
    puts(string);
    printf("Olá");
    puts(string);
}