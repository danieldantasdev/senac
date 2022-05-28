
//impar=impar + 1, é necessário usar impar = o para não alterar o resultado
/*	printf("Informe um numero %d: ", cont); ou printf("Informe um numero:")
                                                scanf("%d",&num);*/
                                                
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int num, cont, par = 0, impar = 0;
	for(cont = 1; cont <= 15; cont++){
		printf("Informe um numero: ",num);
		scanf("%d",&num);
		if(num % 2 == 0){
			par = par + num;
		}
		else{
			impar = impar + 1;
		}
	}
printf("\nA soma dos pares: %d\nA quantidade de impares: %d", par, impar);

	
return 0;

}		
		
