# include <stdio.h>

typedef struct {
	int cod;
	int qtde;
	float pCompra, pVenda;
	char nome [50];
}produto;

int main(){
	produto prod;
	printf("Informe o código do produto: ");
	scanf("%d", &prod.cod);
	
	printf("\nInforme o nome do produto: ");
	fflush(stdin);
	fgets(prod.nome,50,stdin);
	
	printf("\nInforme o preço de compra: ");
	scanf("%f", &prod.pCompra);
	
	printf("\nInforme o preço de venda: ");
	scanf("%f", &prod.pVenda);
	
	printf("\nInforme a quantidade do produto: ");
	scanf("%d", &prod.qtde);
	
	return 0;
}