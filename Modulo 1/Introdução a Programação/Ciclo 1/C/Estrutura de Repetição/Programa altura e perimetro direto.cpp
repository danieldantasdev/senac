/*
Primeiro Programa em C, fazer um programa 
para o usuário informar a base e altura de 
um retângulo e calcular área  e perímetro
do retângulo
*/
	
	#include <stdio.h>

	int main(){
	float base, altura, area, perimetro;
	printf("Informe a base do retangulo: ");
	scanf("%f",&base);
	printf("Informe a altura do retangulo: ");
	scanf("%f",&altura);
	//area
	area = base * altura;
	//perimetro
	perimetro = 2*base + 2*altura;
	//exibição
	printf("A area do retangulo e: %.2f\n0 perimetro e: %.2f",area,perimetro);
	}
	
	