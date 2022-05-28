#include <stdio.h>
void incrementa(int*a, int b){
	b=b/2;
	*a+=3*b;
}

int main(){
	int num=100;
	printf("Valor de num %d\n",num);
	incrementa(&num,50);
	printf("Valor de num %d\n",num);
}