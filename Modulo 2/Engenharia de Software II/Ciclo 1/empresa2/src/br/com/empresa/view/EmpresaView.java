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
            empresa.setNome(scanner.nextLine());
            // String nome;
            // nome = scanner.next(); // ou
            // empresa.setNome(nome);

            // empresa = new EmpresaModel(); // ou
            System.out.println("Digite o CNPJ da empresa: ");
            empresa.setCnpj(scanner.nextLine());

            // empresa = new EmpresaModel();
            System.out.println("Digite o endereço da empresa: ");
            empresa.setEndereco(scanner.nextLine());

            // empresa = new EmpresaModel();
            System.out.println("Digite o telefone da empresa: ");
            empresa.setTelefone(scanner.nextLine());

            // empresa = new EmpresaModel();
            System.out.println("Digite o email da empresa: ");
            empresa.setEmail(scanner.nextLine());

            // empresa = new EmpresaModel();
            System.out.println("Digite o site da empresa: ");
            empresa.setSite(scanner.nextLine());

        }

        catch (Exception e) {
            System.out.println("Erro ao carregar empresa: " + e.getMessage());
        }

        // Deseja continuar? (S/N)

        System.out.println("Deseja continuar cadastrando empresa? (S/N)");
        try (Scanner scanner = new Scanner(System.in)) {
            String continuar = scanner.nextLine();

            if (continuar.equalsIgnoreCase("S")) {
                carregarEmpresa(empresa);
            }
        }

        catch (Exception e) {
            System.out.println("Erro ao carregar empresa: " + e.getMessage());
        }

        // Validar dados inseridos
        if (validarDadosEmpresa(empresa)) {
            System.out.println("Dados da empresa carregados com sucesso!");
        } else {
            System.out.println("Dados da empresa não foram carregados!");
        }

        return empresa;

    }

    public boolean validarDadosEmpresa(EmpresaModel empresa) {
        if (empresa.getNome().isEmpty() || empresa.getCnpj().isEmpty() || empresa.getEndereco().isEmpty()
                || empresa.getTelefone().isEmpty() || empresa.getEmail().isEmpty() || empresa.getSite().isEmpty()) {
            return false;
        }

        return true;
    }

    public void empresaExiste(EmpresaModel empresa) {
        System.out.println("Empresa já cadastrada!");
    }

    public void empresaCadastradaComSucesso(EmpresaModel empresa) {
        System.out.println("Empresa cadastrada com sucesso!");
    }

}