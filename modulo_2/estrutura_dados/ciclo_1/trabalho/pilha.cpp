#include <stdio.h>
#define M 10

int pilha_vazia(int topo, int pilha)
{
	if (pilha == 1)
	{
		if (topo == -1)
			return 1;
		return 0;
	}
	else
	{
		if (topo == M)
			return 1;
		return 0;
	}
}

// completar pilha_cheia
int pilha_cheia(int t1, int t2)
{
}

// empilhar
void empilhar(int *topo, int *pilha, int valor)
{
	if (pilha == 1)
	{
		if (!pilha_cheia(*topo, *pilha))
		{
			*topo++;
			pilha[*topo] = valor;
		}
		else
			printf("\nPilha cheia!\n");
	}
	else
	{
		if (!pilha_cheia(*topo, *pilha))
		{
			*topo++;
			pilha[*topo] = valor;
		}
		else
			printf("\nPilha cheia!\n");
	}
}

// desempilhar
void desempilhar(int *topo, int *pilha)
{
	if (pilha == 1)
	{
		if (!pilha_vazia(*topo, *pilha))
		{
			*topo--;
		}
		else
			printf("\nPilha vazia!\n");
	}
	else
	{
		if (!pilha_vazia(*topo, *pilha))
		{
			*topo--;
		}
		else
			printf("\nPilha vazia!\n");
	}
}

void mostraTopo(int topo, int *pilha, int p)
{
	if (!pilha_vazia(topo, p))
	{
		printf("%d\n", pilha[topo]);
	}
	else
	{
		printf("\nPilha vazia!\n");
	}
}

int main()
{
	int pilha[M], topo1, topo2, valor, op, p;

	do
	{
		printf("\n1- Empilhar");
		printf("\n2- Mostrar topo");
		printf("\n3- Desempilhar");
		printf("\n4- Sair");
		printf("\nEscolha sua op��o: ");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
		{
			printf("\nDeseja inserir que valor?");
			scanf("%d", &valor);
			printf("\nDeseja inserir em que pilha (1 ou 2)?\n");
			scanf("%d", &p);
			// chamada empilhar
			empilhar(&topo1, pilha, valor);
			break;
		}
		case 2:
		{
			printf("\nTopo pilha 1: ");
			mostraTopo(topo1, pilha, 1);
			printf("\nTopo pilha 2: ");
			mostraTopo(topo2, pilha, 2);
			break;
		}
		case 3:
		{
			printf("\nDeseja desempilhar de que pilha (1 ou 2)?\n");
			scanf("%d", &p);
			// chamada desempilhar
			desempilhar(&topo1, pilha);
			break;
		}
		case 4:
		{
			printf("\nSaindo...");
			break;
		}
		default:
		{
			printf("\nOp��o inv�lida!");
			break;
		}
		}
	} while (op != 4);
}
