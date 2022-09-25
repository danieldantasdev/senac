package aula_libs;

import java.util.Scanner;

public class TestaString7 {

  public static void main(String[] args) {
    Scanner ler = new Scanner(System.in);

    String nome, sobrenome;
    int i;

    System.out.printf("Informe um nome:\n");
    nome = ler.nextLine();

// retorna a posição da última ocorrência do espaço em branco
// na string 'nome', ou seja, o sobrenome é a última parte de um nome
    i = nome.lastIndexOf(' ');
    sobrenome = nome.substring(i+1, nome.length());

    System.out.printf("\nSobrenome:\n%s\n", sobrenome);
  }

}