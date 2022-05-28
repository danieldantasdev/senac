/*Faça programa que leia dez numeros inteiros positivos e informw, para cada um dels, 
os seus divisores. Deve implementar procedimento ou função que recebe, por parametro, 
um valor inteiro e positivo e apesenta esses divisores do valor*/

//Divisores de (10) = 1, 2, 5, 10;
//Divispres de (n) = 1 ...n;

#include <stdio.h>
//procedimento, uma vez que o valor não precisa ser voltado em outro lugar
//usamos duas variaveis, porque o n não pode mudar / variar
void divisores(int n){
	
	int cont;
	for(cont = 1; cont <= n; cont++){
		if(n % cont == 0){
			printf("%d ", cont);
		}
	}
}

int main(){
	
	int num, cont;
	for(cont =1; cont <= 10; cont++){
		printf("\nInforme um valor positivo: ");
		scanf("%d",&num);
		divisores(num);
	}
	
	return 0;
}