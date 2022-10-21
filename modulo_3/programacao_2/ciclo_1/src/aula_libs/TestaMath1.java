package aula_libs;

public class TestaMath1 {

	public static void main(String[] args) {

		double x = 28;
		double y = 4;

		// retorna o maior dos dois números
		System.out.println("Maior número entre x e y eh: " + Math.max(x, y));
        System.out.println("------------------------------");

		// retorna o menor dos dois números
		System.out.println("Maior número entre x e y eh: " + Math.min(x, y));
        System.out.println("------------------------------");

		// retorna raiz quadrada de y
		System.out.println("Raíz quadrada de y eh: " + Math.sqrt(y));
        System.out.println("------------------------------");

		// retorna x elevado a y
		System.out.println("Potência de x e y eh: " + Math.pow(x, y));
        System.out.println("------------------------------");

		// retorna o logaritímo de e, deberiana
		System.out.println("logaritímo de x eh: " + Math.log(x));
		System.out.println("logaritímo de y eh: " + Math.log(y));
        System.out.println("------------------------------");

		// retorna o logaritímo
		System.out.println("log10 de x eh: " + Math.log10(x));
		System.out.println("log10 de y eh: " + Math.log10(y));
        System.out.println("------------------------------");

		// retorna o logaritímo de x + 1
		System.out.println("log1p de x eh: " + Math.log1p(x));
        System.out.println("------------------------------");

		// retorna a potência de 2
		System.out.println("exp de x eh: " + Math.exp(x));
        System.out.println("------------------------------");

		// retorna (potência de 2)-1
		System.out.println("expm1 de x eh: " + Math.expm1(x));

		// retorna o valor absoluto/módulo (positivo) de x :Math.abs(x)
		System.out.println("Valor absoluto eh: " + Math.abs(x));
        System.out.println("------------------------------");

		// retorna um número aleatório entre 0,0 (inclusive) e 1,0 (exclusivo):
		System.out.println("Números aleatórios entre 0 e 1: " + Math.random());

		// 0 to 100
		System.out.println("Números eleatórios entre 0 e 100: " + Math.random() * 101);

		// retorna o long ou int mais próximo, conforme indicado pelo tipo de retorno do método, para o argumento.
		// menor que 0,4 arredonda para baixo
		// maior que 0.5 arredenda para cima
		System.out.println("Arrendondamento de x: " + Math.round(x));
		
		// arredonda para cima
		System.out.println("Arrendondamento de x: " + Math.ceil(x));
		
		// arredonda para baixo
		// maior valor perto do infinito positivo, valor double
		System.out.println("Arrendondamento de x: " + Math.floor(x));
        System.out.println("------------------------------");
        
		double a = 30;    
        
        // converting values to radian    
        double b = Math.toRadians(a);
        System.out.println("O raio de a: " + a);
        System.out.println(Math.toDegrees(a));
        System.out.println("------------------------------");
          
        // return the trigonometric sine of a      
        System.out.println("Sine value of a is: " +Math.sin(a));    
          
        // return the trigonometric cosine value of a  
        System.out.println("Cosine value of a is: " +Math.cos(a));  
          
        // return the trigonometric tangent value of a  
        System.out.println("Tangent value of a is: " +Math.tan(a));  
        System.out.println("------------------------------");
          
        // return the trigonometric arc sine of a      
        System.out.println("Sine value of a is: " +Math.asin(a));    
          
        // return the trigonometric arc cosine value of a  
        System.out.println("Cosine value of a is: " +Math.acos(a));  
          
        // return the trigonometric arc tangent value of a  
        System.out.println("Tangent value of a is: " +Math.atan(a));  
        System.out.println("------------------------------");
  
        // return the hyperbolic sine of a      
        System.out.println("Sine value of a is: " +Math.sinh(a));    
          
        // return the hyperbolic cosine value of a  
        System.out.println("Cosine value of a is: " +Math.cosh(a));  
          
        // return the hyperbolic tangent value of a  
        System.out.println("Tangent value of a is: " +Math.tanh(a));  
        System.out.println("------------------------------");
		
	}
}
