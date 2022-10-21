import { Funcionario } from './../../model/funcionario';
import { Component, Input, OnInit } from '@angular/core';
import { formatDate } from '@angular/common';
import { NgForm } from '@angular/forms';

@Component({
  selector: 'senac-funcionario',
  templateUrl: './funcionario.component.html',
  styleUrls: ['./funcionario.component.scss'],
})
export class FuncionarioComponent implements OnInit {
  constructor() {}

  ngOnInit(): void {}

  excluir = () => {
    let botao = document.getElementById('button') as HTMLButtonElement;
    botao.addEventListener('click', (e) => {
      e.preventDefault();
    });
    this.funcionarios.pop();
  };

  onSubmit = (form: NgForm) => {
    console.log(form.value);
    this.funcionarios.push(form.value);
  };

  funcionarios: Funcionario[] = [
    { nome: 'Daniel', isMasculino: true, idade: 21 },
    { nome: 'Evellin', isMasculino: false, idade: 23 },
    { nome: 'Renata', isMasculino: false, idade: 23 },
    { nome: 'Evellin', isMasculino: false, idade: 23 },
    { nome: 'Evellin', isMasculino: false, idade: 23 },
  ];

  @Input() funcionario!: Funcionario;
}
