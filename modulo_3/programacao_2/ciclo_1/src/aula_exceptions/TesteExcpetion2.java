package aula_exceptions;

import java.io.FileNotFoundException;

public class TesteExcpetion2 {
	public static void main(String[] args) throws FileNotFoundException {
		try {
			new java.io.FileReader("arquivoTeste.txt");
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (Exception e){
			System.out.println("Erro: " + e);
		} finally {
			System.out.println("Fechamento da conexão com o banco de dados");
		}
	}
}
