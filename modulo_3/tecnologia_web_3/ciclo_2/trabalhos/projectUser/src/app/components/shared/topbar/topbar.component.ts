import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'senac-topbar',
  templateUrl: './topbar.component.html',
  styleUrls: ['./topbar.component.scss'],
})
export class TopbarComponent implements OnInit {
  constructor() {}

  ngOnInit(): void {
  }
  user: any = JSON.parse(`${sessionStorage.getItem('KEY')}`);
}
