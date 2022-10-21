package colecoes;

import java.util.HashSet;
import java.util.Set;

public class TestaSet1 {
	public static void main(String[] args) {
		Set<String> objeto = new HashSet<String>();
		objeto.add("objeto 1");
		objeto.add("objeto 2");
		objeto.add("objeto 3");
		objeto.add("objeto 4");
		
		System.out.println(objeto);
		System.out.println(objeto.size());
		System.out.println(objeto.spliterator());
		
		for (String object : objeto) {
			String s = object;
			System.out.println(s);
		}
	}
}
	