package leitorarquivos;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		File file = new File(
				"/home/lobinho/Documentos/workspace-spring-tool-suite-4-4.16.0.RELEASE/leitorarquivos/src/leitorarquivos/text.txt");
		FileInputStream fileInputStream = new FileInputStream(file);
		InputStreamReader inputStreamReader = new InputStreamReader(fileInputStream);
		BufferedReader bufferedReader = new BufferedReader(inputStreamReader);

		String linha;
		int contagemPalavra = 0;
		int contagemCaracter = 0;
		int contagemParagrafo = 0;
		int contagemEspaco = 0;
		int contagemFrase = 0;

		while ((linha = bufferedReader.readLine()) != null) {
			if (linha.equals("")) {
				contagemParagrafo += 1;
			} else {
				contagemCaracter += linha.length();
				String words[] = linha.split("\\s+");
				contagemPalavra += words.length;
				contagemEspaco += contagemPalavra - 1;
				String sentence[] = linha.split("[!?.:]+");
				contagemFrase += sentence.length;
			}
		}
		if (contagemFrase >= 1) {
			contagemParagrafo++;
		}

		System.out.println("Total de palavras: " + contagemPalavra);
		System.out.println("Total de frases: " + contagemFrase);
		System.out.println("Total número de caracteres: " + contagemCaracter);
		System.out.println("Números de parágrafos: " + contagemParagrafo);
		System.out.println("Total de espaços: " + contagemEspaco);
	}
}