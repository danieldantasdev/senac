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
		
		System.out.println("Valor do depósito = " + valorDeposito);
		System.out.println("Valor após depósito = " + conta1.saldo);
		
		int valorSaque = 1000;
		
		System.out.println("Valor do saque = " + valorSaque);
		
		if(conta1.saca(valorSaque))
			System.out.println("Valor após o saque = " + conta1.saldo);
		else
			System.out.println("Não foi possível efetuar o saque");
	}

}
