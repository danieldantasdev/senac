package aula_libs;

public class TestaString2 {
	public static void main(String[] args) {
		//split
		//compareTo
		//compareToIgnoreCase
		//toUpperCase
		//toLowerCase
		//charAt
		//length
		//substring
		//trim
		//indexOf
		//lastIndexOf
		//isEmpty
		//contains
		//matches
		//replace
		//replaceAll
		
		
		String a = new String("Daniel");
		String b = new String("Daniel");
		String c = new String("Daniel Abreu");
		String d = new String("Daniel Abreu Dantas");
		
	    //Split using only delimiter
	    String[] arrval = a.split(" ");
	    for(int i=0;i<arrval.length;i++) {
	      System.out.println(arrval[i]);
	    }
		
		//split
		System.out.println("Split: " + a.split("-"));		
        System.out.println("------------------------------");
        
        //compareTo
		System.out.println("Split: " + a.compareTo(d));
        System.out.println("------------------------------");

        String s1 = new String("Java tutorial");
        System.out.println("Comparison of input string with argument is : " + s1.compareTo("C++"));
        System.out.println("Comparison of input string with argument ignoring case is : " + s1.compareToIgnoreCase("JAVA TUTORIAL"));
        System.out.println("Output of contains method: " + s1.contains("tutorial"));
        System.out.println("Output of contentEquals method: " + s1.contentEquals("Java"));
		
	}
}
