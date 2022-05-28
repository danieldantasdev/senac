/*Faça um programa que leia um vetor com 10 números, sistema deve ler 1 
matricula e imprimir uma mensagem,e informando se ela esta ou 
na no vetor*/

#include <stdio.h>
#define max 10

int busca (int alunos [], int mat) {
	//1 -> encontrei 
	//0 -> não encontrei
	int i;
	for (i = 0; i < max; i ++) {
		if (alunos [i] == mat) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int alunos[max], buscaU, i;
	
	for(i = 0; i < max; i ++){
		printf("Informe a %d matricula: ", i + 1);
		scanf("%d", &alunos[i]);
	}
	
	printf("\nBusca de matricula\n");
	printf("Informe o numero da matricula: ");
	scanf("%d", &buscaU);
	
	if(busca(alunos, buscaU) == 1){
		printf("O aluno esta matriculado.");
	}
	
	else {
		printf("O aluno nao esta matriculado.");
	}
}