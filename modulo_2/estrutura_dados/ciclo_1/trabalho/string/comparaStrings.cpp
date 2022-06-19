/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
Na linguagem C nC#o temos o tipo primitivo String. C	 possC-vel defini-lo utilizando um vetor do tipo char.
Nesse contexto, faC'a um programa que leia duas strings (str1, str2) de atC) 50 caracteres e faC'a uma concatenaC'C#o
das duas strings, armazenando o resultado na string str1. Ao final, o programa deve exibir a string concatenada na tela.
OBS: VocC* Não deve utilizar as funC'C5es da biblioteca <string.h>.
*/

#include <stdio.h>

// Função para comparar as funções
void compareStrings(char *x, char *y)
{
  int flag = 0;

  // Iterate a loop till the end
  // of both the strings
  while (*x != '\0' || *y != '\0')
  {
    if (*x == *y)
    {
      x++;
      y++;
    }

    // If two characters are not same
    // print the difference and exit
    else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') || *x != *y)
    {
      flag = 1;
      printf("Strings diferentes\n");
      break;
    }
  }

  // If two strings are exactly same
  if (flag == 0)
  {
    printf("Strings iguais\n");
  }
}

// Driver Code
int main(void)
{
  // Given strings s1 and s2
  char str1[20] = "phyton";
  char str2[20] = "dsa";

  // Function Call
  compareStrings(str1, str2);
  return 0;
}