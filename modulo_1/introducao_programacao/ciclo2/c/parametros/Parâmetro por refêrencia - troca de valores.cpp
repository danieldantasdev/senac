// Passagem de parâmetros por referência
// parâmtro está dentro da função e vai receber informações fora da função

#include<stdio.h>

int main(){
	int x, y, aux;
	printf("Informe o valor da variável x: ");
	scanf("%d",&x);
	printf("Informe o valor da variável y: ");
	scanf("%d",&y);
	printf("\nAntes da troca\n");
	printf("\nx = %d\ny = %d",x , y);
	
	aux = x;
	x = y;
	y = aux;
	
	printf("\nDepois da troca\n");
	printf("\nx = %d\ny = %d",x , y);
	
	return 0;
}