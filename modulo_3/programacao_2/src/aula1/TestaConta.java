package aula1;

public class TestaConta {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Conta conta1; // declaração
		conta1 = new Conta();// instanciação e atribuição

		Cliente cliente1 = new Cliente();
		conta1.cliente = cliente1;
		// conta1.nome = "Daniel";
		cliente1.nome = "Daniel";
		conta1.limite = 2000;
		conta1.numero = 02;
		conta1.saldo = 2000;
		
		System.out.println("Saldo da conta: " + conta1.cliente);
		System.out.println("Saldo da conta: " + conta1.numero);
		System.out.println("Saldo da conta: " + conta1.saldo);
		System.out.println("Limite da conta: " + conta1.limite);

		double saque = 1000;
		boolean resultado = conta1.sacar(saque);

		if (resultado) {
			System.out.println("Saque realizado com sucesso, você sacou: " + saque);
		} else {
			System.out.println("Saque não realizado, você não tem saldo suficiente");
		}

		System.out.println("Após sacar $100 o novo saldo: " + conta1.saldo);

		conta1.depositar(5000);

		System.out.println("Após depositar $100 o novo saldo: " + conta1.saldo);

	}

}
