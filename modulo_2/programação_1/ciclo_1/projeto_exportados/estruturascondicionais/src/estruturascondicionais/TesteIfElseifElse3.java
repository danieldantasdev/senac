package estruturascondicionais;

public class TesteIfElseifElse3 {

	public static void main(String[] args) {
		double salarioBase = 10000;
		System.out.println("Salario base = " + salarioBase);
		double impostoRenda;
		if (salarioBase < 2826.66) 
			impostoRenda = 0;
		else if (salarioBase < 3751.05)
			impostoRenda = (salarioBase * 0.15) - 354.80;
		else if (salarioBase < 4664.68) 
			impostoRenda = (salarioBase * 0.225) - 636.13;
		else 
			impostoRenda = (salarioBase * 0.275) - 869.36;
		System.out.println("Imposto de renda = " + impostoRenda);
		double salarioLiquido = (salarioBase - impostoRenda);
		System.out.println("Sal�rio l�quido = " + salarioLiquido);
		System.out.println(salarioLiquido >= 20000 ? "Sal�rio de diretor" : "Sal�rio de funcion�rio normal");
	}
}