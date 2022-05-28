#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x;
	printf ("Digite o valor de x: ");
	scanf ("%d",&x);
	
	if (x%2 == 0)
		printf ("\nx e par\n");
	
	else 
		printf ("\nx e impar\n");
	
	system("Pause");
	
}