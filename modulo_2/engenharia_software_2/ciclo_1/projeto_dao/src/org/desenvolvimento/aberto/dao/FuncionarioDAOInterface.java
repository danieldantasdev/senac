package org.desenvolvimento.aberto.dao;

import org.desenvolvimento.aberto.modelo.Funcionario;

public interface FuncionarioDAOInterface { 
    // Cria interface
    // A interface propricia os retornos corretos de cada opera��o.
 
    public Funcionario buscaFuncionario(String id);
 
    public boolean insereFuncionario(Funcionario funcionario);
 
    public boolean updateFuncionario(Funcionario funcionario);
 
    public boolean deletaFuncionario(Funcionario funcionario);
 
    // TODO: Insira outros metodos que voc� deseje que sejam obrigatorios.
}
