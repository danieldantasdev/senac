
public class TesteConversaoVariaveis1 {

	public static void main(String[] args) {
		// Convers�o impl�cita de tipos
		int a = 5;
		float b = 10.5f; // Precisa colocar o f para que o n�mero seja float e n�o double
		b = a;
		// Convers�o expl�cita de tipos
		int c = (int) b; // Exemplo de Cast
		System.out.println("a="+a);
		System.out.println("b="+b);
		System.out.println("c="+c);
	}

}
