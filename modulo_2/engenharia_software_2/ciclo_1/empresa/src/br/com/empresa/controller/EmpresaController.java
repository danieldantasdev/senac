package br.com.empresa.controller;

import br.com.empresa.view.EmpresaView;

public class EmpresaController {

    public void iniciarCadastroEmpresa() {
        EmpresaView empresaView = new EmpresaView(); // chamada para carregar os campos da empresa
        empresaView.carregarCamposEmpresa();
    }
}
