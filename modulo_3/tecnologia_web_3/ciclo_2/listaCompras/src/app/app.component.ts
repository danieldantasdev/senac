import { ComprasService } from './services/compras.service';
import { Component, OnInit } from '@angular/core';
import { delay } from 'rxjs';

@Component({
  selector: 'senac-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.scss'],
})
export class AppComponent implements OnInit {
  title = 'listaCompras';
  produtos: string[] = ['Banana', 'Nescau', 'Melancia'];
  produtosComprar: string[] = [];

  constructor(private comprasService: ComprasService) {
    this.comprasService.comprado$.subscribe((produto) => {
      this.produtos.push(produto);
    });
  }

  ngOnInit(): void {
    // this.observandoInclusao();
  }

  // observandoInclusao = () => {
  //   this.comprasService.pendente$.subscribe((produto) => {
  //     this.produtosComprar.push(produto);
  //   });
  // };

  incluirNaListaParaComprar = () => {
    const produto: string = String(this.produtos.shift());
    // this.produtosComprar.push(produto);
    this.comprasService.colocarCarrinho(produto);
  };

  // excluirNaListaParaComprar = () => {
  //   const produto: string = String(this.produtos.shift());
  //   this.comprasService.retirarCarrinho(produto);
  // };
}
