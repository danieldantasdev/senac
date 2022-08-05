package aula1;

public class TestaConta {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Conta conta1; //declaração 
		conta1 = new Conta();//instanciação e atribuição
		
		conta1.nome = "Daniel";
		conta1.limite = 200000;
		conta1.numero = 02;
		conta1.saldo = 3000;
		
		System.out.println("Número da conta: " + conta1.numero);
		System.out.println("Nome do titular: " + conta1.nome);
		System.out.println("Saldo da conta: " + conta1.saldo);
		System.out.println("Limite da conta: " + conta1.limite);
		
	}

}
