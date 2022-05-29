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

void buscaSequencial(int lista[], int n)
{
    int i, valor;
    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &valor);
    i = busca(lista, n, valor);
    if (i != -1)
    {
        printf("\nValor %d encontrado na posição %d\n", valor, i);
    }
    else
    {
        printf("\nValor %d não encontrado na lista!\n", valor);
    }
}

void buscaBinaria(int lista[], int n)
{
    int i, inicio, fim, meio, valor;
    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &valor);
    inicio = 0;
    fim = n;
    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;
        if (lista[meio] == valor)
        {
            printf("\nValor %d encontrado na posição %d\n", valor, meio);
            break;
        }
        else if (lista[meio] < valor)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    if (inicio > fim)
    {
        printf("\nValor %d não encontrado na lista!\n", valor);
    }
}

void selectionSort(int lista[], int n)
{
    int i, j, min, aux;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j <= n; j++)
        {
            if (lista[j] < lista[min])
                min = j;
        }
        aux = lista[i];
        lista[i] = lista[min];
        lista[min] = aux;
    }
}

void bubbleSort(int lista[], int n)
{
    int i, j, aux;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

void insertionSort(int lista[], int n)
{
    int i, j, aux;
    for (i = 1; i <= n; i++)
    {
        aux = lista[i];
        j = i - 1;
        while (j >= 0 && lista[j] > aux)
        {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = aux;
    }
}

void quickSort(int lista[], int inicio, int fim)
{
    int i, j, pivo, aux;
    i = inicio;
    j = fim;
    pivo = lista[(i + j) / 2];
    do
    {
        while (lista[i] < pivo)
            i++;
        while (lista[j] > pivo)
            j--;
        if (i <= j)
        {
            aux = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    if (inicio < j)
        quickSort(lista, inicio, j);
    if (i < fim)
        quickSort(lista, i, fim);
}

int main()
{
    int lista[M], n = 0, opcao, valor, i;
    do
    {
        printf("\nMENU\n");
        printf("1 - Imprimir lista\n");
        printf("2 - Inserir valor\n");
        printf("3 - Remover valor\n");
        printf("4 - Busca sequencial\n");
        printf("5 - Busca binária\n");
        printf("6 - Selection Sort\n");
        printf("7 - Bubble Sort\n");
        printf("8 - Insertion Sort\n");
        printf("9 - Quick Sort\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            exibir(lista, n);
            break;
        case 2:
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &valor);
            inserir(lista, valor, &n);
            break;
        case 3:
            printf("\nDigite o valor a ser removido: ");
            scanf("%d", &valor);
            remover(lista, valor, &n);
            break;
        case 4:
            buscaSequencial(lista, n);
            break;
        case 5:
            buscaBinaria(lista, n);
            break;
        case 6:
            selectionSort(lista, n);
            break;
        case 7:
            bubbleSort(lista, n);
            break;
        case 8:
            insertionSort(lista, n);
            break;
        case 9:
            quickSort(lista, 0, n);
            break;
        case 0:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
        }
    } while (opcao != 9);
    return 0;
}

// int main()
// {
//     int lista[M];
//     int n = -1;
//     int valor;
//     int opcao;
//     do
//     {
//         printf("\nMENU\n");
//         printf("1 - Inserir\n");
//         printf("2 - Remover\n");
//         printf("3 - Exibir\n");
//         printf("4 - Sair\n");
//         printf("\nDigite a opção: ");
//         scanf("%d", &opcao);
//         switch (opcao)
//         {
//         case 1:
//             printf("\nDigite o valor a inserir: ");
//             scanf("%d", &valor);
//             inserir(lista, valor, &n);
//             break;
//         case 2:
//             printf("\nDigite o valor a remover: ");
//             scanf("%d", &valor);
//             remover(lista, valor, &n);
//             break;
//         case 3:
//             exibir(lista, n);
//             break;
//         case 4:
//             printf("\nSaindo...\n");
//             break;
//         default:
//             printf("\nOpção inválida!\n");
//             break;
//         }
//     } while (opcao != 4);
//     return 0;

//     // int lista[M], valor;
//     // int n = -1;
//     // inserir(lista,6,&n);
//     // inserir(lista,5,&n);
//     // inserir(lista,8,&n);
//     // exibir(lista,n);
//     // printf("\nInforme o valor desejado: ");
//     // scanf("%d",&valor);
//     // int res = busca(lista, n, valor);
//     // if(res==-1)
//     // 	printf("\nElemento não encontrado!\n");
//     // else
//     // 	printf("\nElemento %d encontrado na posição %d\n",valor,res);
// }