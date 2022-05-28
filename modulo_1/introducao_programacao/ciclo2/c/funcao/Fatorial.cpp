/*Com base na definição de fatorial, já utilizada, faça um
programa que leia 10 números positivos e para cada
número calcule e exiba o fatorial correspondente.
O fatorial de um número deve ser calculado utilizando
uma função que recebe um valor inteiro como
parâmetro e retorna o resultado do fatorial.
4! = 4 * 3 * 2 *1*/

#include <stdio.h>

int fat (int numero){
	int f = 1; //vamos fazer uma série de multiplicações, por isso o numero 1 é ideal para começar
	while(numero>1){
		f = f * numero;
		numero--;
	}
	return (f);
}

int main(){
	int num, res;
	do{
		printf("Informe um valor positivo para o fatorial:  ");
		scanf("%d",&num);
}	while(num<0);
	
	res = fat(num);
	printf("\nFatorial de %d e: %d", num, res);
	
	printf("\n\nOU\n\n");
	
	printf("\nFatorial de %d e: %d", num, fat(num));
	//chamar a funçao
	//exibir o resultado	
}

//void = fazer consulta ou alteração de dados. não precisa devover o valor em outra parte do rpograma
//função é necessário devolver o valor ;