#include <stdio.h>
#include <stdlib.h>

int main (){
	int num, contpar = 0, resp = 1;
	float mediapar = 0;
	
	while(resp == 1){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(num % 2 == 0){
			mediapar = mediapar + num; //mediapar += num;
			contpar = contpar + 1; //contpar++;
		}
		printf("Deseja inserir novo numero (1 - Sim ou 2 - nao) ?");
		scanf("%d",&resp);
	}
	if(contpar > 0){
	mediapar = mediapar / contpar;
	printf("\nA media dos pares e: %.1f.",mediapar);
	}
	else{
		printf("\nNao foi informado numero par!\n");

	}
		system ("pause");
		system("cls");
	return 0;
}