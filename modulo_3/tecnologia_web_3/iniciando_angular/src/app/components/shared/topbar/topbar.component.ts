import { Component, Input, OnInit } from '@angular/core';
import { LoginComponent } from '../../pages/login/login.component';

@Component({
  selector: 'senac-topbar',
  templateUrl: './topbar.component.html',
  styleUrls: ['./topbar.component.scss'],
})
export class TopbarComponent implements OnInit {
  @Input() mostrarMenu: boolean = true;

  constructor() {}

  ngOnInit(): void {}
}
