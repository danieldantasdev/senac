import { ComponentFixture, TestBed } from '@angular/core/testing';

import { ConfirmaDesignacaoTecnicoComponent } from './confirma-designacao-tecnico.component';

describe('ConfirmaDesignacaoTecnicoComponent', () => {
  let component: ConfirmaDesignacaoTecnicoComponent;
  let fixture: ComponentFixture<ConfirmaDesignacaoTecnicoComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ ConfirmaDesignacaoTecnicoComponent ]
    })
    .compileComponents();
  });

  beforeEach(() => {
    fixture = TestBed.createComponent(ConfirmaDesignacaoTecnicoComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
