package br.senac.rj.jdbc.conexao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class TesteJdbc {
    public static void main(String[] args) {
        try {
            String url = "jdbc:mysql://localhost:3306/dbhospital";
            String user = "root";
            String password = "010394";

            Connection con = DriverManager.getConnection(url, user, password);
            System.out.println("Conectado com sucesso!");

            String sql = "SELECT * FROM Funcionario";
            PreparedStatement stmt = con.prepareStatement(sql);

            Scanner sc = new Scanner(System.in);
            System.out.println("Digite o nome do funcionário: ");
            int andar = Integer.parseInt(sc.nextLine());
            stmt.setInt(1, andar);

            ResultSet rs = stmt.executeQuery();

            if (!rs.isBeforeFirst()) {
                System.out.println("Nenhum registro encontrado!");
            } else {
                while (rs.next()) {
                    System.out.println("id: " + rs.getInt("codigo_funcionario"));
                    System.out.println("cpf: " + rs.getString("cpf"));
                    System.out.println("nome: " + rs.getString("nome"));
                }
            }
            sc.close();
        } catch (Exception e) {
            System.out.println("Erro: " + e.toString());
        }
    }
}