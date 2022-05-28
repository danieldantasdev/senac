/*Elabore um programa em C que leia 2 vetores com 5
valores inteiros cada e determine o vetor soma.*/

#include <stdio.h>
#define max 5

int main(){
int v1[max], v2[max],vSoma[max];
int i;

	printf("\nPrimeiro vetor\n");
for (i = 0; i < max; i++){
	printf("Digite um numero:");
	scanf("%d",&v1[i]);
	}
	
	printf("\nSegundo vetor\n");	
for (i = 0; i < max; i++){
	printf("Digite um numero:");
	scanf("%d",&v2[i]);
	}
	
	printf("\nVetor de soma\n");
for(i = 0; i < max; i++){
vSoma[i]= v1[i] + v2[i];
	printf("A media da posicao %d e:%d\n",i,vSoma[i]);
	}
}