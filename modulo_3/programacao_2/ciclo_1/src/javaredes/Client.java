package javaredes;

import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class Client {
	public static void main(String[] args) throws UnknownHostException, IOException {
		Socket client = new Socket("127.0.0.1", 10000);
		System.out.println("Cliente conectado ao servidor");
		
		
		Scanner s = new Scanner(System.in);
		PrintStream out = new PrintStream(client.getOutputStream());
		
		while(s.hasNextLine()) {
			out.println(s.nextLine());
		}
		
		System.out.println("Ola");
		
		out.close();
		s.close();
		client.close();
	}	
}
