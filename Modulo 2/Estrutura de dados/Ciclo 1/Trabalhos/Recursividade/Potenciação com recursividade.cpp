#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

float potencia(int x, int n)
{
    if (n == 0) /*Se o expoente for zero, a potência será igual a 1. Essa é uma das regras de potenciação*/
    {
        return 1;
    }
    else if (n >= 0) /* Se o expoente é positivo, então o potência  é = base*potencia(base, - expoente)*/
    {
        return (x * potencia(x, n - 1));
    }
    else if (n < 0) /* Se o expoente é negativo, então o potência  é = 1/potencia(base, - expoente)*/
    {
        return (1 / potencia(x, -n));
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float x, n, resultado;

    printf("Digite o valor para X: ");
    scanf("%f", &x);

    printf("Digite o valor para N: ");
    scanf("%f", &n);

    resultado = potencia(x, n);
    printf("Resultado de %.1f elevado a %.1f: %.2f\n", x, n, resultado);

    return 0;
}
