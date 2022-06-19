#include <stdio.h>

void leitura(float *n1, float *n2){
	printf("Informe a primeira nota: ");
	scanf("%f", n1);
	printf("Informe a segunda nota: ");
	scanf("%f", n2);/*quando usa a passagem por referencia e vai armazenar, não precisa do
	&, por ser ponteiro, pois já vão estar armazenando o endereço da variavel*/	
}

float calcularMedia(float notaum, float notadois){
	float media;
	media = (notaum+notadois) / 2;
	return(media);
}

int main(){
	float nota1, nota2, media;
	//leitura
	leitura(&nota1, &nota2);
	//função media
	media = calcularMedia(nota1, nota2);
	printf("Media: %.1f", media);
}