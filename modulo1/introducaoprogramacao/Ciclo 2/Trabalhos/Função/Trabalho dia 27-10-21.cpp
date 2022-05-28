/*Daniel Abreu Dantas, Matheus Freitas, o Gluaber não esteve presente*/

#include <stdio.h>

float volumeCaixa (float a, float b, float h) {
    float res;

    res = a * b * h;
    
    
    return(res);
    
    if(res >= 0){
    	return 1;
	}
	else{
		return 0;
	}

}

float volumeCilindro (float h, float r) {
    float res;
    const float pi = 3.14;


    res = pi * h * r;
    return(res);
}


int main() {

    float ladoa, ladob, altura, raio, resultado;
    int op;
    
    do {

        printf("Escolha a opcao desejada:\n\n 1 - Calcular o volume da Caixa.\n 2 - Calcular o volume do Cilindro.\n 3 - Sair\n\n Digite aqui: ");
        scanf("%d",&op);

    } while(op < 1 || op > 3);

    switch(op) {

        case 1: {
            printf("\nA opcao escolhida foi calcular o volume da caixa.\n\n");
            
            do {
			
            printf("Informe o lado a: ");
            scanf("%f",&ladoa);
            
			} while (ladoa <= 0);
			
			 do {
			 	
            printf("Informe o lado b: ");
            scanf("%f",&ladob);
			
			} while (ladob <= 0);
			
			do {
			
            printf("Informe a altura: ");
            scanf("%f",&altura);
			
			} while (altura <= 0);
			
            resultado = volumeCaixa (ladoa,ladob,altura);
            printf("\nO resultado e: %.2f", resultado);

            break;
        }
        
        case 2: {
            printf("\nA opcao escolhida foi calcular o volume do cilindro.\n\n");
            
            do {
            
            printf("Informe o raio: ");
            scanf("%f",&raio);
            
            } while (raio <= 0);
            
             do {
            
            printf("Informe a altura: ");
            scanf("%f",&altura);

			} while (altura <= 0);

            resultado = volumeCilindro (raio,altura);
            printf("\nO resultado e: %.2f", resultado);

            break;
        }
    }

    return 0;
}