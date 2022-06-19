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

void remover_inicio()
{
    if (lista_vazia())
    {
        printf("Lista vazia\n");
    }
    else
    {
        No *aux = inicioL;
        inicioL = aux->proximo;
        free(aux);
    }
}

void remover_final()
{
    if (lista_vazia())
    {
        printf("Lista vazia\n");
    }
    else
    {
        No *aux = inicioL;
        No *ant = NULL;
        while (aux->proximo != NULL)
        {
            ant = aux;
            aux = aux->proximo;
        }
        if (ant == NULL)
        {
            inicioL = NULL;
        }
        else
        {
            ant->proximo = NULL;
        }
        free(aux);
    }
}

void maiorMenorElemento()
{
    if (lista_vazia())
    {
        printf("Lista vazia\n");
    }
    else
    {
        No *aux = inicioL;

        int maior = aux->info;
        int menor = aux->info;

        while (aux->proximo != NULL)
        {
            if (aux->info > maior)
            {
                maior = aux->info;
            }
            if (aux->info < menor)
            {
                menor = aux->info;
            }
            aux = aux->proximo;
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
        printf("4 - Remover primeiro elemento\n");
        printf("5 - Remover último elemento\n");
        printf("6 - Maior e menor elemento\n");
        printf("7 - Exibir lista\n");
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
            printf("Digite o valor que deseja remover: ");
            scanf("%d", &valor);
            remover(valor);
            break;
        case 4:
            remover_inicio();
            break;
        case 5:
            remover_final();
            break;
        case 6:
            maiorMenorElemento();
            break;
        case 7:
            exibir_lista();
            break;
        }
    } while (opcao != 0);
    return 0;
}