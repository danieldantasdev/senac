#include <stdio.h>
float produto(float num1,float num2){
	float resultado;
	/*resultado = num1 * num2;
	return(resultado); */
	//o return é unico, ou seja, so pode receber um valor
	return (num1*num2);
}
int main(){
	float n1,n2,res;
	printf("Informe o primeiro valor: ");
	scanf("%f",&n1);
	printf("Informe o segundo valor: ");
	scanf("%f",&n2);
	res = produto(n1,n2);
	printf("\nO produto de %.1f com %.1f: %.1f",n1,n2,res);
	return 0;
}