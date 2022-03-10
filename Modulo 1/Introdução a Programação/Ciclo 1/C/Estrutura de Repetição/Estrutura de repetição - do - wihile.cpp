#include <stdio.h>

int main(){
	int num;
	do{
		printf("Informe um numero positivo: ");
		scanf ("%d",&num);
	}
	while(num<0);
		printf("\nO valor ja pode ser usado para calcular o fatorial!");
}