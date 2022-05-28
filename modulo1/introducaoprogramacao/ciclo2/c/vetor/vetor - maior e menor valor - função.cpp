/*Escreva um programa que armazene 10 números 
inteiros em um vetor e exiba o maior valor armazenado.*/

#include <stdio.h>
#include <conio.h>
#define max 10

int encontraMaior(int vetor[]){
	int cont, maior = vetor[0];
	for (cont = 0; cont < max; cont++){
		if(vetor[cont] > maior){
			maior = vetor [cont];
		}
	}
	return maior;
}

int main(){
	int vetor[max];
	int i;
	
	for(i = 0; i < max; i++){
		printf("Informe o %d valor: ",i + 1);
		scanf("%d",&vetor[i]);
	}
	
	
	printf("\nO maior valor e : %d\n",encontraMaior(vetor));
	
	getch();
	return 0;
}
