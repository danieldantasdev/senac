package br.senac.rj.teste;

public class TesteConstrutor1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Conta conta1 = new Conta(12, 23, 42, "o cara");
		System.out.println("Titular = " + conta1.getTitular());

		Conta conta2 = new Conta(12, 23, 42, "Daniel Dantas");

		System.out.println("Agencia = " + conta2.getAgencia());
		System.out.println("Numero = " + conta2.getNumero());
		System.out.println("Saldo = " + conta2.getSaldo());
		System.out.println("Titular = " + conta2.getTitular());

	}

}
