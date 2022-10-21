package javaredes;

import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Server {
	public static void main(String[] args) throws IOException {
		//erro de infraestrutura é checked, portanto deve ser tratado
		//erro de regra de negócio é unchecked, portanto não precisa ser tratado
		ServerSocket server = new ServerSocket(10000);
		System.out.println("POsta 10.000 aberta, aguardando conexão, em listener ou haddeler...");
		
		Socket client = server.accept();
		System.out.println("Conexão do cliente: " + client.getInetAddress().getHostAddress());
		
		Scanner s = new Scanner(client.getInputStream());
		
		while(s.hasNextLine()){
			System.out.println(s.nextLine());
		}
		
		s.close();
		client.close();
		server.close();
		
//		server.bind(new InetSocketAddress("192.168.0.1", 0));
		
//		InetAddress inet = server.getInetAddress();
//		System.out.println("HostAddress="+inet.getHostAddress());
//		System.out.println("HostName="+inet.getHostName());
//		System.out.println("Porta = "+server.getLocalPort());
	}
}
