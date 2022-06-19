/*Faça um programa que leia dois numeros inteiros (n1 e n2)
e implemente um procedimento que recebe esses dois numeros por parametro
e retorna-os em ordem crescente, isto é, no priemiro deve retornar o menor valor e no
segundo parametro, o maior valor. Apos a execução do procedimento, o programa deve
exibir o valores de n1 e n2*/

#include <stdio.h>

void ordem_crescente(int *a,int *b){
    if (*a > *b){
        int aux;
		aux = *a;
        *a = *b;
        *b = aux;
    }
}

/*==========OU===========

void ordem_crescente(int *a,int *b){
    if (*a <= *b){
        return;
    }
    else {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
*/

int main(){
	
	int n1, n2;
	printf("Digite dois numeros inteiros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    ordem_crescente(&n1, &n2);
    printf("n1 = %d , n2 = %d", n1, n2);
    return 0;
}