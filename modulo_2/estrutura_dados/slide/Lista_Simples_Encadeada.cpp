#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no* prox;
}no;

no* inicioL;

void inicializa_lista ()
{
	inicioL= NULL;
}

no* cria_no (int valor)
{
	no* aux;
	aux = (no*) malloc (sizeof(no));
 	aux -> info = valor;
	aux -> prox = NULL;
	return aux;
} 

int lista_vazia ()
{
	if (inicioL== NULL)
		return 1;
	return 0;
}

void percorrer () {
	if(!lista_vazia()){
		no * aux;
		aux = inicioL;
 		while (aux!= NULL) {
			printf("%d ",aux->info);
			aux = aux->prox;
    	}
    	printf("\n");
	}
	else{
		printf("\nLista vazia!\n");
	}
	
} 

void inserir_ini (int valor) {
	no *  aux = cria_no(valor);
	aux -> prox = inicioL;
	inicioL = aux;
}

void inserir_fim(int valor) {
	no *aux, *p;
	p = cria_no(valor);
	if (lista_vazia()){
		inicioL=p;
	}
	else{
		aux = inicioL;
		while (aux->prox != NULL)
			aux = aux -> prox;
		aux->prox = p;
	}
}

void remover(int valor) {
	no *  aux; no* ant;
	ant = NULL;
	aux = inicioL;
	if (lista_vazia()){
		printf("Lista vazia!");
	}
	else{
		while ((aux!=NULL) && (aux->info!=valor))
		{
			ant = aux;
			aux = aux -> prox;
		}
		if(aux==NULL)
			printf("\nElemento não existe na lista.\n");
		else{
			if (ant == NULL)
				inicioL = aux->prox;
			else
				ant -> prox = aux -> prox;
			free(aux);	
		}	
	}
	
}

int main()
{
  int num;
  inicializa_lista();
  int op,op2;
  no *aux;
  do{
  	   printf("\n1- Inserir na lista");
  	   printf("\n2- Exibir todos os elementos");
  	   printf("\n3- Remover um valor");
  	   printf("\n4- Sair");
       printf("\nInforme sua opção:");
       scanf("%d",&op);
       switch(op){
       		case 1:{
       			printf("Deseja inserir no início(1) ou no fim (2)? ");
       			scanf("%d",&op2);
       			printf("\nInforme o valor que deseja inserir: ");
				scanf("%d",&num);
				if(op2==1)
					inserir_ini(num);
				else
					inserir_fim(num);
				break;
			}
			case 2:{
				percorrer();
				break;
			}
			case 3:{
				printf("\nInforme o valor a remover: ");
				scanf("%d",&num);
				remover(num);
				break;
			}
			case 4:{
				printf("\nSaindo...\n");
				break;
			}
			default:{
				printf("\nOpção inválida!\n");
				break;
			}
	   }
	system("Pause");
	system("cls"); 
  }while(op!=4);


}


