#include <stdio.h>
#define pi 3.14

float volumeCaixa(float a, float b, float h){
	return(a* b *h);
}

float (volumeCilindro(float h, float r)){
	return (pi * h * r * r);
}

int main(){
	float a, b, h, r, volFinal;
	printf("Informe as medidas da caixa: ");
	printf("\n\nLargura: ");
	scanf("%f",&a);
	printf("\nComprimento: ");
	scanf("%f",&b);
	printf("\nAltura: ");
	scanf("%f",&h);
	printf("\nRaio: ");
	scanf("%f",&r);
	
	volFinal = volumeCaixa(a, b, h) - volumeCilindro(h, r);
	printf("\nVolume final: %.2f",volFinal);
}