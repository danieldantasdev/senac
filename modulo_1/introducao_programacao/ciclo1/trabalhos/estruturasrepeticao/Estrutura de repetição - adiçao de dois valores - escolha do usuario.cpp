#include <stdio.h>
/*faca um programa, com while, para o usuario realizar adição entre dois valores,
enqunto ele desejar*/

int main (){
	int num1, num2, resp;
	printf("\Deseja realizar a operacao de soma de dois valores\n1-Sim\n2-Nao\n");
	scanf("%d",&resp);
	while(resp == 1){
		printf("\nDigite o primeiro numero: ");
		scanf("%d",&num1);
		printf("\nDigite o segundo numero: ");
		scanf("%d",&num2);
		printf("\nA soma de %d e %d = %d.\n\n",num1,num2,num1+num2);
		printf("\nDeseja realizar a operacao novamente?\n1-Sim\n2-Nao\n");
		scanf("%d",&resp);
	}
	return 0;
}