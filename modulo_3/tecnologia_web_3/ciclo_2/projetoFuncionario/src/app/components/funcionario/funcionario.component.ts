import { Funcionario } from './../../model/funcionario';
import { Component, Input, OnInit } from '@angular/core';
import { formatDate } from '@angular/common';
import {
  FormBuilder,
  FormControl,
  FormGroup,
  NgForm,
  Validators,
} from '@angular/forms';

@Component({
  selector: 'senac-funcionario',
  templateUrl: './funcionario.component.html',
  styleUrls: ['./funcionario.component.scss'],
})
export class FuncionarioComponent implements OnInit {
  form!: FormGroup;

  constructor(private formBuilder: FormBuilder) {}

  ngOnInit(): void {
    this.form = this.formBuilder.group({
      nome: ['', Validators.required],
      isMasculino: ['', Validators.required],
      idade: ['', Validators.required],
    });

    sessionStorage.setItem('KEY', JSON.stringify(this.funcionarios));
  }

  get formControls() {
    return this.form.controls;
  }

  excluir = () => {
    let botao = document.getElementById('button') as HTMLButtonElement;
    botao.addEventListener('click', (e) => {
      e.preventDefault();
    });
    this.funcionarios.pop();
  };

  onSubmit = () => {
    // console.log(form.value);
    // if (form.value) {
    // }
    this.funcionarios.push(this.form.value);
    console.log(this.form.value);
  };

  onChange = () => {
    let inputNome = document.getElementById('nome') as HTMLInputElement;

    inputNome.addEventListener('keyup', () => {
      if (inputNome.checked) {
        inputNome.classList.add('sucess');
      } else {
        inputNome.classList.remove('error');
      }
    });
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
