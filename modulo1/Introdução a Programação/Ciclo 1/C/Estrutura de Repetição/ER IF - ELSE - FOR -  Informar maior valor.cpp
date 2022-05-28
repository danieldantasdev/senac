#include <stdio.h>
#include <locale.h>


int main(){
	int cont, numero, maior;
	printf("Informe um valor: ");
	scanf("%d",&maior);
	for(cont=2;cont<=10;cont++){
		printf("Informe um valor: ");
		scanf("%d",&numero);
		if(numero>maior){
			maior=numero;
		}
	}
	printf("Voce informou os 10 numeros, portanto o maior valor informado foi: %d", maior);
	return 0;
}
