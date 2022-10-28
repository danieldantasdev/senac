import { Funcionario } from './../../model/funcionario';
import { Component, EventEmitter, OnInit, Output } from '@angular/core';

@Component({
  selector: 'senac-topo',
  templateUrl: './topo.component.html',
  styleUrls: ['./topo.component.scss'],
})
export class TopoComponent implements OnInit {
  constructor() {}

  ngOnInit(): void {}

  @Output() usuarioEvt = new EventEmitter();

  definindoUsuario = (nome: Funcionario['nome']) => {
    this.usuarioEvt.emit(nome);
  };
}
