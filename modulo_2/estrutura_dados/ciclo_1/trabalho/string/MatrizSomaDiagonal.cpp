#include<stdio.h>
int main()
{
 int M[3][3],M2[3][3],soma[3][3],soma_diagonal,soma_diagonal_sec;
 int i,j;
 float somando=0;

//INFORMAR ELEMENTOS DA PRIMEIRA MATRIZ
 printf(" \n Informe os elementos da primeira Matriz \n\n");
 for(i=0;i<3;i++)        
 for(j=0;j<3;j++)
   {           
     printf("Elemento[%d][%d]= ",i,j);           
     scanf("%d",&M[i][j]);        
   }  
   
  //IMPRESSÂO VALORES DA PRIMEIRA MATRIZ  
  printf("\n  Valores: \n");     
  for(i=0;i<3;i++)
    {         
      for(j=0;j<3;j++)           
        printf("%d ",M[i][j]);         
        printf("\n");     
  }
  
  //SOMANDO TODOS VALORES DA PRIMEIRA MATRIZ
  for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
  somando=somando+M[i][j];
}
 printf("\nA soma de todos valores é = %.1f\n",somando);
  
  //INFORMAR ELEMENTOS DA SEGUNDA MATRIZ
  printf("\n\n Informe os elementos da segunda Matriz \n\n");   
  
  for(i=0;i<3;i++)        
  for(j=0;j<3;j++)
    {           
      printf("Elemento[%d][%d]= ",i,j);           
      scanf("%d",&M2[i][j]);        
    }     
 
 //IMPRESSÂO VALORES DA SEGUNDA MATRIZ      
  printf("\n  Valores: \n");     
  for(i=0;i<3;i++)
    {         
      for(j=0;j<3;j++)           
        printf("%d ",M2[i][j]);         
        printf("\n");     
    }  
    
    //SOMANDO TODOS VALORES DA SEGUNDA MATRIZ
  for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
  somando=somando+M2[i][j];
}
 printf("\nA soma de todos valores é = %.1f\n",somando);
    
//SOMA DAS MATRIZES
  for(i=0;i<3;i++)      
  for(j=0;j<3;j++)
    {
      soma[i][j]=M[i][j]+M2[i][j];                     
    } 
  printf("\n Matriz resultante da soma: \n\n  ");
  
  for(i=0;i<3;i++)
    {     
      for(j=0;j<3;j++)
      printf("\t %d ",soma[i][j]);
      printf("\n");                  
  }  
  
//DIAGONAL
    soma_diagonal=M[0][0]+M[1][1]+M[2][2];
    printf("\nA soma da diagonal principal= %d\n\n",soma_diagonal);
    
    soma_diagonal_sec=M[2][0]+M[1][1]+M[0][2];
    printf("A soma da diagonal secundária= %d\n\n",soma_diagonal_sec);

 return 0;         
}
