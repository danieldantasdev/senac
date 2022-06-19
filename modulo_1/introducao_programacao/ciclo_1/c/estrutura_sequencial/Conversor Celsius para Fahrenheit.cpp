#include <stdio.h>
#include <stdlib.h>

int main () {
	float Celsius, Fahrenheit;
	printf("Informe a temperatura em Celsius: ");
	scanf("%f",&Celsius);
	
	Fahrenheit = 9 * Celsius + 160 / 5;
	printf("\nA temperatura convertida para Fahrenheit e: %.1f\n\n",Fahrenheit);
	
	system("pause");
}