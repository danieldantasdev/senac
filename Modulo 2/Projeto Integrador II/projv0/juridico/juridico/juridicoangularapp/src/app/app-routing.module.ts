import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { AppComponent } from './app.component';
import { ListarEmpresasComponent } from './components/Empresa/listar-empresas/listar-empresas.component';
import { AdicionarEmpresaComponent } from './components/Empresa/adicionar-empresa/adicionar-empresa.component';
import { AtualizarEmpresaComponent } from './components/Empresa/atualizar-empresa/atualizar-empresa.component';
import { ApagarEmpresaComponent } from './components/Empresa/apagar-empresa/apagar-empresa.component';
import { DesignaTecnicoComponent } from './components/Tecnico/designa-tecnico/designa-tecnico.component';
import { ConfirmaDesignacaoTecnicoComponent } from './components/Tecnico/confirma-designacao-tecnico/confirma-designacao-tecnico.component';

const routes: Routes = [
  { path: '', redirectTo: 'designatecnico', pathMatch: 'full' },
  {
    path: 'listarempresas',
    component: ListarEmpresasComponent,
  },
  {
    path: 'adicionarempresa',
    component: AdicionarEmpresaComponent,
  },
  {
    path: 'atualizarempresa',
    component: AtualizarEmpresaComponent,
  },
  {
    path: 'apagarempresa',
    component: ApagarEmpresaComponent,
  },
  {
    path: 'designatecnico',
    component: DesignaTecnicoComponent,
  },
  {
    path: 'confirmadesignacaotecnico',
    component: ConfirmaDesignacaoTecnicoComponent,
  },
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule],
})
export class AppRoutingModule {}
