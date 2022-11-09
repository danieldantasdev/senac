import { Injectable } from '@angular/core';
import { Subject } from 'rxjs/internal/Subject';

@Injectable({
  providedIn: 'root',
})
export class SharedServiceService {
  private nameSource = new Subject<string>();
  nome = this.nameSource.asObservable();

  constructor() {}

  changeName = (name:string) => {
    this.nameSource.next(name);
  }
}
