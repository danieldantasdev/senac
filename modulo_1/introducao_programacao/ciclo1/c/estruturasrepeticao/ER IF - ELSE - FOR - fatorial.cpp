#include <stdio.h>

int main(){
	int cont, fatorial=1,  num;
	printf("Informe um valor positivo para o fatorial: ");
	scanf("%d",&num);
	if(num<0){
		printf("\nNão existe fatorial de valores negativos!\n");
	}
	else{
		if(num==1 || num==0){
			printf("\nO fatorial de %d: 1,num");
		}
		else{
			for(cont=num;cont>=1;cont--){
				fatorial = fatorial * cont;
			}
			printf("Fatorial de %d: %d",num,fatorial);
		}
	}
}