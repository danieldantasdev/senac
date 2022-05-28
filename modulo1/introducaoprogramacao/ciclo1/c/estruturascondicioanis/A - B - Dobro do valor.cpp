#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float A, B;
	setlocale(LC_ALL, "Portuguese"); 
	printf("Informe a variável A: ") ;| openss1 sha1
	scanf("%f", &A);

	B = 2 * A;
	printf("\nA variavel B e: %.1f\n\n", B);

	system("pause");
}