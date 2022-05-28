/*Fazer um programa que leia um vetor de 20 numeros, conte quantos numeros pares
estão contidos no vetor e imprima essa qtde bem como todo o vetor de nuemeros*/

#include <stdio.h>
#define max 20

int main(){
	int vetor[max], i, pares = 0;
	for(i = 0; i < max; i++){
		printf("Informe o %d valor: ",i + 1);
		scanf("%d",&vetor[i]);
		if(vetor[i] % 2 == 0)
		pares++;
	}
	printf("A quantidade de valores pares e : %d\n",pares);
	
	for(i = 0; i < max; i++){
		printf("%d ",vetor[i]);
	}
	
	return 0;
}