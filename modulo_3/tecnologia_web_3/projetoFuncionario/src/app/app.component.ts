import { Funcionario } from './model/funcionario';
import { Component } from '@angular/core';

@Component({
  selector: 'senac-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.scss'],
})
export class AppComponent {
  title = 'projetoFuncionario';

  funcionario1: Funcionario = { nome: 'Lucas', isMasculino: true, idade: 56 };
}
