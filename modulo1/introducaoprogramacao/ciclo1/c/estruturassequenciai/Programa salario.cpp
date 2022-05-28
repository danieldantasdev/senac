/*
Informe o Salario do usuario, depois informe seu novo salario com aumento de
15%
*/
	
	#include <stdio.h>
	
	int main(){
	float salario,salarioN;
	/*float é a variável*/
	
	printf("Informe o salario do usuario: ");
	/*printf é o que aparecera na tela do usuario*/
	
	scanf("%f",&salario);
	salarioN = salario + salario*0.15; //salario * (1 + 0.15);
	
	/*salarioN= salario*1.15*/
	
	printf("O novo salario: %.2f",salarioN);
	
	/* %.2f = informar quantas casas decimais teremos no programa, nesse caso duas*/
}
	
	
	