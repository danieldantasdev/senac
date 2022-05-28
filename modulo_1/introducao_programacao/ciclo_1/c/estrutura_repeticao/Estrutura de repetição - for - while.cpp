#include <stdio.h>

int main (){
	int cont;
	/*for(cont=1; cont<=10;cont++){
		printf("%d",cont);
	}*/
	cont = 1;//inicialização
	while(cont <=10){
		printf("%d",cont);
		cont = cont + 1; //ou cont++ //atualização da variável
	}
	return 0;
}