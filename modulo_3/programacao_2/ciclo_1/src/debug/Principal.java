package debug;

public class Principal {
	public static void main(String[] args) {
		Forma objForma = new Forma();
		
		for (int i = 100 ; i >= 0; i--) {
			System.out.println(i);
			objForma.renderizar(i);
		}
		System.out.println("teste");
	}
}
