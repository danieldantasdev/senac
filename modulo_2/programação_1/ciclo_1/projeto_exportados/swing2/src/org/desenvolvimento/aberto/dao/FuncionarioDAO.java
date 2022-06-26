package org.desenvolvimento.aberto.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
 
import org.desenvolvimento.aberto.conexao.DAConexaoFactory;
import org.desenvolvimento.aberto.modelo.Funcionario;
 
public class FuncionarioDAO implements FuncionarioDAOInterface {
 
    // Cria componentes
    private Connection conn = null;
    private Statement query;
    private String sql;
 
    public FuncionarioDAO() {
 
        // Como o exemplo não possui uma tela de login
        // utilizamos uma adaptação no construtor da classe
        // você pode utilizar um login para que o factory da conexão
        // use a string de conexão completa.
 
        try {
 
            this.conn = DAConexaoFactory
                    .getConexao(1, "eng2", "ads");
        } catch (ClassNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
 
    @Override
    public Funcionario buscaFuncionario(String id) {
 
        // Cria novo objeto
        Funcionario funcionario = new Funcionario();
 
        // Define SQL
        sql = "SELECT * FROM FUNCIONARIOS WHERE ID_FUNCIONARIO = " + id;
 
        try {
 
            // Associa conexão e executa SQL
            query = conn.createStatement();
            ResultSet rs = query.executeQuery(sql);
 
            // Recupera dados do set
            while (rs.next()) {
                funcionario.setId(rs.getInt("ID_FUNCIONARIO"));
                funcionario.setNome(rs.getString("NOME"));
                funcionario.setSobrenome(rs.getString("SOBRENOME"));
                funcionario.setCargo(rs.getString("CARGO"));
                funcionario.setSalario(rs.getDouble("SALARIO"));
            }
 
        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
 
        // Retorna objeto
        return funcionario;
    }
 
    @Override
    public boolean insereFuncionario(Funcionario funcionario) {
 
        // Define SQL
        sql = "INSERT INTO FUNCIONARIOS VALUES (?, ?, ?, ?, ?)";
 
        try {
 
            // Prepara SQL e alimenta parametros
            PreparedStatement query = conn.prepareStatement(sql);
            query.setLong(1, funcionario.getId());
            query.setString(2, funcionario.getNome());
            query.setString(3, funcionario.getSobrenome());
            query.setString(4, funcionario.getCargo());
            query.setDouble(5, funcionario.getSalario());
 
            // Executa SQL
            query.execute();
            query.close();
            return true;
 
        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
 
        return false;
    }
 
    @Override
    public boolean updateFuncionario(Funcionario funcionario) {
 
        // Define SQL
        sql = "UPDATE FUNCIONARIOS SET ID_FUNCIONARIO = ?, NOME = ?, SOBRENOME = ?,"
                + " CARGO = ?, SALARIO = ? WHERE ID_FUNCIONARIO = ?";
 
        try {
 
            // Prepara SQL e alimenta parametros
            PreparedStatement query = conn.prepareStatement(sql);
            query.setLong(1, funcionario.getId());
            query.setString(2, funcionario.getNome());
            query.setString(3, funcionario.getSobrenome());
            query.setString(4, funcionario.getCargo());
            query.setDouble(5, funcionario.getSalario());
            query.setLong(6, funcionario.getId());
 
            // Executa SQL
            query.execute();
            query.close();
            return true;
 
        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
 
        return false;
    }
 
    @Override
    public boolean deletaFuncionario(Funcionario funcionario) {
 
        // Define SQL
        sql = "DELETE FROM FUNCIONARIOS WHERE ID_FUNCIONARIO = ?";
 
        // Prepara SQL e alimenta parametros
        PreparedStatement query;
        try {
            // Executa SQL
            query = conn.prepareStatement(sql);
            query.setLong(1, funcionario.getId());
            query.execute();
            query.close();
 
            return true;
        } catch (SQLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
 
        return false;
 
    }
 
}