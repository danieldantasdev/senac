#include <stdio.h>
#include <stdlib.h>

	const int max = 3;
	int main(){
		
		int cont;
		float n1, n2, media, mediaT = 0;
			for (cont = 1; cont <= max; cont++){
				printf("Informe a primeira nota: ");
				scanf("%f",&n1);
				printf("Informe a segunda nota: ");
				scanf("%f",&n2);
				media = (n1 + n2) / 2;
				mediaT = mediaT + media;
				printf("media: %.1f", media);
			}
				mediaT = mediaT / max;
				printf ("\nA media da turma: %.2f", mediaT);	
					
			return 0;
			
	}
