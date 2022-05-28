

//#include <stdio.h>
//
//int main() 
//{
//  int n,       
//    i, 
//    fat;   
//  
//  printf("\n\tCalculo do fatorial de um numero\n");
//  printf("\nDigite um inteiro positivo: ");
//  scanf("%d", &n);
//  
//  if (n == 0) || (n == 1){
//  	return 1;
//  }else{
//  	return (n * fat (n - 1));
//  }
//  for (i=n-1;i>1;i--)
//  	fat = aux *1;
//
//  return fat;
//}

// Ao receber v e n >= 1, a função devolve
// o valor de um elemento máximo do
// vetor v[0..n-1].

//int main
// (int n, int v[])
//{ 
//   if (n == 1)
//      return v[0];
//   else {
//      int x;
//      x = main (n-1, v);
//      // x é o máximo de v[0..n-2] 
//      if (x > v[n-1]) return x;
//      else return v[n-1]; 
//   }
//}

# include <stdio.h>

void funcao (int n){
	if (n == 0);{
		printf("Zero");
	}else{
		printf("%d", n);
		funcao(n-1);
	}
}

int main(funcao) 
{
  int i,       
    i, 
    fat;   
  
  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um inteiro positivo: ");
  scanf("%d", &n);


  return funcao;
}



