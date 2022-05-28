//Fazer um vetor de dez números

#include <stdio.h>
#define max 10

int main() {
	//declarar o vetor
	int vet[max], pares[max], impares[max];
	//declarar a variavel para percorrer a contagem
	int cont, contPares = 0, contImpares = 0;

	//usando a estrutura de repetição para armazenar os dez números
	for(cont = 0; cont < 10; cont ++){
		printf("Informe o valor do %d vetor para cada posicao: ",cont + 1);
		scanf("%d",&vet[cont]);		
	}

	//vetores para numeros pares com repetição
	for(cont = 0; cont < 10; cont ++) {
		if(vet[cont] % 2 == 0) {
			pares[contPares] = vet[cont];
			contPares++;
			printf("\nVetores pares: %d",vet[cont]);
		}
	}
	
	//vetores para numeros impares com repetição
	for(cont = 0; cont < 10; cont ++) {
		if(vet[cont] % 2 != 0) {
			impares[contImpares] = vet[cont];
			contImpares++;
			printf("\nVetores impares: %d",vet[cont]);
		}
	}
	
	return 0;
}