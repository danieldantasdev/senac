#include <math.h>
#include <stdio.h>
main()
{
    int a, b;
    float c;
    printf("Informe o valor do cateto a: ");
    scanf("%d", &a);
    printf("\nInforme o valor do cateto b: ");
    scanf("%d", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("\nA hipotenusa = %1.f\n", c);

    return 0;
}
