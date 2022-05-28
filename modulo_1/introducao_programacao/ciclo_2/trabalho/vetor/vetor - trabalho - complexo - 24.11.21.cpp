/*
 * Faça um programa que solicite ao usuário o
 * preenchimento de dois vetores (A e B) de 10 posições para 
 * armazenar números inteiros. Em seguida, o programa deve 
 * preencher um terceiro vetor, C, de forma que C receba de modo 
 * intercado os elementos dos vetores A e B. 
 * Ao final, o programa deve exibir o vetor C.
 *
 * Grupo: Daniel Dantas, Eliel Nascimento e Glauber Mota
 */

#include <stdio.h>
#define MAX 10

int main() {
  int a[MAX] = {0};
  int b[MAX] = {0};
  int c[MAX*2] = {0};
  int i = 0;
  
  for (i = 0; i < MAX; i++) {
    printf("Digite o valor da casa %d do vetor A: ", i+1);
    scanf("%d", &a[i]);

    c[i*2] = a[i];

    printf("Digite o valor da casa %d do vetor B: ", i+1);
    scanf("%d", &b[i]);

    c[i*2+1] = b[i];
  }

  for (i = 0; i < MAX*2; i++) {
    printf("Casa %d do vetor C: %d \n", i+1, c[i]);
  }

  return 0;
}