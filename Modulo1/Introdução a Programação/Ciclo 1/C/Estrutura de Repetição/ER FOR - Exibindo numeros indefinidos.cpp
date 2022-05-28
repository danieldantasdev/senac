/*não sabemos quantos numeros são, por isso devemos perguntar se ele deseja ou nao informar um novo numero*/
#include <stdio.h>

int main(){
	int num, soma=0;
	char resp='s';
	while(resp=='s'||resp=='S'){
		printf("Informe um numero: ");
		scanf("%d",&num);
		soma=soma+num;
		printf("Deseja informar um novo numero? s ou n: ");
		fflush(stdin); //ele pega o enter e limpa, evitando o pulo de leitura;
		resp=getchar(); // ou scanf("%c,&resp);	
	}
	printf("\nSoma: %d ",soma);
}


/*int main(){
	int num, soma=0;
	int resp=1; //1-sim 0-nao
	while(resp=='s'||resp=='S'){
		printf("Informe um numero: ");
		scanf("%d",&num);
		soma=soma+num;
		printf("Deseja informar um novo numero? 1-sim  ou 0-na0: ");
		scanf("%d",&resp);
	}
	printf("\nSoma: %d ",soma);
}
*/