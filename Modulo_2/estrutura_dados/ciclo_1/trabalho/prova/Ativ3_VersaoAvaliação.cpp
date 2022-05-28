#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define max 20

typedef struct{
	int codigo;
	char nome[50];
	char especialidade[30];	
}str_medico;

int lista_vazia(int n){
	if (n==-1){
		return 1;
	}
	return 0;
}

int lista_cheia(int n){
	if(n==max-1)
		return 1;
	return 0;
}

int busca_medico(int n, int codigo, str_medico *lista){
	int i;
	for (i=0;i<=n;i++){
		if ((lista[i].codigo==codigo))
			return i;
	}
	return -1;
}

void imprimeLista(int n, str_medico *lista){
	if(!lista_vazia(n)){
		int i;
		printf("\n");
		for (i=0;i<=n;i++){
			printf("\nCódigo: %d",lista[i].codigo);
			printf("\nNome: %s",lista[i].nome);
			printf("\nEspecialidade: %s\n",lista[i].especialidade);
		}
		printf("\n");
	}
	else{
		printf("\nLista vazia!\n");
	}
}

void inserir(int *n, str_medico dados, str_medico *lista){
	if (!lista_cheia(*n)){
		if(busca_medico(*n,dados.codigo,lista)==-1){
			(*n)++;
			lista[*n]=dados;
		}
		else{
			printf("\nMédico já cadastrado!\n");
		}
	}	
	else{
		printf("\nLista cheia!\n");
	}
}

//implementar a função inserirPos
inserirPosicao(){
}

//implementar a função remover
removeredico(){

}


int main(){
	setlocale(LC_ALL,"");
	int n=-1,op, codigo;
	str_medico medico;
	str_medico lista[max];
	do{
		printf("\n1- Cadastrar médico");
		printf("\n2- Remover médico"); 
		printf("\n3- Exibir médico");
		printf("\n4- Sair");
		printf("\nEscolha sua opção: ");
		fflush(stdin);
		scanf("%d",&op);
		switch(op){
			case 1:{
				int tipo, pos;
				printf("\nCADASTRO DE MÉDICOS\n");
				//leitura
				printf("\nCódigo do médico? ");
				scanf("%d",&medico.codigo);
				printf("\nNome do médico?\n");
				fflush(stdin);
				gets(medico.nome);
				printf("\nEspecialidade?\n");
				fflush(stdin);
				gets(medico.especialidade);
				printf("\nQual tipo de inserção?\n1- Fim\n2- Posição específica\n");
				fflush(stdin);
				scanf("%d",&tipo);
				if(tipo==1)
					//chamada da função inserirFim
					inserir(&n,medico,lista);
				else{
					printf("Qual a posição? 1 a %d\n",n+1);
					scanf("%d",&pos);
					//chamada da função inserirPosicao

				}
				
				break;
			}
			case 2:{
				int cod;
				printf("\nEXECUTANDO REMOÇÃO\n");	
				printf("Digite o código do médico que deseja remover: ");
				scanf("%d",&cod);
				//CHAMADA DA FUNÇÃO REMOVER
				
				break;
			}
			case 3:{
				printf("\nIMPRESSÃO\n");
				imprimeLista(n,lista);
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
