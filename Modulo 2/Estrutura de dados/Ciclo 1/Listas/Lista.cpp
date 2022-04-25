#include <stdio.h>
#define M 10
// exibir os elementos da lista
void exibir(int lista[], int n)
{
    int i;
    // lista está vazia?
    if (n < 0)
    {
        printf("\nLista vazia!");
    }
    else
    {
        printf("\nIMPRESSÃO\n");
        for (i = 0; i <= n; i++)
        {
            printf("%d ", lista[i]);
        }
        printf("\n");
    }
}

int busca(int lista[], int n, int valor)
{
    int i = 0;
    while (i <= n)
    {
        if (lista[i] == valor)
            return i;
        i++;
    }
    return -1;
}

void inserir(int lista[], int valor, int *n)
{
    // verifica se tem espaço para armazenar novo valor
    if (*n < (M - 1))
    {
        // valor a inserir não está na lista
        if (busca(lista, *n, valor) == -1)
        {
            (*n)++;
            lista[*n] = valor;
        }
        else
        {
            printf("\nValor já cadastrado na lista!\n");
        }
    }
    else
    {
        printf("\nLista cheia!\n");
    }
}

void remover(int lista[], int valor, int *n)
{
    int i = 0;
    // valor a remover está na lista
    if (*n < 0)
    {
        printf("\nLista vazia!\n");
    }
    else if (busca(lista, *n, valor) != -1)
    {
        while (i <= *n)
        {
            if (lista[i] == valor)
            {
                while (i < *n)
                {
                    lista[i] = lista[i + 1];
                    i++;
                }
                (*n)--;
                break;
            }
            i++;
        }
    }
    else
    {
        printf("\nValor não encontrado na lista!\n");
    }
}

int main()
{
    int lista[M];
    int n = -1;
    int valor;
    int opcao;
    do
    {
        printf("\nMENU\n");
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Exibir\n");
        printf("4 - Sair\n");
        printf("\nDigite a opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nDigite o valor a inserir: ");
            scanf("%d", &valor);
            inserir(lista, valor, &n);
            break;
        case 2:
            printf("\nDigite o valor a remover: ");
            scanf("%d", &valor);
            remover(lista, valor, &n);
            break;
        case 3:
            exibir(lista, n);
            break;
        case 4:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
        }
    } while (opcao != 4);
    return 0;

    // int lista[M], valor;
    // int n = -1;
    // inserir(lista,6,&n);
    // inserir(lista,5,&n);
    // inserir(lista,8,&n);
    // exibir(lista,n);
    // printf("\nInforme o valor desejado: ");
    // scanf("%d",&valor);
    // int res = busca(lista, n, valor);
    // if(res==-1)
    // 	printf("\nElemento não encontrado!\n");
    // else
    // 	printf("\nElemento %d encontrado na posição %d\n",valor,res);
}