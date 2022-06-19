#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	//a linha abaixo configura o idioma para o português
	setlocale (LC_ALL,"Portuguese");
	printf("Olá Mundo\n");
	//a linha abaixo muda a cor do texto
	system("color A");

	system("pause");
	//A linha abaixo limpa a tela
	system("cls");
	printf("O resultado é");
	system("pause");
	return 0;
}