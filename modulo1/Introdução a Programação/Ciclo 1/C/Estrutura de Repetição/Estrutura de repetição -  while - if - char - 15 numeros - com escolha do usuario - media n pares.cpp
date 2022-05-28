//buffer de memoria = captura o que foi escrito pelo teclado, so vai para variavel apertando o enter;
//enter é reconhecido como um caracter;
#include <stdio.h>

int main (){
	int num, contpar = 0;
	char resp = 's';
	float mediapar = 0;
	while(resp == 's' || resp == 'S'){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(num % 2 == 0){
			mediapar = mediapar + num; //mediapar += num;
			contpar = contpar + 1; //contpar++;
		}
		printf("Deseja inserir novo numero (s - Sim ou n - nao) ?");
		fflush(stdin);
		scanf("%c",&resp);
	}
	if(contpar > 0){
	mediapar = mediapar / contpar;
	printf("\nA media dos pares e: %.1f.",mediapar);
	}
	else{
		printf("\nNao foi informado numero par!\n");
	}
	return 0;
}