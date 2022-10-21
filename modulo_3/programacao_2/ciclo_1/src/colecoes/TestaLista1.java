package colecoes;

import java.util.ArrayList;
import java.util.List;

public class TestaLista1 {
	public static void main(String[] args) {
		List lista1 = new ArrayList();
		lista1.add("Daniel");
		lista1.add("Felipe");
		lista1.add("Gabriel");
		lista1.add("Diogo");
		
		System.out.println(lista1.size());
		
		for (int i = 0; i < lista1.size(); i++) {
			System.out.println(lista1.get(i));
			System.out.println(lista1.indexOf("Daniel"));
			System.out.println(lista1.isEmpty());
		}
		lista1.clear();
		System.out.println(lista1);
		System.out.println(lista1.size());
		System.out.println(lista1.isEmpty());
		
//		List<> lista2 = new ArrayList<>();
	}
}
	