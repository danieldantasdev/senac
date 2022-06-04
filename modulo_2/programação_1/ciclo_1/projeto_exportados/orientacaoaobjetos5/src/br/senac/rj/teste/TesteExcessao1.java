package br.senac.rj.teste;

import java.util.Scanner;

public class TesteExcessao1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite um número inteiro: ");
        int numero1 = Integer.parseInt(sc.nextLine());
        System.out.println("Digite outro número inteiro: ");
        int numero2 = Integer.parseInt(sc.nextLine());
        double numero3 = (double) numero1 / numero2;
        System.out.println("O resultado da divisão é: " + numero3);

        try {
            System.out.println("Digite um número inteiro: ");
            int numero4 = Integer.parseInt(sc.nextLine());
            System.out.println("Digite outro número inteiro: ");
            int numero5 = Integer.parseInt(sc.nextLine());
            double numero6 = (double) numero4 / numero5;
            System.out.println("O resultado da divisão é: " + numero6);
        } catch (ArithmeticException e) {
            System.out.println("Erro: " + e.getMessage());
        }
    }

}
