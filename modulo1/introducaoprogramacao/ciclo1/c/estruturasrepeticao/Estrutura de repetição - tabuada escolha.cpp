#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int cont, valor;
			printf("Qual a tabuada desejada: ");
			scanf("%d",&valor);
			for (cont = 0; cont<=10;cont++){
				printf("%d x %d = %d\n\n",cont,valor,cont*valor);
					
			}
			return 0;
			
	}
