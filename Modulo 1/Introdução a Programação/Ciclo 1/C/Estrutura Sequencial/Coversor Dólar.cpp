/* Elaborar um programa que efetue a aparesentação do valor da conversão em real de um
valor lido em dólar. O programa deve solicitar o valor da cotação do dólar e também a quan-
tidade de dólares disponível com o usuário, para que seja apresentado o valor na moeda
brasileira, #include <stdlib.h> = não roda o Linux*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float dolar, real, cotacao;
	
	printf("Informe quantos dolares voce possui: ");
	scanf("%f",&dolar);
	
	printf("\nInforme o valor do dolar hoje: ");
	scanf("%f",&cotacao);
	
	real = cotacao * dolar;
	printf("\nSeu dinheiro em real corresponde a R$%.2f\n\n", real);
	
	system("\nPause\n");
}
