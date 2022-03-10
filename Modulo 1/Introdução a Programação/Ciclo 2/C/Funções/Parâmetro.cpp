#include <stdio.h>
int soma (int a, int b) {
	return ( a + b ) ;
}

int main ( ) {
int n1, n2;
	printf ( "Entre com dois números: " ) ;
	scanf ( "%d" , &n1 ) ;
	scanf ( "%d" , &n2 ) ;
	printf ("A soma de %d e %d é : %d\n", n1, n2,
	soma(n1, n2)) ;
}