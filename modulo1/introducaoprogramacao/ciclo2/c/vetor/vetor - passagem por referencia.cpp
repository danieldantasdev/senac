#include <stdio.h>
#define max 5

int soma(int vet[]) {
	int i, s = 0;
	for(i = 0; i < max; i ++) {
		s = s + vet[i];
	}
	return s; 
}

int main(){
	int vet[max];
	int cont;
	for(cont = 0; cont < max; cont ++) {
		printf("Informe um valor: ");
		scanf("%d",&vet[cont]);
	}
	printf("\nSom dos elementos do vetor: %d\n", soma(vet));
	return 0;
}