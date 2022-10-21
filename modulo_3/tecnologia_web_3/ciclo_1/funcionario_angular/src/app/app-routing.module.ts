import { LoginComponent } from './components/login/login.component';
import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { FuncionarioComponent } from './components/funcionario/funcionario.component';
import { GerenteComponent } from './components/gerente/gerente.component';

const routes: Routes = [
  { path: '', component: LoginComponent },
  { path: 'funcionario', component: FuncionarioComponent },
  { path: 'gerente', component: GerenteComponent },
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule],
})
export class AppRoutingModule {}
