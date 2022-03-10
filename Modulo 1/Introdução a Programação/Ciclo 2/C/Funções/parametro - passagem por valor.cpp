//Passagem de Parâmetros

/*permitem fazer trocas de informacoes de uma parte de código com outra

//parametro - passagem por valor

/*Na passagem por valor uma cópia do valor
da variável é passado para a função.
Neste caso, a função que recebe este valor,
ao fazer modificações no parâmetro, não
estará alterando o valor original, que
somente existe na função que a chamou*/

#include <stdio.h>
int soma_dobro (int a, int b){
int soma;
a = 2* a; 
b = 2 *b;
soma = a + b;
return soma;
}

int main (){
int x, y, res;
printf ("Entre com o primeiro numero: ");
scanf ("%d",&x);
printf ("Entre com o segundo numero: ");
scanf ("%d",&y);
res=soma_dobro(x, y);
printf ("Soma: %d",res);
}