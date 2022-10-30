import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormControl, FormGroup, FormGroupDirective, NgForm, Validators } from '@angular/forms';
import { ErrorStateMatcher } from '@angular/material/core';
import { MatSnackBar } from '@angular/material/snack-bar';
import { Router } from '@angular/router';
import { User } from 'src/app/model/user';

@Component({
  selector: 'senac-register',
  templateUrl: './register.component.html',
  styleUrls: ['./register.component.scss'],
})
export class RegisterComponent implements OnInit {

  constructor(
    private _formBuilder: FormBuilder,
    private _snackBar: MatSnackBar,
    private _router: Router
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
  users: User[] = [];

  get formControls() {
    return this.form.controls;
  }

  onSubmit = () => {
    sessionStorage.setItem('KEY_REGISTER', JSON.stringify(this.form.value));
    let user = JSON.parse(`${sessionStorage.getItem('KEY_REGISTER')}`);

    this.isLoading = true;

    if (this.form.valid) {
      const myTimeout = setTimeout(this.loader, 2000);

      this._snackBar.openFromComponent(SnackBarSucessComponent, {
        duration: this.durationInSeconds * 1000,
        horizontalPosition: 'left',
      });
    } else {
      this._snackBar.openFromComponent(SnackBarErrorComponent, {
        duration: this.durationInSeconds * 1000,
        horizontalPosition: 'left',
      });
    }
  };

  loader = () => {
    this._router.navigateByUrl('login');
    this.isLoading = true;
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
