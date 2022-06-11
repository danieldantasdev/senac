package br.senac.rj.teste;

import java.io.FileNotFoundException;
import java.io.FileReader;

public class TesteExcessao5 {
    public static void main(String[] args) {
        try {
            abrirArquivo();
        } catch (FileNotFoundException e) {
            System.out.println("Erro ao abrir o arquivo: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Erro não identificado: " + e.getMessage());
        } catch (Throwable e) {
            System.out.println("Erro: " + e.getMessage());
        } catch (Finally e) {
            System.out.println("Erro: " + e.getMessage());
        }
    }

    private static void abrirArquivo() throws FileNotFoundException {
        FileReader file = new FileReader("C:\\file.txt");
        file.close();
    }
}