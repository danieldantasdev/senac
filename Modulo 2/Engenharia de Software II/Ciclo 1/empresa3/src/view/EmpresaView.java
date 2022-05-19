package view;
import java.util.Scanner;

import model.EmpresaModel;

public class EmpresaView {

	public EmpresaModel carregarCamposEmpresa() {
	
		EmpresaModel empresa;
		empresa = new EmpresaModel();
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Digite o cnpj da empresa:");
		String cnpj;
		cnpj = sc.nextLine();
		empresa.setCnpj(cnpj);

		sc = new Scanner(System.in);
		System.out.println("Digite o nome da empresa:");
		empresa.setNome(sc.nextLine());		
		
		sc = new Scanner(System.in);
		System.out.println("Digite o endereco da empresa:");
		empresa.setEndereco(sc.nextLine());				
		
		if(validarDados(empresa)) {
			System.out.println("Dados digitados corretamente!");
		}else {
			System.out.println("Verifique os dados!");
		}
		
		System.out.println("Deseja Salvar? (1) sim (2) não");
		sc = new Scanner(System.in);
		String opcao = sc.nextLine();
		if(opcao.equals("2"))
			System.exit(1);
		
		return empresa;
	}
	
	public boolean validarDados(EmpresaModel empresa) {
		if (empresa.getCnpj().isEmpty()) {
			System.out.println("O campo cnpj está vazio!");
			return false;
		}else if (empresa.getNome().isEmpty()) {
			System.out.println("O campo nome está vazio!");
			return false;
		}else if (empresa.getEndereco().isEmpty()) {
			System.out.println("O campo endereco está vazio!");
			return false;
		}
		return true;
	}

	public void EmpresaExistente() {
		System.out.println("Empresa digitada já existe");
	}
	
	public void  EmpresaCadastradaComSucesso() {
		System.out.println("Empresa cadastrada com sucesso!");	
	}
}
