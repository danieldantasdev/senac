package io;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Iterator;

public class LeArquivo {
	public static void main(String[] args) throws IOException {
		System.out.println("Essa é a leitura de arquivos: ");
		//quem sabe capturar um fluxo de byte?
		InputStream c = new FileInputStream("teste.txt");
		InputStreamReader isr = new InputStreamReader(c);
		BufferedReader br = new BufferedReader(isr);//acumulador

		String s;
		s = br.readLine();
		while (s != null) {
			System.out.println(s);
			s = br.readLine();
		}
	}
}
