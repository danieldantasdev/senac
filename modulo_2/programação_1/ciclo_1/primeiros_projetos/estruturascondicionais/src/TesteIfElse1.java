
public class TesteIfElse1 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a = 1;
		int b = 2;

		System.out.println("a = " + a);
		System.out.println("b = " + b);
		if (a == b) {
			System.out.println("a igual b");
		} else {
			System.out.println("a diferente b");
		}

		if (a != b) {
			System.out.println("a diferente b");
		}

		a = b;
		System.out.println("a = " + a);
		System.out.println("b = " + b);
		
		if (a == b) {
			System.out.println("a igual b");
		} else {
			System.out.println("a diferente b");
		}

	}
}
