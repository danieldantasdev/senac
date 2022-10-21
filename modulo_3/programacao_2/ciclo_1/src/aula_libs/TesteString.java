package aula_libs;

public class TesteString {
	public static void main(String[] args) {
		//classe ponteiro de ponteiro
		String a = new String ("Java no Senac");
		String b = new String ("Java no Senac");
		
		// dado primitivo aponta direto para o valor
		int c = 5;
		int d = 5;
		
		if(a == b) {
			System.out.println("a e b são objetos iguais");
		}else {
			System.out.println("a e b são objetos diferentes");
		}
		
        System.out.println("------------------------------");
		
		if(c == d) {
			System.out.println("c e d são objetos iguais");
		}else {
			System.out.println("c e d são objetos diferentes");
		}
		
        System.out.println("------------------------------");

		
		if(a.equals(b)) {
			System.out.println("a e b são objetos iguais");
		}else {
			System.out.println("a e b são objetos diferentes");
		}
		
        System.out.println("------------------------------");
		
	}
}
