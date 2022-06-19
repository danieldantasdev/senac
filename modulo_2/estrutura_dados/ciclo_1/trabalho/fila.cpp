#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define M 100
typedef struct
{
	int id;
	char nome[50];
} cliente;

int fila_vazia(int n)
{
	if (n == 0)
		return 1;
	return 0;
}

int fila_cheia(int n)
{
	if (n == M)
		return 1;
	return 0;
}

// implementar enfileirar
void enfileirar(cliente *fila, int *n, cliente c)
{
	if (!fila_cheia(*n))
	{
		fila[*n] = c;
		(*n)++;
	}
	else
	{
		printf("\nFila cheia!\n");
	}
}

// implementar mostraProximo
void mostraProximo(cliente *fila, int n)
{
	if (!fila_vazia(n))
	{
		printf("\nProximo cliente: %d\n", fila[0].id);
	}
	else
	{
		printf("\nFila vazia!\n");
	}
}

// implementar desenfileirar
void desenfileirar(cliente *fila, int *n)
{
	if (!fila_vazia(*n))
	{
		int i;
		for (i = 0; i < *n - 1; i++)
		{
			fila[i] = fila[i + 1];
		}
		(*n)--;
	}
	else
	{
		printf("\nFila vazia!\n");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ini = -1, fim = -1, n = 0, op;
	cliente c;

	do
	{
		printf("\n1- Adicionar cliente na fila de atendimento");
		printf("\n2- Atender cliente para compra do ingresso"); // desenfileirar
		printf("\n3- Consultar o próximo cliente a ser antendido");
		printf("\n4- Sair");
		printf("\nO que deseja fazer? ");
		fflush(stdin);
		scanf("%d", &op);
		switch (op)
		{
		case 1:
		{
			printf("\nCadastro para compra de ingresso\n");
			// leitura
			printf("\nDigite o id do cliente: ");
			fflush(stdin);
			scanf("%d", &c.id);
			// chamada da função enfileirar
			enfileirar(&c, &n, c);
			break;
		}
		case 2:
		{
			// desenfileirar
			desenfileirar(&c, &n);
			break;
		}
		case 3:
		{
			// imprimir
			mostraProximo(&c, n);
			break;
		}
		case 4:
		{
			printf("\nSaindo...");
			break;
		}
		default:
		{
			printf("\nOpção inválida!");
			break;
		}
		}
		system("Pause");
		system("cls");
	} while (op != 4);
}
