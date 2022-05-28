#include <stdio.h>
#define maxL 3
#define maxC 3

int main(){
	int mat[maxL] [maxC];	//lin 0,1	col 0,1 
	int lin, col;
	
	for(lin = 0; lin < maxL; lin ++) {
		for(col = 0; col < maxC; col ++) {
			printf("Informe um valor: ");
			scanf("\n%d",&mat[lin] [col]);
		}
	}
	
	printf("\n\nIMPRESSAO\n");
	for(lin = 0; lin < maxL; lin ++) {
		for(col = 0; col < maxC; col ++) {
			printf("%d   ",mat[lin] [col]);
		}
		printf("\n");
	}
}