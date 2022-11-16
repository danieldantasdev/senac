import { ComprasService } from './services/compras.service';
import { Component } from '@angular/core';

@Component({
  selector: 'senac-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.scss'],
})
export class AppComponent {
  title = 'listaCompras';
  produtos: string[] = ['Banana', 'Nescau', 'Melancia'];
  produtosComprar: string[] = [];

  constructor(private comprasService: ComprasService) {}

  incluirNaListaParaComprar = () => {
    const produto: string = String(this.produtos.shift());
    this.produtosComprar.push(produto);
    this.comprasService.criarProduto(produto);
  };
}
