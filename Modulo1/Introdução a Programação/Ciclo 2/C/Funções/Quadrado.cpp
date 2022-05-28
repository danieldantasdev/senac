#include <stdio.h>
#include <locale.h>
int n1;
int square(){ //tem obrigatoriedade define também que é uma função
	int aux = n1*n1;
	return(aux); //Define que é uma função
	
}

int main(){
	int n2;
		setlocale(LC_ALL, "Portuguese");
	printf("Entre com um número: ");
	scanf("%d",&n1);
	n2=square();
	printf("O seu quadrado vale:%d\n", n2);
}

//variável global pode ser usada em qualquer parte do programa