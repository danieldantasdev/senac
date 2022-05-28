#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int soma (int s1, int s2)
{
int resultado;
resultado = s1+s2;
return(resultado);
}
 
int subtra (int sub1, int sub2)
{
int resultado;
resultado = sub1-sub2;
return (resultado);
}
 
int multi (int m1, int m2)
{
int resultado;
resultado = m1*m2;
return (resultado);
}
 
int divi (int d1, int d2)
{
int resultado;
if (d1==0 && d2==0){
printf ("Nao é possivel dividir por zero!!!");
}
else{
resultado = d1/d2;
}
return (resultado);
}
 
int main (void)
{
int op, num1, num2, numfato, bas, expo, resultado;
 
 do {
 		
 	
 		printf ("0 - Sair");
		printf ("\n1 - Adicao (+)\n");
		printf ("2 - Subtracao (-)\n");
		printf ("3 - Multiplicacao (*)\n");
		printf ("4 - Divisao (/)\n");
		printf ("\nEscolha a operacao a ser realizada: ");
		scanf ("%d", &op);
		
		if(op > 0 && op < 5) {
			printf("\nDigite o primeiro valor: ");
			scanf("%d",&num1);
			printf("\nDigite o segundo valor: ");
			scanf("%d",&num2);
		}
 
switch (op){
	case 1: 
		printf ("\nA operacao escolhida foi ADICAO\n");
		resultado=soma(num1, num2);
		printf ("\nO resultado da operacao e: %d\n\n", resultado);
		break;
	 
	case 2:
		printf ("\nA operacao escolhida foi SUBTRACAO\n");
		resultado=subtra(num1, num2);
		printf ("\nO resultado da operacao e: %d\n\n", resultado);
		break;
	 
	case 3:
		printf ("\nA operacao escolhida foi MULTIPLICACAO\n");
		resultado=multi(num1, num2);
		printf ("\nO resultado da operacao e: %d\n\n", resultado);
		break;
	 
	case 4:
		printf ("\nA operacao escolhida foi DIVISAO\n");
		resultado=divi(num1, num2);
		printf ("\nO resultado da operacao e: %d\n\n", resultado);
		break;
 
	default:
		printf ("OPCAO INVALIDA\n");
		}
	} while(op != 0);

}