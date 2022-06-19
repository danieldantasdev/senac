import java.util.Iterator;

public class TesteFor1 {

	public static void main(String[] args) {
		for(int x = 0; x <= 3; x++) {
			System.out.println("x = " + x);
			System.out.println("Valor final de x = " + x); 
		}
		// A linha baixo não compila porque a variável x foi criada dentro do For
		
		int y;
		for(y = 3; y >= 0; y--) {
			System.out.println("x = " + y);
		}
		System.out.println("Valor final de y = " + y);
	}

}
