#include <stdio.h>
#include<stdlib.h>

float tmp_aterrisagem(float altura, float velocidade){
	return (altura/velocidade);
}

void msg_camada(float altura){
	if(altura >= 0 && altura <= 12000){
		printf("\nCamada: Troposfera\n");
	}
	else{
		if(altura >= 12001 && altura <= 50000){
				printf("\nCamada: Estratosfera\n");
			}
			else{
				if(altura >= 50001 && altura <= 80000){
				printf("\nCamada: Mesosfera\n");
				}
				else{
					if(altura >= 80001 && altura <= 500000){
					printf("\nCamada: Termosfera\n");
					}
					else{
						if(altura >= 500001 && altura <= 800000){
						printf("\nCamada: Exosfera\n");
						}
						else{
							printf("\nCamada inválida!\n");	
						}	
					}
				}						
			}			
		}
	}

int main(){
	
	float altura, velocidade;
	printf("Informe a altura em que se encontra a nave: ");
	scanf("%f",&altura);
	printf("Informe a velocidade daa nave: ");
	scanf("%f",&velocidade);
	msg_camada(altura);
	printf("\nTempo para atingir o solos: %.1f",tmp_aterrisagem(altura,velocidade));
		
	return 0;
}