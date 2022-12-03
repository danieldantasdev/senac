import { Funcionario } from './../model/funcionario';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';

@Injectable({
  providedIn: 'root',
})
export class FuncionarioService {
  constructor(private localStorage: Storage) {}

  listarTodos = () => {
    const funcionarios = this.localStorage.getItem('funcionarios');
    // const funcionarios = this.localStorage['funcionarios'];
    return funcionarios ? JSON.parse(funcionarios) : [];
  };

  cadastrar = (funcionario: Funcionario) => {
    const funcionarios = this.listarTodos();
    funcionario._id = new Date().getTime();
    funcionarios.push(funcionario);
    this.localStorage.setItem('funcionarios', JSON.stringify(funcionarios));
    // this.localStorage['funcionarios'] = JSON.stringify(funcionarios);
  };

  buscarPorId = (idFuncionario: Funcionario['_id']) => {
    const funcionarios: Funcionario[] = this.listarTodos();
    return funcionarios.find((value, index, array) => {
      value._id === idFuncionario;
    });
  };

  atualizar = (funcionario: Funcionario) => {
    const funcionarios: Funcionario[] = this.listarTodos();
    funcionarios.forEach((funcionario, posicao, funcionarios) => {
      if (funcionario._id === funcionario._id) {
        funcionarios[posicao] = funcionario;
      }
    });
  };
}
