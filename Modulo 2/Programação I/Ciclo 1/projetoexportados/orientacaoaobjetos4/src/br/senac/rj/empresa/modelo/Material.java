package br.senac.rj.empresa.modelo;

public class Material {
	private int codMaterial;
	private String descMaterial;
	private int qtdeEstoque;

	public int getCodMaterial() {
		return codMaterial;
	}

	public void setCodMaterial(int codMaterial) {
		this.codMaterial = codMaterial;
	}

	public String getDescMaterial() {
		return descMaterial;
	}

	public void setDescMaterial(String descMaterial) {
		this.descMaterial = descMaterial;
	}

	public int getQtdeEstoque() {
		return qtdeEstoque;
	}

	public void setQtdeEstoque(int qtdeEstoque) {
		this.qtdeEstoque = qtdeEstoque;
	}

	public void entrarMaterial(int qtdeEntrada) {
		this.qtdeEstoque = this.qtdeEstoque + qtdeEntrada;
	}

	public boolean sairMaterial(int qtdeSaida) {
		int novoEstoque;
		novoEstoque = this.qtdeEstoque - qtdeSaida;
		if (novoEstoque < 0) {
			System.out.println("Não há estoque suficiente!");
			return false;
		}
		this.qtdeEstoque = novoEstoque;
		return true;
	}
}
