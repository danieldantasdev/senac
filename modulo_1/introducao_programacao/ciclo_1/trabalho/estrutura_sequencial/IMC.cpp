#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float altura, peso, IMC;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("\nInforme seu peso: ");
	scanf("%f", &peso);
	
	IMC = peso / (altura * altura);
	printf("\nO IMC e: %.1f\n\n",IMC);
	
	system("Pause");
		
}


