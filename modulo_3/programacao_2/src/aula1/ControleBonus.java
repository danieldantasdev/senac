package aula1;

public class ControleBonus {
	private double totalBonus;
	
	public void setTotalBonus(Funcionario funcionario) {
		this.totalBonus += funcionario.getBonus();
	}
	
	public double getTotalBonus() {
		return this.totalBonus;
	}
}
