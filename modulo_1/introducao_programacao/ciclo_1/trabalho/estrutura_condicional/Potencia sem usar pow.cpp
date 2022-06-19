/*Como você faria para calcular uma potência se não tivesse a função pow?

Faça um programa, sem usar a biblioteca <math.h>, que leia uma base a e um expoente b e defina uma função que calcule a potência ab. Na função main, você deve chamar essa função e exibir o resultado.

Obs.:

Considere a>0   e a^0=1 e a^1=a*/

#include <stdio.h>
int potencia(int base, int expoente){
 if(expoente == 0)
 return 1;
 else
 return (base * potencia(base, expoente-1));
}
int main(){
 int base = 2, expoente = 8, resultado;
 resultado = potencia(base,expoente);
 printf("%d elevado a %d = %d", base, expoente,resultado);
 return 0;
}
