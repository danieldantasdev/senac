import { SharedServiceService } from './../../services/shared-service.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'senac-sidebar',
  templateUrl: './sidebar.component.html',
  styleUrls: ['./sidebar.component.scss'],
})
export class SidebarComponent implements OnInit {
  namePassado: string = '';

  constructor(private sharedService: SharedServiceService) {}

  ngOnInit(): void {
    this.sharedService.nome.subscribe((name) => {
      this.namePassado = name;
    });
  }
}
