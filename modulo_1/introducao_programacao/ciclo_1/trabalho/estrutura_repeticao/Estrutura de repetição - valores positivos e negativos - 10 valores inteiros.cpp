/*Estruturas de repetição são um importante recurso em programação. Com base na estrutura de repetição FOR, faça um programa
que lê 10 valores inteiros, um de cada vez, e contabiliza quantos destes valores são negativos e quantos são positivos, exibindo
estas informações na tela.
OBS.: o arquivo que deve ser anexado na tarefa é aquele que contém o código, com extensão .c ou .cpp.*/

#include <stdio.h>

int main()
{
	int cont, positivo = 1, negativo = -1;
	for (cont = -5; cont <= 5; cont++)
	{
		printf("%d\n", cont);
		if (cont > 0)
		{
			positivo = positivo + 1;
		}
		else
		{
			negativo = negativo + 1;
		}
	}
	printf("\nA quantidade de numeros positivos e: %d\nA quantidade de numeros negativos e: %d", positivo, negativo);

	return 0;
}

// o zero compartilha todas as peculiaridade de um número par, portanto, na literatura, conclui-se que o mesmo é par
