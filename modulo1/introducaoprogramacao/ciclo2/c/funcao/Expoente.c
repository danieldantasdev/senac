#include <math.h>
#include <stdio.h>
main()
{
    int base, expoente, pot;
    printf("Informe o valor da base para a potencia: ");
    scanf("%d", &base);
    printf("\nInforme o valor do expoente para calcular a potencia: ");
    scanf("%d", &expoente);
    pot = pow(base, expoente);
    printf("\nA potência de %d elevado a %d = %d" base, expoente, pot);
    return 0;
}
