import { ComponentFixture, TestBed } from '@angular/core/testing';

import { DesignaTecnicoComponent } from './designa-tecnico.component';

describe('DesignaTecnicoComponent', () => {
  let component: DesignaTecnicoComponent;
  let fixture: ComponentFixture<DesignaTecnicoComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ DesignaTecnicoComponent ]
    })
    .compileComponents();
  });

  beforeEach(() => {
    fixture = TestBed.createComponent(DesignaTecnicoComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
