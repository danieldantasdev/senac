package aula1;

public class TestaContaConstrutor {
	public static void main(String[] args) {
		ContaConstrutor1 cc1 = new ContaConstrutor1("Daniel", "01234567890");
		cc1.cliente.nome = "Daniel";
		System.out.println(cc1.cliente.nome);
		System.out.println(cc1.cliente.cpf);
		int contador = cc1.getContador();
		System.out.println("Número de contas: " + contador);
		
		int contador2 = ContaConstrutor1.getContador();
		System.out.println("Número de contas: " + contador2);
	}
}
