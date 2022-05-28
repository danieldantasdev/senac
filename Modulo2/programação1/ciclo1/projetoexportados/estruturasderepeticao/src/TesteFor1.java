
public class TesteFor1 {

	public static void main(String[] args) {
		for (int x=0; x<=3; x++) {
			System.out.println("x = " + x);
		}
		// A linha abaixo não compila porque a variável x foi criada dentro do for
		//System.out.println("Valor final de x =" + x);
		int y;
		for (y=3; y>=0; y--) {
			System.out.println("y = " + y);
		}
		System.out.println("Valor final de y =" + y);
	}
}
