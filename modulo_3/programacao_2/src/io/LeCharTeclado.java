package io;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class LeCharTeclado {
public static void main(String[] args) {
	System.out.println("Digite uma tecla: ");
	//quem sabe capturar um fluxo de byte?
	InputStream c = System.in;
	InputStreamReader isr = new InputStreamReader(c);
//	BufferedReader br = new BufferedReader(isr);
	
	char ch;
	try {
		ch = (char) isr.read();
		System.out.println("Voce digitou a tecla: " + ch);
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} //execeção da estrutura é obrigatória, erro da regra de negócio é não obrigatório
	
}
}
