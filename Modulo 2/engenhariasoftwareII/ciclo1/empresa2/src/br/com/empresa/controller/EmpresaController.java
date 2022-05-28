package br.com.empresa.controller;

import br.com.empresa.model.EmpresaModel;
import br.com.empresa.view.EmpresaView;

public class EmpresaController {

    public void iniciarCadastroEmpresa() {
        EmpresaView empresaView = new EmpresaView(); // chamada para carregar os campos da empresa
        EmpresaModel empresaModel = new EmpresaModel(); // chamada para carregar os campos da empresa

        empresaView.carregarCamposEmpresa();
        validarDadosInseridos(empresaModel);
    }

    public boolean validarDadosInseridos(EmpresaModel empresa) {
        // TODO Auto-generated method stub
        if (empresa.VerificarExistenciaEmpresa()) {
            EmpresaView empresaView = new EmpresaView();
            empresaView.empresaExiste(empresa);
            return false;
        } else {
            EmpresaView empresaView = new EmpresaView();
            empresaView.empresaCadastradaComSucesso(empresa);
            return true;
        }
    }
}
