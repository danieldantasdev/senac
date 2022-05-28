#include <stdio.h>
#include <stdlib.h>

int main () {
	int A, B, C, perimetro;
	printf("Informe a variavel A: ");
	scanf("%d",&A);
	
	printf("\nInforme a variavel B: ");
	scanf("%d",&B);
	
	printf("\nInforme a variavel C: ");
	scanf("%d",&C);
	
	perimetro = A + B + C;
	printf("\nO perimetro e: %.1d",perimetro);
	
	if 
	(A < B + C && B < A + C && C < A + B)
		printf("\nOs 3 lados formam um triangulo!\n");
	 	
 	else 
		printf("\nOs 3 lados nao formam um triagulo!\n\n");
		
	
	system("pause");
}