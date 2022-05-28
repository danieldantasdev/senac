#include <stdio.h>

int main(){
	int cont, num, soma=0;
	for(cont=1;cont<=20;cont++){
		printf("Informe um numero: ");
		scanf("%d",&num);
		soma=soma+num;
	}
	printf("\nSoma: %d", soma);
}