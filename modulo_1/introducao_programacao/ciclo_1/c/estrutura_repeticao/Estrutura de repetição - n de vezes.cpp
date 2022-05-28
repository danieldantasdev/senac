
#include <stdio.h>

int main (){
	
	int cont, max;
		printf("Informe quantas vezes voce deseja repetir: ");
		scanf("%d",&max);
	for(cont = 1; cont <= max; cont ++){
		printf("%d\n",cont);
	}
	return 0;
}