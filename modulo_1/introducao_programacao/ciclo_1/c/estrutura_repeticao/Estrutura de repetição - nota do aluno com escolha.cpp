#include <stdio.h>
#include <stdlib.h>
	int main(){
		float n1, n2, media;
		int cont,resp;
			for (cont = 1; cont!=2;){
				printf("Informe a primeira nota: ");
				scanf("%f", &n1);
				printf("\nInforme a segunda nota:  ");
				scanf("%f", &n2);
				media=(n1+n2)/2;
				printf("\nMedia: %.1f\n\n", media);
				printf("Deseja informar novos dados: (1 - Sim ou 2 - nao)");
				scanf("%d",&resp);
				system("pause");
				system("cls");		
			}
			return 0;		
	}
