#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *anterior, *proximo;
} No;

No *inicioE, *inicioD;

void inicializa_lista()
{
    inicioE = NULL;
    inicioD = NULL;
}

int lista_vazia()
{
    if (inicioE == NULL && inicioD == NULL)
        return 1;
    return 0;
}

No *cria_no(int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo != NULL)
    {
        novo->info = valor;
        novo->anterior = NULL;
        novo->proximo = NULL;
    }
    return novo;
}

void inserir_direita(int valor)
{
    No *novo = cria_no(valor);
    if (lista_vazia())
    {
        inicioD = novo;
    }
    else
    {
        No *aux = inicioD;
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novo;
        novo->anterior = aux;
    }
}

void inserir_esquerda(int valor)
{
    No *novo = cria_no(valor);
    if (lista_vazia())
    {
        inicioE = novo;
    }
    else
    {
        No *aux = inicioE;
        while (aux->anterior != NULL)
        {
            aux = aux->anterior;
        }
        aux->anterior = novo;
        novo->proximo = aux;
    }
}

void imprimir_lista()
{
    No *aux = inicioE;
    while (aux != NULL)
    {
        printf("%d ", aux->info);
        aux = aux->proximo;
    }
    printf("\n");
    aux = inicioD;
    while (aux != NULL)
    {
        printf("%d ", aux->info);
        aux = aux->anterior;
    }
    printf("\n");
}

int main()
{
    int valor, opcao;
    do
    {
        printf("\nMENU\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Imprimir lista\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            inserir_direita(valor);
            inserir_esquerda(valor);
        case 2:
            imprimir_lista();
        }
    } while (opcao != 0);
    return 0;
}