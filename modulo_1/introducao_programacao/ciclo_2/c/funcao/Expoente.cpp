#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "");
    int n1, n2, res;
    printf("Informe a base: ");
    scanf("%d", &n1);
    printf("Informe o expoente: ");
    scanf("%d", &n2);
    res = pow(n1, n2);
    printf("%d elevado a %d é: %d", n1, n2, res);
}
