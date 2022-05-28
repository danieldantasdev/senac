#include <stdio.h>

int main(){
	int numeros [10], cont;
	for (cont = 0;cont<= 9;cont++){
		printf("Informe %d valor: ",cont+1);
		scanf("%d",&numeros[cont]);
	}
	return 0;
}
