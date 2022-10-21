import { Component, Input, OnInit } from '@angular/core';
import { LoginComponent } from '../../pages/login/login.component';

@Component({
  selector: 'senac-topbar',
  templateUrl: './topbar.component.html',
  styleUrls: ['./topbar.component.scss'],
})
export class TopbarComponent implements OnInit {
  @Input() mostrarMenu: boolean = true;
  showFiller = false;
  events: string[] = [];
  opened: boolean = true;

  shouldRun = /(^|.)(stackblitz|webcontainer).(io|com)$/.test(
    window.location.host
  );

  constructor() {}

  ngOnInit(): void {}
}
