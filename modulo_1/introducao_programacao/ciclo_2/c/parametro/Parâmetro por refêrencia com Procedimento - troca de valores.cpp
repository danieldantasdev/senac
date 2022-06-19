// Passagem de parâmetros por referência
// parâmtro está dentro da função e vai receber informações fora da função

#include<stdio.h>

void troca(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main(){
	int x, y;
	printf("Informe o valor da variável x: ");
	scanf("%d",&x);
	printf("Informe o valor da variável y: ");
	scanf("%d",&y);
	printf("\nAntes da troca\n");
	printf("\nx = %d\ny = %d",x , y);
	
	//troca
	troca(&x, &y);
	printf("\n\nDepois da troca\n");
	printf("\nx = %d\ny = %d",x , y);
	
	return 0;
}