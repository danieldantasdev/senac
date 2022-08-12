package aula1;

public class ContaConstrutor1 {
	private static int contador;
	int numero;
	double saldo;
	double limite;
	Cliente cliente = new Cliente();

	public ContaConstrutor1(String nome, String cpf) {
		super();
		// TODO Auto-generated constructor stub
		System.out.println("Testando um construtor");
		this.cliente.nome = nome;
		this.cliente.cpf = cpf;
		ContaConstrutor1.contador++;
	}

//	public int getContador() {
//		return ContaConstrutor1.contador;
//	} aqui precisamos sempre instanciar um objeto para obter o número de contas
	
	public static int getContador() {
		return ContaConstrutor1.contador;
	}
}
