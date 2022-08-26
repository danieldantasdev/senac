package aula1;

public class Gerente extends Funcionario{
	int senha;
	
	public boolean verfifica(int senha) {
		if(this.senha == senha) {
			System.out.println("Acesso autorizado");
			return true;
		}else {
			System.out.println("Acesso não autorizado");
			return false;
		}
	}
	
	double getBonus() {
		return super.getBonus() + 5000;
	}
}
