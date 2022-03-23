# include <stdio.h>
# define max 5

typedef struct {
	int cod;
	int qtde;
	float pCompra, pVenda;
	char nome [50];
}produto;

int main(){
	produto prod[max];
	int i;
	for (i = 0; i < max; i++){
	
	printf("Informe o código do produto: ");
	scanf("%d", &prod[i].cod);
	
	printf("\nInforme o nome do produto: ");
	fflush(stdin);
	fgets(prod[i].nome,50,stdin);
	
	printf("\nInforme o preço de compra: ");
	scanf("%f", &prod[i].pCompra);
	
	printf("\nInforme o preço de venda: ");
	scanf("%f", &prod[i].pVenda);
	
	printf("\nInforme a quantidade do produto: ");
	scanf("%d", &prod[i].qtde);
	}
}
