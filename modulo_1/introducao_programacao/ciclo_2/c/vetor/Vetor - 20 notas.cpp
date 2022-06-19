#include <stdio.h>

int main(){
	//informar 20 notas
	float notas[20], media; //20 posições na memoria
	int i, qtde = 0; //variavel para passar por essas posições
	media = 0;
	for(i = 0; i < 20; i++){
		printf("Informe a %d nota: ", i + 1);
		scanf("%f",&notas[i]);
		//calcular a media das 20 notas
		media = media + notas[i];
	}
	//media das notas
	media = media / 20;
	printf("\nMedia da turma: %.1f\n", media);
	
	//verificar nota acima da media
	for(i = 0; i < 20; i++){
		if(notas[i] > media){
			qtde++;
		}
	}
	printf("A quantidade de alunos com notas acima da media: %d", qtde);
	return 0;
}
