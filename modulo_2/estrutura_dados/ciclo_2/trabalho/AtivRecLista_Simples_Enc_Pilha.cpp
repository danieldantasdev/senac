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
void empilhar(int valor){
	no* aux;
	aux = cria_no(valor);
	aux -> prox = pilha;
	pilha = aux;
}
//definir fun��o remover/desempilhar


int main() {
  int num;
  inicializa_pilha();
  int op;
  do{
  	   printf("\n1- Inserir na pilha");
  	   printf("\n2- Exibir topo");
  	   printf("\n3- Remover");
  	   printf("\n4- Sair");
       printf("\nInforme sua op��o:");
       scanf("%d",&op);
       switch(op){
       		case 1:{
				printf("\nInforme o valor que deseja inserir: ");
				scanf("%d",&num);
				//Chamar a fun��o de inserir
				break;
			}
			case 2:{
				exibirTopo();
				break;
			}
			case 3:{
				//Chamar a fun��o de remover
				break;
			}
			case 4:{
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

