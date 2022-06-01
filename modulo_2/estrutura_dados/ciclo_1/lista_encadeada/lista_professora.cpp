#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *proximo;
} No;

No *inicioL;

void cria_lista()
{
    inicioL == NULL;
}

int lista_vazia()
{
    if (inicioL == NULL)
        return 1;
    return 0;
}

No *cria_no(int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo != NULL)
    {
        novo->info = valor;
        novo->proximo = NULL;
    }
    return novo;
}

void inserir_inicio(int valor)
{
    No *novo = cria_no(valor);
    if (lista_vazia())
    {
        inicioL = novo;
    }
    else
    {
        novo->proximo = inicioL;
        inicioL = novo;
    }
}

void inserir_fim(int valor)
{
    No *novo = cria_no(valor);
    if (lista_vazia())
    {
        inicioL = novo;
    }
    else
    {
        No *aux = inicioL;
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}

void exibir_lista()
{
    No *aux = inicioL;
    while (aux != NULL)
    {
        printf("%d\n", aux->info);
        aux = aux->proximo;
    }
}

void remover(int valor)
{

    if (lista_vazia())
    {
        printf("Lista vazia\n");
    }
    else
    {
        No *aux = inicioL;
        No *ant = NULL;
        while (aux != NULL && aux->info != valor)
        {
            ant = aux;
            aux = aux->proximo;
        }
        if (aux == NULL)
        {
            printf("Elemento não encontrado\n");
        }
        else
        {
            if (ant == NULL)
            {
                inicioL = aux->proximo;
            }
            else
            {
                ant->proximo = aux->proximo;
            }
            free(aux);
        }
    }
}

int main()
{
    int valor, opcao;
    do
    {
        printf("\nMENU\n");
        printf("1 - Inserir elemento no inicio\n");
        printf("2 - Inserir elemento no final\n");
        printf("3 - Remover elemento\n");
        printf("4 - Exibir lista\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            inserir_inicio(valor);
            break;
        case 2:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            inserir_fim(valor);
            break;
        case 3:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            remover(valor);
            break;
        case 4:
            exibir_lista();
            break;
        }
    } while (opcao != 0);
    return 0;
}