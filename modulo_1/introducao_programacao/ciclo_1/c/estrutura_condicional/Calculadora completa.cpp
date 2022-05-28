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
 
int fatorial (int numfat)
{
int resultado, fat;
resultado=1;
for (fat=1;fat<=numfat;fat++)
{
resultado=resultado*fat;
}
return (resultado);
}
 
int potencia (int base, int exp)
{
int resultado;
if (exp==0)
return 1;
else if (exp==1)
return base;
 
return resultado=base*potencia(base, exp-1);
}
 
int main (void)
{
int op, num1, num2, numfato, bas, expo, resultado;
 
printf ("\n1 - Adicao (+)\n");
printf ("2 - Subtracao (-)\n");
printf ("3 - Multiplicacao (*)\n");
printf ("4 - Divisao (/)\n");
printf ("5 - Fatoral (!)\n");
printf ("6 - Potenciacao (^)\n");
printf ("\nEscolha a operacao a ser realizada:\n");
 
scanf ("%d", &op);
 
switch (op){
case 1: 
printf ("A operacao escolhida foi ADICAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=soma(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 2:
printf ("A operacao escolhida foi SUBTRACAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=subtra(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 3:
printf ("A operacao escolhida foi MULTIPLICACAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=multi(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 4:
printf ("A operacao escolhida foi DIVISAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=divi(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 5:
printf ("A operacao escolhida foi FATORIAL\n");
printf ("Insira o numero a ter sua fatorial calculada:\n");
scanf("%d", &numfato);
resultado=fatorial(numfato);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 6:
printf ("A operacao escolhida foi POTENCIACAO\n");
printf ("Insira a base:\n");
scanf ("%d", &bas);
printf ("Insira o expoente:\n");
scanf ("%d", &expo);
resultado=potencia(bas,expo);
printf("O resultado da operacao é: %d\n", resultado);
break;
 
default:
printf ("OPCAO INVALIDA\n");
}
 
getch();
return 0;
}

p