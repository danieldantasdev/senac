package br.senac.rj.banco.modelo;

public class TesteClasse1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ContaCorrente conta1 = new ContaCorrente();
		
		conta1.agencia = 1;
		conta1.numero = 100;
		conta1.saldo = 200;
		
		System.out.println("Saldo inicial = " + conta1.saldo);
		
		int valorDeposito = 10;
		conta1.deposita(valorDeposito);
		
		System.out.println("Valor do dep�sito = " + valorDeposito);
		System.out.println("Valor ap�s dep�sito = " + conta1.saldo);
		
		int valorSaque = 1000;
		
		System.out.println("Valor do saque = " + valorSaque);
		
		if(conta1.saca(valorSaque))
			System.out.println("Valor ap�s o saque = " + conta1.saldo);
		else
			System.out.println("N�o foi poss�vel efetuar o saque");
	}

}
