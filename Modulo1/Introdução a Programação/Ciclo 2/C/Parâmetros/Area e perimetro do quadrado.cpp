#include <stdio.h>
	void calcula(int l, int *a, int *p){
		*a = l*l;
		*p = 4 * l;
}

	int main(){
	int lado, area, per;
		printf("Lado: "); scanf("%d",&lado);
		calcula(lado, &area, &per);
		printf("A área do quadrado e: %d\n", area);
		printf("O perímetro do quadrado e: %d\n", per);
}
