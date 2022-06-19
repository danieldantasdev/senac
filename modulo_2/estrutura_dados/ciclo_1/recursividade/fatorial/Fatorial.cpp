/* 
 * SOLUCAO 1: calcula 1*2*3...*n, nessa ordem.
 *
 * Pergunta:
 *   Use o programa para calcular 5! depois 10! depois 15! ...
 *   Aconteceu de estranho?
 */
 
//#include <stdio.h>
//
//int main() {
//  int n,        // o n irá guardar o número
//    cont = 2, 
//    fat = 1; // valor neutro para multiplicação, devemos inicializar assim 
//  
//  printf("\n\t\t==================== Calculo do fatorial de um numero ====================\n");
//  printf("\nDigite um inteiro positivo: ");
//  scanf("%d", &n);
//
//  
//  while (cont <= n) {
//    fat = fat * cont;
//    cont++;
//  }
//  
//  printf("O valor de %d!: %d\n", n, fat);
//  
//  return 0;
//}

/* 
 * SOLUCAO 2: usa o comando for e calcula 1*2*3*...*(n-1)*n
 *           nessa ordem.
 */

#include <stdio.h>

int main() 
{
  int n,        /* guarda o numero dado */
    i, 
    fat = 1;   // valor neutro para multiplicação, devemos inicializar assim  
  
  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um inteiro positivo: ");
  scanf("%d", &n);
  
  // Função iterativa
  // Começando de frente para trás (1*2*3*4...etc)
  for (i = 1; i <= n; i++) // cada hora o i terá um valor diferente
    {  /* as chave sao superfluas */
      fat = fat * i; //fat precisa receber fat * i, por causa do fator acumulativo
    }
    
    
//    // Função iterativa
//  // Começando de trás para frente (4*3*2*1...etc)
//  for (i = n; i > 1; i++) // cada hora o i terá um valor diferente
//    {  /* as chave sao superfluas */
//      fat = fat * i; //fat precisa receber fat * i, por causa do fator acumulativo
//    }
//    
    
  printf("O valor de %d!= %d\n", n, fat);
  return 0;
  
}




//# include <stdio.h>
//
//int fatorial (int n){
//	int fat = 1, 
//		i;
//		
//		for (i = 1 ; i <= n ; i++){
//			fat = fat * i;
//		}
//	return fat;	
//}
