
//========Sem funcao==========


/*#include <stddio.h>

int main(){
	int n1,n2,soma;
	printf("Informe o primeiro valor ");
	scanf("%d",&n1);
	printf("Informe o segundo valor ");
	scanf("%d",&n2);
	soma = n1 = n2;
	printff("\nSoma: %d",soma);
	return 0;
}*/



//=========com funcao e parametro============

#include <stdio.h>
#include <locale.h>
int somar(int num1, int num2){
	int s;
	s = num1 + num2;
	return (s);
}

int main(){
	int n1,n2,soma;
	printf("Informe o primeiro valor ");
	scanf("%d",&n1);
	printf("Informe o segundo valor ");
	scanf("%d",&n2);
	soma = somar(n1,n2);
	printf("\nSoma: %d",soma);
	return 0;
}
