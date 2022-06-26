package org.desenvolvimento.aberto.conexao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DAConexaoFactory {

    // Cria string de conex�o de banco de dados
    private static String conexao;

    // cria conex�es
    // voc� pode alimentar o nome do servidor, porta e banco de dados
    // de alguma configura��o global ou como achar melhor.

    public static Connection getConexao(int fabrica, String usuario,
            String senha) throws ClassNotFoundException, SQLException {

        if (fabrica == 1) {
            conexao = "jdbc:mysql://170.81.168.10:3306/dbfuncionario?useTimezone=true&serverTimezone=America/Sao_Paulo&useSSL=false";
            Class.forName("com.mysql.cj.jdbc.Driver");
        }

        if (fabrica == 2) {
            conexao = "jdbc:derby:net://localhost:50000/deva";
            Class.forName("com.ibm.db2.jcc.DB2Driver");
        }

        if (fabrica == 3) {
            conexao = "jdbc:sqlserver://localhost\\SQLEXPRESS:1433;databaseName=devaberto";
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
        }

        // Retorna driver pronto para login
        return DriverManager.getConnection(conexao, usuario, senha);

    }
}