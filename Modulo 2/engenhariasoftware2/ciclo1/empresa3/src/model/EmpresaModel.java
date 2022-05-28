package model;

public class EmpresaModel {
	private String cnpj;
	private String nome;
	private String endereco;
	
	public String getCnpj() {
		return cnpj;
	}
	public void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getEndereco() {
		return endereco;
	}
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}
	
	public boolean VerificarExisteEmpresa() {
		//se conecta ao banco de dados e verifica se empresa existe
		return true;
	}
	
	public void AdicionarEmpresa() {
		System.out.print("Empresa adicionada no model");	
	}
}
