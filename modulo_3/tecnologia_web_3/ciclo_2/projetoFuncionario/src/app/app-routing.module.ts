import { LoginComponent } from './components/login/login.component';
import { FuncionarioComponent } from './components/funcionario/funcionario.component';
import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';

const routes: Routes = [
  { path: 'funcionario', component: FuncionarioComponent },
  { path: 'login', component: LoginComponent },
  // { path: '**', component: FuncionarioComponent },
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule],
})
export class AppRoutingModule {}
