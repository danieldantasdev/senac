import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';

import { FuncionarioRoutingModule } from './funcionario-routing.module';

@NgModule({
  declarations: [],
  imports: [CommonModule, FuncionarioRoutingModule],
  exports: [FuncionarioRoutingModule],
})
export class FuncionarioModule {}
