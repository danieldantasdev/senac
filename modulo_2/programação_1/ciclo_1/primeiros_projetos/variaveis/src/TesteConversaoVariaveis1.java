
public class TesteConversaoVariaveis1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Convers�o impl�cita de tipos
		int a = 5;
		float b = 10.5f; //Precisamos colocar o f no final para que o final seja float e n�ao double
		b = a;
		
		
		//Convers�o impl�cita de tipos
		int c = (int) b; //Exemplo de Cast
						
		//Exibi��o dos valores 
		System.out.println("a = "+a);
		System.out.println("b = "+b);
		System.out.println("c = "+c);
	}

}
