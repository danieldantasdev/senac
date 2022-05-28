package br.com.empresa.view;

import java.util.Scanner;

import br.com.empresa.model.EmpresaModel;

public class EmpresaView {

    public void carregarEmpresa(EmpresaModel empresa) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Digite o nome da empresa: ");
            scanner.next();
        }

        catch (Exception e) {
            System.out.println("Erro ao carregar campos da empresa: " + e.getMessage());
        }

    }

    public EmpresaModel carregarCamposEmpresa() {

        EmpresaModel empresa = new EmpresaModel();

        try (Scanner scanner = new Scanner(System.in)) {

            System.out.println("Digite o nome da empresa: ");
            empresa.setNome(scanner.next());
            // String nome;
            // nome = scanner.next(); // ou
            // empresa.setNome(nome);

            // empresa = new EmpresaModel(); // ou
            System.out.println("Digite o CNPJ da empresa: ");
            empresa.setCnpj(scanner.next());

            // empresa = new EmpresaModel();
            System.out.println("Digite o endereço da empresa: ");
            empresa.setEndereco(scanner.next());

            // empresa = new EmpresaModel();
            System.out.println("Digite o telefone da empresa: ");
            empresa.setTelefone(scanner.next());

            // empresa = new EmpresaModel();
            System.out.println("Digite o email da empresa: ");
            empresa.setEmail(scanner.next());

            // empresa = new EmpresaModel();
            System.out.println("Digite o site da empresa: ");
            empresa.setSite(scanner.next());
        }

        catch (Exception e) {
            System.out.println("Erro ao carregar empresa: " + e.getMessage());
        }

        return empresa;
    }

    // void carregarCamposEmpresa(EmpresaModel empresa) {
    // try (Scanner scanner = new Scanner(System.in)) {
    // System.out.println("Digite o nome da empresa: ");
    // empresa.setNome(scanner.nextLine());
    // System.out.println("Digite o CNPJ da empresa: ");
    // empresa.setCnpj(scanner.nextLine());
    // System.out.println("Digite o endereço da empresa: ");
    // empresa.setEndereco(scanner.nextLine());
    // System.out.println("Digite o telefone da empresa: ");
    // empresa.setTelefone(scanner.nextLine());
    // System.out.println("Digite o email da empresa: ");
    // empresa.setEmail(scanner.nextLine());
    // System.out.println("Digite o site da empresa: ");
    // empresa.setSite(scanner.nextLine());
    // }

    // catch (Exception e) {
    // System.out.println("Erro ao carregar campos da empresa: " + e.getMessage());
    // }
    // }
}