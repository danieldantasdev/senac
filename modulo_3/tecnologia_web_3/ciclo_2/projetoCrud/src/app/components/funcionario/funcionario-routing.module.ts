import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { FuncionarioComponent } from './funcionario.component';

const routes: Routes = [
  { path: 'funcionario', component: FuncionarioComponent },
  { path: 'funcionario/listar', redirectTo: '/funcionario' },
];

@NgModule({
  imports: [RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class FuncionarioRoutingModule {}
