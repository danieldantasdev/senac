/*Escreva um programa que leia o slário de várias pessoas e utilize com critério de parada  entrada
de um numero não positivo. Ao final o prgrama deve exibir:
- o total de pessoas com slário até 2000
- o total de pessoas com salario acima de 5000
- A média dos sários informados*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, soma, media;
	/*a cada salario informado é necessário guardar a soma dos salários 
	informados para calcular a media*/
	//opcional declarar a variavel media
	int qtde2000, qtde5000, qtdeSal;
	/*contar quantos salarios forma informados*/
	soma = 0;
	qtde2000 = 0;
	qtde5000 = 0;
	qtdeSal = 0;
	 
	printf("Informe um salario - digite um valor <= 0 para sair: ");
	scanf("%f", &salario);
	
	//estrtura de repetição, informar salário enquanto o salário for maior que 0
	while (salario > 0) {
		if (salario <= 2000){
			qtde2000++;
		}
		else{
			if(salario > 5000){
				qtde5000++;
			}
		}
		qtdeSal++;
		soma = soma + salario;
		printf("Informe um novo salario - digite um valor <= 0 para sair: ");
		scanf("%f", &salario);
	}
	if(qtdeSal > 0){
		media = soma / qtdeSal;
		printf("\nTotal de salarios ate R$2000: %d",qtde2000);
		printf("\nTotal de salarios acima de R$5000: %d",qtde5000);
		printf("\nMedia dos salarios: %.2f",media);
	}
	else{
		printf("\nNenhum salario foi informado");
	}
	return 0;
}