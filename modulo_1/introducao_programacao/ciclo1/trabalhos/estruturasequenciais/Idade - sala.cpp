#include <stdio.h>
#include <stdlib.h>
/* ess biblioteca sempre vai estar no incio*/
//esaa biblioteca

/* Uma escola planejou uma atividade extra em 
um sábado com seus alunos para a realização de uma gincana. Para isso, 
a coordenadora criou uma tabela para divisão dos alunos em salas específicas de acordo com suas idades.
 Com base na tabela abaixo, 
faça um programa que leia a idade da criança e exiba a sala que ela deve se direcionar.
Idade 0 a 2  => sala 1
Idade 3 a 5 => sala 2
Idade 6 a 8 => sala 3
Idade 9 a 11 => sala 4 */

/*float - 6 digitos
double - 12 digitos*/

int main() {

    float idade;
    printf("Informe a idade da crianca: ");
    scanf("%f",&idade);

    if ( idade >= 0 && idade <= 2) 
	printf("\nsala 1\n\n");

    if ( idade >= 3 && idade <= 5) 
	printf("\nsala 2\n\n");

    if ( idade >= 6 && idade <= 8) 
	printf("\nsala 3\n\n");    

    if ( idade >= 9 && idade <= 11) 
	printf("\nsala 4\n\n");
	
	system ("\npause\n");


}