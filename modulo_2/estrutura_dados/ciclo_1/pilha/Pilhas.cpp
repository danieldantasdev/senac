#include <stdio.h>
# define max 10

int pilha_vazia(int topo){
	if(topo == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int pilha_cheia(int topo){
	if(topo == max -1){
		return 1;
	}
	else{
		return 0;
	}	
}

void mostra_topo(int topo, int p[]){
	if(pilha_vazia(topo) == 0){	
	printf("\nTopo da pilha: %d\n",p[topo]);
	}
	else{
		printf("\nPilha vazia!!!\n,");
	}
}

void empilhar( int *topo, int p[], int aux){
	if(pilha_cheia(*topo) == 0){
		//empilhar
		(*topo)++;
		p[*topo] = aux;
	}else{
		printf("\nPilha cheia!!!\n,");
	}
}


int desempilhar(int *topo, int p[]){
    if (pilha_vazia(*topo) == 0)
    {
        printf("O elemento %d foi removido da pilha!",p[*topo]);
        (*topo)--;
    }
    else
        printf("Pilha vazia!");
}

int main(){
	
	int pilha[max];// tamanho da pilha
	int topo = -1; //pilha vazia
	int opcao;
	int valor;
	
// 	empilhar(&topo,pilha,5);
// // 	mostra_topo(topo,pilha);
// 	empilhar(&topo,pilha,4);
// // 	mostra_topo(topo,pilha);
// 	empilhar(&topo,pilha,1);
// 	mostra_topo(topo,pilha);
	
// 	desempilhar(&topo,pilha);
// 	mostra_topo(topo,pilha);
	
	
	do
    {
        printf("\nMENU\n");
        printf("1 - Mostrar topo\n");
        printf("2 - Empilhar\n");
        printf("3 - Desempilhar\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            mostra_topo(topo,pilha);
            break;
        case 2:
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &valor);
            empilhar(&topo,pilha,valor);
            break;
        case 3:
            printf("\nDigite o valor a ser removido: ");
            scanf("%d", &valor);
            desempilhar(&topo,pilha);
            break;
        case 0:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
        }
    } while (opcao != 3);
    return 0;
}
