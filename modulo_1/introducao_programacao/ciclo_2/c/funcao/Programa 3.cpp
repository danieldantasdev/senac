#include <stdio.h>
#include<stdlib.h>

int validaTriangulo(int a, int b, int c){
	if((a <= (b + c)) && (b <= (a + c)) && (c <= (b + a))){
		return 1;
	}
	else{ 
		return 0;
	}
}

void tipoTriangulo(int a, int b, int c){
	if(a == b && b == c){
		printf("\nTriangulo equilatero!\n");
	}
	else{
		if(a != b && a!= c && b != c){
			printf("\nTriangulo escaleno!\n");
		}
		else{
			printf("\nTriangulo isosceles!\n");
		}
	}
}

int main(){
	
	int a, b, c;
	printf("Informe a medida do primeiro possivel lado: ");
	scanf("%d",&a);
	printf("Informe a medida do segundo possivel lado: ");
	scanf("%d",&b);
	printf("Informe a medida do terceiro possivel lado: ");
	scanf("%d",&c);
	if(validaTriangulo(a, b, c) == 1){
		printf("\nMedidas formam um triangulo!\n");
		tipoTriangulo(a, b, c);
	}
	else{
		printf("\nAs medidas nao formam um triangulo!\n");
	}
	
	return 0;
}