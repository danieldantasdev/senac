#include <stdio.h>
#include <stdlib.h>
#define TAM 15


int main() {

int num, count = 0, impar = 0, soma = 0;

float media, mediaimpar;

for(int i = 0; i < TAM; i++){

printf("Informe um numero: ");

 scanf("%d", &num);

 if(num%3 == 0){

  soma = soma + num;

 }

 if(num > 29 && num < 121){

  count++;

 }

 if(num%2 == 1){

  mediaimpar = mediaimpar + num;

  impar++;

 }

}

mediaimpar = mediaimpar/impar;

printf("\nmedia impar: %.2f\nqtd de N entre 30 e 120: %d\nsoma de multiplos de 3: %d\n\n", mediaimpar, count, soma);

return 0;

}		
		
