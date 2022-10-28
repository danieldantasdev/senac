import { User } from './../../model/user';
import { UsersService } from './../../services/users.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'senac-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.scss'],
})
export class LoginComponent implements OnInit {
  constructor(private userService: UsersService) {}

  users!: User[];

  ngOnInit(): void {
    this.getAllUsers();
  }

  getAllUsers = () => {
    this.userService.getAllUsers().subscribe((users) => {
      this.users = users;
    });
  };
}
