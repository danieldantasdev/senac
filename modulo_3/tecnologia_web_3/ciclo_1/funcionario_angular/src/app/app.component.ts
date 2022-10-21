import { Component, Input } from '@angular/core';

@Component({
  selector: 'senac-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.sass'],
})
export class AppComponent {
  title = 'funcionario_angular';
  nomeFuncionario: string = 'Priscila Barreto';
}
