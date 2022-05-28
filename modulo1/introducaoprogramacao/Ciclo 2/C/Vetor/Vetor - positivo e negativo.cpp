/*Faça um programa que lê 10 números inteiros e os armazena em um vetor, e calcula e mostra
dois vetores resultantes:
• o primeiro vetor resultante deve conter os números positivos;
• o segundo deve conter os números negativos.
Cada vetor resultante vai ter, no máximo, 10 posições, que podem não ser completamente
utilizadas, sendo que as posições vazias devem ficar ao final do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>
#define max 10

int main () {

	int vet[max],vetp[max],vetn[max];
	int i, contP = 0, contN = 0;
	
	//comando de leitura
	for(i = 0; i < max; i ++) {
		printf("Digite o %d numero: ",i+1);
		scanf("%i",&vet[i]);
	}
	
	//comando de fluxo
	for(i = 0; i < max; i ++) {
		if(vet[i] > 0) {	//positivo
			vetp[contP] = vet[i];
			contP++;
			printf("\nVetor positivo: %d",vet[i]);
		}
	}
	
	for(i = 0; i < max; i ++) {
		if(vet[i] < 0) {	//negativo
			vetn[contN] = vet[i];
			contN++;
			printf("\nVetor negativo: %d",vet[i]);
		}
	}
	
getch();
printf("\n\n");
system("pause");
return(0);

}

/*	//comando de ordenação
	for(i = 0; i < max; i ++) {
		for(x = i + 1; x < max; x ++){
			if(vetp[i] > vetp[x]) {
				aux = vetp[i]; vetp[i] = vetp[x]; vetp[x] = aux;
			}
			
			if(vetn[i] > vetn[x]) { 
				aux = vetn[i]; vetn[i] = vetn[x]; vetn[x] = aux;
			}
		}
	}
		//comando de fluxo
	for(i = 0; i < max; i ++) {
		if(vet[i] > 0) {	//positivo
			vetp[contP] = vet[i];
			contP++;
		}
		else {
			if(vet[i] < 0) {	//negativo
				vetn[contN] = vet[i];
				contN++;
			}
			else{}
		}
	}
	
	*/