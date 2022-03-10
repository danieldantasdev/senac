#include <stdio.h>

int main (){
	int cont = 1, num, contpar = 0;
	float mediapar = 0;
	while(cont <=15){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(num % 2 == 0){
			mediapar = mediapar + num; //mediapar += num;
			contpar = contpar + 1; //contpar++;
		}
		cont++;
	}
	mediapar = mediapar / contpar;
	printf("\nA media dos pares e: %.1f.",mediapar);
	return 0;
}