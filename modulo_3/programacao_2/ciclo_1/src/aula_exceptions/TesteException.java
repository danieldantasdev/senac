package aula_exceptions;

public class TesteException {
	public static void main(String[] args) {
		System.out.println("Inicio do metodo main");
		metodo1();
		System.out.println("Fim do metodo main");
	}

	private static void metodo1() {
		System.out.println("Inicio do metodo 1");
		metodo2();
		System.out.println("Fim do metodo 1");
	}

	private static void metodo2() {
		System.out.println("Inicio do metodo 2");
		try {
			int array[] = new int[10];

			for (int i = 0; i < 20; i++) {
				array[i] = i;
				System.out.println(i);
			}
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Erro de estouro de Array: " + e);
		}

		System.out.println("Inicio do metodo 2");

	}
}
