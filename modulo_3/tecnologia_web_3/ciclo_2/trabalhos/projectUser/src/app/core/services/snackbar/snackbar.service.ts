import { User } from 'src/app/model/user';
import {
  MatSnackBar,
  MatSnackBarHorizontalPosition,
} from '@angular/material/snack-bar';
import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class SnackbarService {
  durationInSeconds: string = '2';
  constructor(private _snackbar: MatSnackBar) {}

  onError = (
    message: string,
    action: string,
    duration: number,
    horizontalPosition: MatSnackBarHorizontalPosition
  ) => {
    this._snackbar.open(message, action, { duration, horizontalPosition });
  };

  onSucsess = (
    message: string,
    action: string,
    duration: number,
    horizontalPosition: MatSnackBarHorizontalPosition
  ) => {
    this._snackbar.open(message, action, { duration, horizontalPosition });
  };
}
