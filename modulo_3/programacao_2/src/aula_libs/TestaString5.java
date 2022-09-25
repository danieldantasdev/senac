package aula_libs;

import java.util.Scanner;

public class TestaString5{

  public static void main(String[] args) {
    Scanner ler = new Scanner(System.in);

    String s;
    int i, j, n;
    while (true) {
      System.out.printf("Informe uma String, FIM para encerrar:\n");
      s = ler.nextLine();
// compara a string informada pelo usuário com a palavra FIM ignorando
// na comparação se os caracteres são maiúsculos ou minúsculos
      if (s.equalsIgnoreCase("FIM"))
         break;

      System.out.printf("\n");
      n = s.length(); // tamanho da string (qtde de caracteres)

      for (i=0; i<n; i++) {
// a cada linha mostra 'i' caracteres
        for (j=0; j<=i; j++) {
// mostra o j-ésimo caractere de 's'
          System.out.printf("%c", s.charAt(j));
        }
        System.out.printf("\n");
      }
      System.out.printf("\n");
    }
  }

}