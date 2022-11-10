import { SnackbarService } from './../../../core/services/snackbar/snackbar.service';
import { Component, OnInit } from '@angular/core';
import {
  FormBuilder,
  FormControl,
  FormGroup,
  FormGroupDirective,
  NgForm,
  Validators,
} from '@angular/forms';
import { ErrorStateMatcher } from '@angular/material/core';
import { MatSnackBar } from '@angular/material/snack-bar';
import { Router } from '@angular/router';
import { User } from 'src/app/model/user';

@Component({
  selector: 'senac-login',
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.scss'],
})
export class LoginComponent implements OnInit {
  constructor(
    private _formBuilder: FormBuilder,
    private _snackBar: MatSnackBar,
    private _router: Router,
    private snackbarService: SnackbarService
  ) {}

  ngOnInit(): void {
    this.form = this._formBuilder.group({
      email: ['', Validators.compose([Validators.email, Validators.required])],
      name: ['', Validators.required],
      password: ['', Validators.required],
      perfil: ['', Validators.required],
    });
  }

  form!: FormGroup;
  isLoading: boolean = false;
  durationInSeconds: number = 5;
  users: User[] = [
    {
      email: 'admin@gmail.com',
      name: 'admin',
      password: '1234',
      perfil: 'ADMINISTRADOR',
    },
    {
      email: 'user@gmail.com',
      name: 'user',
      password: '1234',
      perfil: 'USER',
    },
    {
      email: 'funcionario@gmail.com',
      name: 'funcionario',
      password: '1234',
      perfil: 'FUNCIONARIO',
    },
  ];

  get formControls() {
    return this.form.controls;
  }

  onSubmit = async () => {
    sessionStorage.setItem('KEY', JSON.stringify(this.form.value).trim());
    let user = JSON.parse(`${sessionStorage.getItem('KEY')}`);

    this.isLoading = true;

    if (this.form.valid) {
      for (const iterator of this.users) {
        if (
          iterator.email === user.email &&
          iterator.name === user.name &&
          iterator.password === user.password &&
          iterator.perfil === user.perfil
        ) {
          const myTimeout = setTimeout(this.loader, 5000);

          this._snackBar.open('Procurando usuário na base', 'fechar', {
            duration: this.durationInSeconds * 1000,
            horizontalPosition: 'left',
          });

          break;
        } else {
          // this._snackBar.openFromComponent(SnackBarErrorComponent, {
          //   duration: this.durationInSeconds * 1000,
          //   horizontalPosition: 'left',
          // });

          setTimeout(() => {
            this.isLoading = true;
          }, 2000);

          this.snackbarService.onError(
            'Usuário não foi encontrado',
            'fechar',
            3000,
            'left'
          );
        }
      }
    } else {
      // this._snackBar.openFromComponent(SnackBarErrorComponent, {
      //   duration: this.durationInSeconds * 1000,
      //   horizontalPosition: 'left',
      // });

      this.snackbarService.onError(
        'Usuário não foi encontrado',
        'fechar',
        4000,
        'left'
      );
    }
  };

  loaderError = () => {
    this.snackbarService.onError(
      'Usuário não foi encontrado',
      'fechar',
      3000,
      'left'
    );
  };

  loader = () => {
    let user = JSON.parse(`${sessionStorage.getItem('KEY')}`);

    this.isLoading = true;
    // this._snackBar.openFromComponent(SnackBarSucessComponent, {
    //   duration: this.durationInSeconds * 1000,
    //   horizontalPosition: 'left',
    // });

    this.snackbarService.onSucsess(
      `Bem-vindo ao sistema ${user.perfil}`,
      'fechar',
      4000,
      'left'
    );

    this._router.navigateByUrl('home/' + this.form.value.perfil.toLowerCase());
  };

  matcher = new MyErrorStateMatcher();
}

export class MyErrorStateMatcher implements ErrorStateMatcher {
  isErrorState(
    control: FormControl | null,
    form: FormGroupDirective | NgForm | null
  ): boolean {
    const isSubmitted = form && form.submitted;
    return !!(
      control &&
      control.invalid &&
      (control.dirty || control.touched || isSubmitted)
    );
  }
}

@Component({
  selector: 'snack-bar',
  templateUrl: './snack-bar-sucess.html',
  styles: [
    `
      .example-pizza-party {
        color: hotpink;
      }
    `,
  ],
})
export class SnackBarSucessComponent implements OnInit {
  user: any = JSON.parse(`${sessionStorage.getItem('KEY')}`);

  ngOnInit(): void {
    console.log(this.user);
  }
}

@Component({
  selector: 'snack-bar',
  templateUrl: './snack-bar-error.html',
  styles: [
    `
      .example-pizza-party {
        color: hotpink;
      }
    `,
  ],
})
export class SnackBarErrorComponent implements OnInit {
  ngOnInit(): void {}
}
