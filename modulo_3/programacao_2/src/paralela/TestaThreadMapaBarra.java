package paralela;

public class TestaThreadMapaBarra {
	//codigo de thread
	public static void main(String[] args) {
		
		DesenhaMapa dMapa = new DesenhaMapa();
//		dMapa.desenhar();
		Thread tMapa = new Thread((Runnable) dMapa);
		tMapa.start();
		
		BarraProgresso bProgr = new BarraProgresso();
//		bProg.progresso();
		Thread tProg = new Thread((Runnable) bProgr);
		tProg.start();
	}	
}
