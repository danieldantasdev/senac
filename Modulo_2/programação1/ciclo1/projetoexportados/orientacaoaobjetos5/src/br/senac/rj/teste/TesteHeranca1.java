package br.senac.rj.teste;

import java.util.Scanner;

public class TesteHeranca1 {
    public static void main(String[] args) {
        // TODO Auto-generated method stub

        Scanner sc = new Scanner(System.in);
        System.out.println("Entre com o limite da conta especial: ");

        double limite = Double.parseDouble(sc.nextLine());

        System.out.println("Entre com o valor para sacar: ");

        double valorSaque = Double.parseDouble(sc.nextLine());

        ContaCorrenteEspecial contaEspecial1 = new ContaCorrenteEspecial();
        contaEspecial1.setLimite(limite);

        if (!contaEspecial1.saca(valorSaque)) {
            System.out.println("Saldo insuficiente!");
        } else {
            System.out.println("Novo saldo da conta corrente" + contaEspecial1.getSaldo());
            ContaCorrenteNormal contaNormal = new ContaCorrenteNormal();
        }

        if (!contaEspecial1.saca(valorSaque)) {
            System.out.println("Saldo insuficiente!");
        } else {
            System.out.println("Saque realizado com sucesso!" + contaEspecial1.getSaldo());

        }

    }

}
