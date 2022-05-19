package controller;

import model.EmpresaModel;
import view.EmpresaView;

public class EmpresaController {

	public void iniciarCadastro() {
		EmpresaView view = new EmpresaView();
		EmpresaModel model = new EmpresaModel();		
		model = view.carregarCamposEmpresa();		
		validarDadosInseridos(model);
	}	
	public boolean validarDadosInseridos(EmpresaModel empresa) {
		if(empresa.VerificarExisteEmpresa()) {
			EmpresaView view = new EmpresaView();
			view.EmpresaExistente();
			return false;
		}else {						
			empresa.AdicionarEmpresa();
			EmpresaView view = new EmpresaView();
			view.EmpresaCadastradaComSucesso();
			return true;
		}
	}
}
