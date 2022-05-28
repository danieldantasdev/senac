//Fazer um vetor de dez números

#include <stdio.h>
#define max 10

int main() {
	//declarar o vetor
	int vet[max];
	//declarar a variavel para percorrer a contagem
	int cont;

	//usando a estrutura de repetição para armazenar os dez números
	for(cont = 0; cont <10; cont ++){
		printf("Informe o valor do %d vetor para cada posicao: ",cont);
		scanf("%d",&vet[cont]);		
	}

	//vetores para numeros pares com repetição
	printf("\nVetores pares! ");
	for(cont = 0; cont < 10; cont ++) {
		if(vet[cont] % 2 == 0) {
			printf("\n%d", vet[cont]);
		}
	}
	
	//vetores para numeros impares com repetição
	printf("\n\nVetores impares! ");
	for(cont = 0; cont < 10; cont ++) {
		if(vet[cont] % 2 != 0) {
			printf("\n%d", vet[cont]);
		}
	}
	
	return 0;
}