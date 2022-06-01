#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *proximo;
} No;

typedef struct
{
    No *inicio, *fim;
    int tam;
} Lista;

// void cria_lista()
// {
//     inicioL == NULL;
// }

// void cria_no(int valor)
// {
//     No *novo = (No *)malloc(sizeof(No));
//     novo->valor = valor;
//     novo->proximo = NULL;
// }

// int lista_vazia()
// {
//     if (inicioL == NULL)
//     {
//         /* code */
//         return 1
//     }
//     else
//     {
//         return 0
//     }
// }

// No *cria_no(int valor)
// {
//     No *novo = (No *)malloc(sizeof(No));
//     if (novo != NULL)
//     {
//         novo->valor = valor;
//         novo->proximo = NULL;
//     }
//     return novo;
// }

void lista_vazia(Lista *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
}

// inserção no início da lista
void inserirInicio(Lista *lista, int valor)
{
    No *novo = (No *)malloc(sizeof(No)); // cria um novo nó
    novo->info = valor;                  // (*novo).valor = valor

    if (lista->inicio == NULL)
    { // a lista está vazia
        novo->proximo = NULL;
        lista->inicio = novo;
        lista->fim = novo;
    }
    else
    { // a lista não está vazia
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    }
    lista->tam++;
}

// inserir no final da lista
void inserirFim(Lista *lista, int valor)
{
    No *novo = (No *)malloc(sizeof(No)); // cria um novo nó
    novo->info = valor;
    novo->proximo = NULL;

    if (lista->inicio == NULL)
    { // lista vazia
        lista->inicio = novo;
        lista->fim = novo;
    }
    else
    { // lista não vazia
        lista->fim->proximo = novo;
        lista->fim = novo;
    }
    lista->tam++;
}

// imprimir a lista
void imprimir(Lista *lista)
{
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n", lista->tam);
    while (inicio != NULL)
    {
        printf("%d ", inicio->info);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}

// remover um elemento da lista
void remover(Lista *lista, int valor)
{
    No *inicio = lista->inicio; // ponteiro para o início da lista
    No *noARemover = NULL;      // ponteiro para o nó a ser removido

    if (inicio != NULL && lista->inicio->info == valor)
    { // remover 1º elemento
        noARemover = lista->inicio;
        lista->inicio = noARemover->proximo;
        if (lista->inicio == NULL)
            lista->fim = NULL;
    }
    else
    { // remoção no meio ou no final
        while (inicio != NULL && inicio->proximo != NULL && inicio->proximo->info != valor)
        {
            inicio = inicio->proximo;
        }
        if (inicio != NULL && inicio->proximo != NULL)
        {
            noARemover = inicio->proximo;
            inicio->proximo = noARemover->proximo;
            if (inicio->proximo == NULL) // se o último elemento for removido
                lista->fim = inicio;
        }
    }
    if (noARemover)
    {
        free(noARemover); // libera a memória do nó
        lista->tam--;     // decrementa o tamanho da lista
    }
}

// função que remove e retorna o primeiro nó
No *removerPrimeiroNO(Lista *lista)
{
    if (lista->inicio != NULL)
    {
        No *no = lista->inicio;
        lista->inicio = no->proximo;
        lista->tam--;
        if (lista->inicio == NULL)
            lista->fim = NULL;
        return no;
    }
    else
        return NULL;
}

// procedimento que divide uma lista em duas
void dividirLista(Lista *lista, Lista *listaI, Lista *listaP)
{
    No *removido;
    while (lista->inicio != NULL)
    {
        removido = removerPrimeiroNO(lista);
        inserirFim(listaI, removido->info);
        free(removido);

        removido = removerPrimeiroNO(lista);
        if (removido != NULL)
        {
            inserirFim(listaP, removido->info);
            free(removido);
        }
    }
}

int main()
{
    Lista lista, listaI, listaP; // criação de 3 listas
    int opcao, valor;

    // inicialização das listas
    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tam = 0;

    listaI.inicio = NULL;
    listaI.fim = NULL;
    listaI.tam = 0;

    listaP.inicio = NULL;
    listaP.fim = NULL;
    listaP.tam = 0;

    do
    { // menu de opções
        printf("1 - Inserir no inicio\n2 - Imprimir\n3 - Inserir no fim\n4 - Remover\n6 - Dividir lista\n5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 2:
            printf("\nLista original:\n");
            imprimir(&lista);
            printf("\nLista impar:\n");
            imprimir(&listaI);
            printf("\nLista par:\n");
            imprimir(&listaP);
            break;
        case 3:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor);
            inserirFim(&lista, valor);
            break;
        case 4:
            printf("Digite um valor a ser removido: ");
            scanf("%d", &valor);
            remover(&lista, valor);
            break;
        case 5:
            printf("Finalizando...\n");
            break;
        case 6:
            dividirLista(&lista, &listaI, &listaP);
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}