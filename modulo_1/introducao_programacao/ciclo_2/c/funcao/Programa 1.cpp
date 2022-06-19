#include <stdio.h>
#include<stdlib.h>

float calculaH(float numHE, float numHF){
	float h;
	h = numHE - (numHF/3);
	return h;
}

float verificaGratificacao(float h){
	if (h < 5){
		return 200;
	}
	else{//h >= 5
		if(h >= 5 && h < 10){
			return 300;
		}
		else{
			if(h >= 10 && h < 20){
				return 400;
			}
			else{
				return 500;
			}
		}
	}
}

int main(){
	
	float numHExtras, numHFaltas, h;
	printf("Informe o número de horas extras realizadas: ");
	scanf("%f",&numHExtras);
	printf("Informe o número de falta em horas: ");
	scanf("%f",&numHFaltas);
	h = calculaH(numHExtras, numHFaltas);
	printf("\nValor da gratificacao: %.2f", verificaGratificacao(h));	
	
	return 0;
}