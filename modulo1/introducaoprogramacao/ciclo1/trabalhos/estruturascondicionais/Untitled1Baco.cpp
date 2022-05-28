#include <stdio.h>
#include <stdlib.h>

//Integrantes: Daniel Dantas,Pedro Rangel,Diogo Di Blasi

int main (){
    float saldoM, creditoD;
    printf("Informe seu saldo medio anual: ");
    scanf("%f",&saldoM);


    if (saldoM >= 0 && saldoM <= 600){
        printf("\nNenhum credito disponivel\n\n");
        
    }

    if (saldoM >= 600.01 && saldoM <= 1000){
    	creditoD = 0.4 * saldoM;
    	printf("\nO credito disponivel para emprestimo e: %.1f\n",creditoD);
        printf("\nSeu saldo medio anual foi: %.2f\n\n",saldoM);
        
    }

    if (saldoM >= 1000.01 && saldoM <= 2500){
        creditoD = 0.5 * saldoM;
    	printf("\nO credito disponivel e: %.2f\n",creditoD );
        printf("\nSeu saldo medio anual foi: %.2f\n\n",saldoM);
    }

    if (saldoM > 2500){
        creditoD = 0.6 * saldoM;
    	printf("\nO credito disponivel e: %.2f\n",creditoD );
        printf("\nSeu saldo medio anual foi: %.2f\n\n",saldoM);
    }
        

system("pause");
}