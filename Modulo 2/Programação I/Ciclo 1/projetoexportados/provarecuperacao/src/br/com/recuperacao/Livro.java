package br.com.recuperacao;

public class Livro {
	private int codLivro;
	private String descLivro;
	private int qtdeDisponivel;

	public int getCodLivro() {
		return codLivro;
	}

	public void setCodLivro(int codLivro) {
		this.codLivro = codLivro;
	}

	public String getDescLivro() {
		return descLivro;
	}

	public void setDescLivro(String descLivro) {
		this.descLivro = descLivro;
	}

	public int getQtdeDisponivel() {
		return qtdeDisponivel;
	}

	public void setQtdeDisponivel(int qtdeDisponivel) {
		this.qtdeDisponivel = qtdeDisponivel;
	}

	// public void cadastrarLivro(int codLivro, String descLivro) {
	// this.codLivro = codLivro;
	// this.descLivro = descLivro;
	// this.qtdeDisponivel = 0;
	// }

	public void cadastrarLivro(int codLivro, String descLivro, int qtdeDisponivel) {
		this.codLivro = codLivro;
		this.descLivro = descLivro;
		this.qtdeDisponivel = qtdeDisponivel;
	}

	public void devolverLivro(int qtde) {
		qtdeDisponivel += qtde;
		System.out.println("Livro devolvido com sucesso!");
	}

	public boolean reservarLivro(int qtde) {
		if (qtdeDisponivel >= qtde) {
			qtdeDisponivel -= qtde;
			System.out.println("Reserva realizada com sucesso!");
			return true;
		} else
			System.out.println("N�o h� disponibilidade!");
		return false;
	}

}
