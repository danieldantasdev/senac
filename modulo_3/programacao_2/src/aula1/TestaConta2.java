package aula1;

public class TestaConta2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Conta conta2; // declaração, somente marcação com ponteiro
		conta2 = new Conta();// atribuição + instanciação, reservando área da memória
		conta2.limite = 100;

		Conta conta3;
		conta3 = new Conta();// referência, compara pelo OID do Objeto
		conta3.limite = 200;

		int i = 10;
		int j = 10;

		if (conta2 == conta3) {
			System.out.println("As contas são iguais");
		} else {
			System.out.println("As contas são diferentes");
		}

		if (i == j) {
			System.out.println("Os tipos são iguais");
		} else {
			System.out.println("Os tipos são diferentes");
		}

		// System.out.println("Limite da conta2: " + conta2.limite);
		// System.out.println("Limite da conta3: " + conta3.limite);
	}
}
