import { Injectable } from '@angular/core';
import { Subject } from 'rxjs';
import { Produto } from '../model/Produto';

@Injectable({
  providedIn: 'root',
})
export class ComprasService {
  private pendenteSource = new Subject<string>();
  private compradoSource = new Subject<string>();

  pendente$ = this.pendenteSource.asObservable();
  comprado$ = this.compradoSource.asObservable();

  constructor() {}

  colocarCarrinho = (produto: string) => {
    this.pendenteSource.next(produto);
  };

  retirarCarrinho = (produto: string) => {
    this.compradoSource.next(produto);
  };
}
