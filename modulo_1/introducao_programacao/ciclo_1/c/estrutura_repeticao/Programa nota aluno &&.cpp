#include <stdio.h>

int main() {
	
	float nota1, nota2, media;
	
	printf("Informe a primeira nota:");
	scanf("%f",&nota1);
	
	printf("Informe a segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	printf("A media do aluno foi: %.1f",media);
	
	if(media >= 7) {
		printf("\nAprovado");
	}
	
	else{
		
		if (media >= 3 && media < 7) {
			printf(" Reprovado\nProva final");
		}
	    
		else {
			printf(" Reprovado");
		}
		
	}
	      	
}