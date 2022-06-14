#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no* prox;
}no;

no* pilha;

void inicializa_pilha(){
	pilha = NULL;
}

no* cria_no (int valor){
	no* aux;
	aux = (no*) malloc (sizeof(no));
 	aux -> info = valor;
	aux -> prox = NULL;
	return aux;
} 

int pilha_vazia ()
{
	if (pilha== NULL)
		return 1;
	return 0;
}

void exibirTopo() {
	no * aux;
	if(!pilha_vazia()){
		aux = pilha;
		printf("\nTopo: %d\n",aux->info);	
	}
	else{
		printf("\nPilha vazia!\n");
	}
} 

//definir inserir/empilhar
void empilhar (int valor){
    no* aux;
    if(pilha_vazia()){
        pilha = cria_no(valor);
    }else{
        aux = pilha;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = cria_no(valor);
    }
}
//definir fun��o remover/desempilhar
void desempilhar(){
    no* aux;
    if(!pilha_vazia()){
        aux = pilha;
        pilha = pilha->prox;
        free(aux);
    }else{
        printf("\nPilha vazia!\n");
    }
} 

void exibirPilha(){
    no* aux;
    if(!pilha_vazia()){
        aux = pilha;
        while(aux != NULL){
            printf("%d\n",aux->info);
            aux = aux->prox;
        }
    }else{
        printf("\nPilha vazia!\n");
    }
}


int main() {
  int num;
  inicializa_pilha();
  int op;
  do{
  	   printf("\n1- Inserir na pilha");
  	   printf("\n2- Exibir topo");
  	   printf("\n3- Remover");
       printf("\n4- Exibir pilha");
  	   printf("\n5- Sair");
       printf("\nInforme sua op��o:");
       scanf("%d",&op);
       switch(op){
       		case 1:{
				printf("\nInforme o valor que deseja inserir: ");
				scanf("%d",&num);
                empilhar(num);
				break;
			}
			case 2:{
				exibirTopo();
				break;
			}
			case 3:{
                desempilhar();
				break;
			}
            case 4:{
                exibirPilha();
                break;
            }
			case 5:{
				printf("\nSaindo...\n");
				break;
			}
			default:{
				printf("\nOp��o inv�lida!\n");
				break;
			}
	   }
	system("Pause");
	system("cls"); 
  }while(op!=4);
}