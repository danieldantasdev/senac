#include <stdio.h>
#include <stdlib.h>

//Integrantes: Daniel Dantas,Pedro Rangel,Diogo Di Blasi
//float, dinhiero, há chances de ter valores com ,
/*if e esle precisam estar conectado com as condições, ou escrevendo if e else para tudo, 
ou escrevmos if para tudo*/
//if e esle estarão sempre combinados
/*programar com ifs independentes, o programa vai usar memória desnecessária,
porque vai testar todos os ifs*/
//Usando if e esle, poupariamos processamento e memória
//para exibir o simbolo de %, usamos duas %%

int main (){
    float saldoM, creditoD;
    printf("Informe seu saldo medio do ultimo ano: ");
    scanf("%f",&saldoM);


    if (saldoM >= 0 && saldoM <= 600){
        printf("\nNenhum credito disponivel\n\n");
    }
	if(saldoM >= 600.01 && saldoM <= 1000){
		creditoD = saldoM * 0.4;
    	printf("\nO credito disponivel e: %.2f\n",creditoD);
        printf("\nSeu saldo medio anual foi: %.2f\n\n",saldoM);
		}
	
	if(saldoM >= 1000.01 && saldoM <= 2500){
		creditoD = saldoM * 0.5;
    	printf("\nO credito disponivel e: %.2f\n",creditoD);
        printf("\nSeu saldo medio anual foi: %.2f\n\n",saldoM);
    		}
			
	if(saldoM > 2500){
		creditoD = saldoM * 0.6;
    	printf("\nO credito disponivel e: %.2f\n",creditoD);
        printf("\nSeu saldo medio anual foi: %.2f\n\n",saldoM);
		}
    		

system("pause");
}