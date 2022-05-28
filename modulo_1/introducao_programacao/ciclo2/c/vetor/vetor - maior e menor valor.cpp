/*Escreva um programa que armazene 10 números 
inteiros em um vetor e exiba o maior valor armazenado.*/

#include <stdio.h>
#include <conio.h>
#define max 10



int main(){
	int vetor[max], i, maiorValor, menorValor;
	
	for(i = 0; i < max; i++){
		printf("Informe o %d valor: ",i + 1);
		scanf("%d",&vetor[i]);
	}
	
	maiorValor = 0;
	menorValor = 1;
	for(i = 0; i < max; i++){
		if
		(vetor[i] >= maiorValor)
		maiorValor = vetor[i];
		
		else
			if(vetor[i] < menorValor)
				menorValor = vetor[i];
	}
	
	printf("\nO maior valor e : %d\n",maiorValor);
	printf("O menor valor e : %d\n",menorValor);
	
	getch();
	return 0;
}
