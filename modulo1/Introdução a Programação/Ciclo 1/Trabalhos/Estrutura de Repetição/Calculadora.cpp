#include <stdio.h>
#include <stdlib.h>

//switch só aceita tipo int e char;
//usado em casos de igualdade;
//int = não usa aspas simples;
//char = usa aspas simples;

int main() {
	int opcao, num1, num2;

	do {
		printf("**********CALCULADORA**********\n\n");
		printf("Escolha uma das opcoes abaixo para prosseguir: ");
		printf("\n\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
		scanf("%d", &opcao);

		if(opcao > 0 && opcao < 5) {
			printf("\nDigite o primeiro valor: ");
			scanf("%d",&num1);
			printf("\nDigite o segundo valor: ");
			scanf("%d",&num2);
			
		}

		switch(opcao) {
			case 0:
				printf("\nSaindo...\n");
				break;
			case 1:
				printf("\nSoma: %d\n\n", num1 + num2);
			case 2:
				printf("\nSubtracao: %d\n\n", num1 - num2);
			case 3:
				printf("\nMultiplicacao: %d\n\n", num1 * num2);
				break;
			case 4:
				while(num2 == 0) {
					printf("\nNao existe divisao por zero!\nDigite outro valor: ");
					scanf("%d", &num2);
				}
				printf("Divisao: %d\n\n", num1 / num2);
				break;
			default:
				printf("\nOpcao invalida.\n\n");
		}
	} while(opcao != 0);
}