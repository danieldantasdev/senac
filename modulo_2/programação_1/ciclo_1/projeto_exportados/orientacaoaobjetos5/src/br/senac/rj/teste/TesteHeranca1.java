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

        ContaCorrenteEspecial contaEspecial1 = new ContaCorrenteEspecial(22, 222);

        System.out.println("Numero da agencia da conta especial: " + contaEspecial1.getAgencia());
        System.out.println("Numero da conta da conta especial: " + contaEspecial1.getNumero());
        System.out.println("Titular da conta da conta especial: " + contaEspecial1.getTitular());
        contaEspecial1.setLimite(limite);

        if (!contaEspecial1.saca(valorSaque, 10)) {
            System.out.println("Saldo insuficiente na conta corrente especial!");
        } else {
            System.out.println("Novo saldo da conta especial" + contaEspecial1.getSaldo());
        }

        ContaCorrenteNormal contaNormal = new ContaCorrenteNormal();

        System.out.println("Numero da agencia da conta normal: " + contaNormal.getAgencia());
        System.out.println("Numero da conta da conta normal: " + contaNormal.getNumero());
        System.out.println("Titular da conta da conta normal: " + contaNormal.getTitular());

        if (!contaEspecial1.saca(valorSaque)) {
            System.out.println("Saldo insuficiente na conta corrente normal!");
        } else {
            System.out.println("Saque realizado com sucesso na conta corrente normal!" + contaEspecial1.getSaldo());

        }
    }

}
