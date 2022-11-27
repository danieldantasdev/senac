import { ComprasService } from './../../services/compras.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'senac-lista-compras',
  templateUrl: './lista-compras.component.html',
  styleUrls: ['./lista-compras.component.scss'],
})
export class ListaComprasComponent implements OnInit {
  produtos: string[] = [];

  constructor(private comprasService: ComprasService) {
    comprasService.pendente$.subscribe((produtos) => {
      this.produtos.push(produtos);
    });
  }

  ngOnInit(): void {}

  incluirNaListaParaComprar = () => {
    const produto: string = String(this.produtos.shift());
    this.comprasService.colocarCarrinho(produto);
  };

  excluirNaListaParaComprar = () => {
    const produto: string = String(this.produtos.shift());
    this.comprasService.retirarCarrinho(produto);
  };
}
