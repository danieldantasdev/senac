/*Faça um programa que leia um vetor com 10 números, sistema deve ler 1 
matricula e imprimir uma mensagem,e informando se ela esta ou 
na no vetor*/

#include <stdio.h>
#define max 10

int main() {
	int alunos[max], busca, res = 0, i;
	
	for(i = 0; i < max; i ++){
		printf("Informe a %d matricula: ", i + 1);
		scanf("%d", &alunos[i]);
	}
	
	printf("\nBusca de matricula\n");
	printf("Informe o numero da matricula: ");
	scanf("%d", &busca);
	
	for(i = 0; i < max; i ++){
		if(alunos[i] == busca){
			printf("O aluno esta matriculado.");
			res ++;
		}	
	}
	
	if(res == 0){
		printf("O aluno nao esta matriculado.");
	}
}