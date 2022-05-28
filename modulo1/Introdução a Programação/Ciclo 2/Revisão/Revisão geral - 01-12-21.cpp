/*A prefeitura de uma cidade fez uma pesquisa entre os habitantes de um bairro, coletando dados sobre salário e idade. Faça um programa que leia esses dados enquanto forem informadas idades válidas nesse contexto (>=18), calcule e 
mostre ao final: ­ A média das idades informadas; ­ O maior salário informado.*/


#include <stdio.h>

int main(){
  float mediaidades, salario, maiorsalario=0;
  int idades, soma=0;
  int cont=0;
  printf("Informe a sua idade: ");
  scanf("%d", &idades);
  while(idades>=18){
  printf("Informe o seu salario:");
  scanf("%f", &salario);
  soma= soma+idades;
  cont++;
  printf("Informe a sua idade: ");
  scanf("%d", &idades);
  if(maiorsalario < salario){
      maiorsalario = salario;
   }
  }
  mediaidades= soma/cont;
  printf("Media das idades: %.f", mediaidades);
  printf("\nMaior salario: %.1f", maiorsalario);
}