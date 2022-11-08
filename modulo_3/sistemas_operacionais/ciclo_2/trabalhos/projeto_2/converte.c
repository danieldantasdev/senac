#include "stdbool.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

struct Page {
	char address[9];
	Page *next;	
};

int tamanhoPagina, tamanhoMemoria, numeroPaginas, operacoes=0, leituras=0, escritas=0, sucessos=0, faltas=0, writebacks=0, paginasUsadas=0;
float faults=0;
FILE *file;
Page *first, *last;
char *alg, *filePath, line[20], tmpAddress[9];


void LRU(char value[9]){
	NovaPagina(value);
	if(paginasUsadas == numeroPaginas)
		first = first->next;
}

void FIFO(char value[9]){
	NovaPagina(value);
	if(paginasUsadas == numeroPaginas)
		first = first->next;
}

void Aleatorio(char value[9]){
	escritas++;
	srand(time(NULL));	
	int index = rand() % paginasUsadas;
	Page *tmp = first;
	for(int i = 0; i < index; i++){
		tmp = tmp->next;
	}
	strcpy(tmp->address, value);
}

bool Procurar(char value[9]){
	Page *tmp = first, *prev = NULL;
	while(tmp != NULL){
		if(strcmp(tmp->address, value)==0){
			if(strcmp(alg, "lru") == 0){
				if(prev != NULL){
					if(tmp->next != NULL)
						prev->next = tmp->next;							
				}
				else {
					first = first->next;
				}
				last->next = tmp;
				last = tmp;
				tmp->next = NULL;
			}

			return true;
		}
		prev = tmp;	
		tmp = tmp->next;
	}
	return false;
}

void TrocarPagina(char value[9]){
	if(strcmp(alg, "lru") == 0){
		LRU(value);
	}
	else if(strcmp(alg, "Aleatorio") == 0){
		Aleatorio(value);
	}
	else if(strcmp(alg, "fifo") == 0){
		FIFO(value);
	}
	writebacks++;
}

void NovaPagina(char value[9]){
	Page *current = (Page*)malloc(sizeof(Page));
	strcpy(current->address, value);
	current->next = NULL;
	
	if(paginasUsadas == 0){
		first = current;
		last = first;
	}
	else {
		last->next = current;
		last = current;
	}
	
	if(paginasUsadas < numeroPaginas)
		paginasUsadas++;
	
	escritas++;
}

void EscreverEndereco(char value[9]){
	if(paginasUsadas < numeroPaginas){
		NovaPagina(tmpAddress);
	}
	else{
		faults++;
		TrocarPagina(tmpAddress);
	}
}

void LimparMemoria(){
	Page *tmp = first;
	while(tmp != NULL){
		free(tmp);
		tmp = tmp->next;
	}
	fclose(file);
}

int main(int argc, char *argv[]){
	alg = argv[1];
	filePath = argv[2];
	tamanhoPagina = atoi(argv[3]);
	tamanhoMemoria = atoi(argv[4]);

	if(tamanhoPagina < 2 || tamanhoPagina > 64){	
		printf("ERRO: O tamanho de cada pagina deve estar entre 2 e 64.");
		return 0;
	}
		
	if(tamanhoMemoria < 128 || tamanhoMemoria > 16384){
		printf("ERRO: O tamanho da memoria deve estar entre 128 e 16384.");
		return 0;
	}	
	
	if(strcmp(alg, "lru") && strcmp(alg, "fifo") && strcmp(alg,"Aleatorio")){
		printf("ERRO: O algoritmo deve ser lru, fifo ou Aleatorio.");
		return 0;	
	}
	
	numeroPaginas = tamanhoMemoria/tamanhoPagina;
		
	if(strlen(filePath) > 0){
		file = fopen(filePath, "r");
		while(fgets(line, 20, file) != NULL){
			operacoes++;
			strncpy(tmpAddress, line, 8);
			tmpAddress[8] = '\0';
			if(line[9] == 'W' || line[9] == 'w'){
				EscreverEndereco(tmpAddress);
			}
			else if(line[9] == 'R' || line[9] == 'r'){				
				if(Procurar(tmpAddress)){
					sucessos++;	
				}
				else{
					faltas++;
					EscreverEndereco(tmpAddress);
				}
				leituras++;
			}
			else{
				printf("ERRO: Os dados do arquivo de entrada estao em formato incorreto.");
				return 0;	
			}	
		}
	}
	else{
		printf("ERRO: Arquivo de entrada inválido.");
		return 0;
	}
	
	printf("\n------------------------------------------------\n");
	printf("\nExecutando o simulador...\n");
	printf("Tamanho da memoria: %iKB\n", tamanhoMemoria);
	printf("Tamanho das paginas: %iKB\n", tamanhoPagina);
	printf("Tecnica de reposicao: %s\n", alg);
	printf("Numero de paginas: %i\n", numeroPaginas);
	printf("Operacoes no arquivo de entrada: %i\n", operacoes);
	printf("Operacoes de leitura: %i\n", leituras);
	printf("Operacoes de escrita: %i\n", escritas);
	printf("Page sucessos: %i\n", sucessos);
	printf("Page faltas: %i\n", faltas);
	printf("Numero de writebacks: %i\n", writebacks);
	printf("Taxa de page fault: %f%% \n", faults/escritas*100);
	printf("\n------------------------------------------------\n");
	
	LimparMemoria();
		
	return 0;
}