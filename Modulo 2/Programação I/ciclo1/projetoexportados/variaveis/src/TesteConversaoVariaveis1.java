
public class TesteConversaoVariaveis1 {

	public static void main(String[] args) {
		// Conversão implícita de tipos
		int a = 5;
		float b = 10.5f; // Precisa colocar o f para que o número seja float e não double
		b = a;
		// Conversão explícita de tipos
		int c = (int) b; // Exemplo de Cast
		System.out.println("a="+a);
		System.out.println("b="+b);
		System.out.println("c="+c);
	}

}
