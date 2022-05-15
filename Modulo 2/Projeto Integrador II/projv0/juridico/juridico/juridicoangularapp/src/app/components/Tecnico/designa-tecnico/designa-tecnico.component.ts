import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
// import Swiper from 'swiper';
import Swiper, {
  Navigation,
  Pagination,
  Scrollbar,
  Mousewheel,
  Autoplay,
  Manipulation,
  Keyboard,
} from 'swiper';

@Component({
  selector: 'app-designa-tecnico',
  templateUrl: './designa-tecnico.component.html',
  styleUrls: ['./designa-tecnico.component.css'],
})
export class DesignaTecnicoComponent implements OnInit {
  constructor(private router: Router) {}

  ngOnInit(): void {
    const swiper = new Swiper('.swiper', {
      modules: [
        Navigation,
        Pagination,
        Mousewheel,
        Autoplay,
        Scrollbar,
        Keyboard,
        Manipulation,
      ],
      slidesPerView: 2,
      spaceBetween: 10,
      pagination: {
        el: '.swiper-pagination',
        type: 'bullets',
        clickable: true,
      },
      // autoplay: {
      //   delay: 1000,
      // },
      breakpoints: {
        320: {
          slidesPerView: 1,
        },
        480: {
          slidesPerView: 3,
        },
      },
      // Navigation arrows
      navigation: {
        nextEl: '.swiper-button-next',
        prevEl: '.swiper-button-prev',
      },

      // And if we need scrollbar
      scrollbar: {
        el: '.swiper-scrollbar',
      },
      mousewheel: true,
      keyboard: true,
      grabCursor: true,
    });
  }

  public designaTecnico() {
    console.log('Designa tecnico');
  }

  public formDesignaTecnico() {
    console.log('Formulario de designação de tecnico');
  }

  public confirm() {
    console.log('Cancelar');
    this.router.navigate(['/confirmadesignacaotecnico']);
  }
}
