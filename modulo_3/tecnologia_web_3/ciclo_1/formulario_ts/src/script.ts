// const currentTime = () => {
//     let h1 = document.querySelector('.h1')

//     let date: Date = new Date()

//     let hh: number = date.getHours()
//     let mm: number = date.getMinutes()
//     let ss: number = date.getSeconds()

//     hh = hh > 10 ? +0 + hh : hh
//     mm = mm > 10 ? +0 + mm : mm
//     ss = ss > 10 ? +0 + ss : ss

//     let time: string = hh + ':' + mm + ':' + ss
// }

// currentTime()
// setInterval(currentTime, 1000)

// const carregar = (nome: string, sobrenome?: string) => {
//     return `O nome é ${nome} ${sobrenome}`
// }

// carregar('Daniel Abreu')

let nome: HTMLInputElement = document.querySelector('#nome') as HTMLInputElement
let senha: HTMLInputElement = document.querySelector('#senha') as HTMLInputElement
let button: HTMLButtonElement = document.querySelector('#button') as HTMLButtonElement
let ul: HTMLUListElement = document.querySelector('.ul') as HTMLUListElement

button.addEventListener('click', () => {
    console.log(`nome: ${nome.value} senha: ${senha.value}`)

    let li: HTMLLIElement = document.createElement('li')

    li.textContent = `nome: ${nome.value} senha: ${senha.value}`

    ul.appendChild(li)
})

