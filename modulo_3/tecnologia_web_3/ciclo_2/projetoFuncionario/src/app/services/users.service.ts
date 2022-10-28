import { User } from './../model/user';
import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { environment } from 'src/environments/environment';

@Injectable({
  providedIn: 'root',
})
export class UsersService {
  users: string = 'users';

  constructor(private httpClient: HttpClient) {}

  getAllUsers = () => {
    return this.httpClient.get<User[]>(environment.baseUrl + this.users);
  };
}
