#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float altura, peso, IMC;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("\nInforme seu peso: ");
	scanf("%f", &peso);
	
	IMC = peso / (altura * altura);
	printf("\nO IMC e: %.1f", IMC);
	
	if (IMC < 20) 
		printf("\n\nAbaixo do peso\n\n");	
	
	
	if (IMC >= 21 && IMC < 25) 
		printf("\n\nNormal\n\n");	
	
	
	if (IMC >= 25 && IMC < 30) 
		printf("\n\nExcesso de peso\n\n");	
	
	
	if (IMC >= 30 && IMC < 35) 
		printf("\n\nObesidade\n\n");	
	
	
	if (IMC > 35) 
		printf("\n\nObesidade morbida\n\n");	
	
	
	system("Pause");
	
}

	


/*IMC Faixa de risco
Abaixo de 20 Abaixo do peso
A partir de 20 até 25 Normal
Acima de 25 e até 30 Excesso de peso
Acima de 30 e até 35 Obesidade
Acima de 35 Obesidade mórbida*/