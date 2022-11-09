import { SharedServiceService } from './../../services/shared-service.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'senac-header',
  templateUrl: './header.component.html',
  styleUrls: ['./header.component.scss'],
})
export class HeaderComponent implements OnInit {
  name: string = '';

  constructor(private sharedService: SharedServiceService) {}

  ngOnInit(): void {}

  onChangeName = () => {
    this.sharedService.changeName(this.name);
  };
}
