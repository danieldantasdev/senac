const listaDiv = document.querySelectorAll('.estilo')

// for (let i = 0; i < listaDiv.length; i++) {
//     listaDiv[i].style.backgroundColor = '#' + Math.floor(Math.random() * 16777215).toString(16)
// }

for (let i = 0; i < listaDiv.length; i++) {
    listaDiv[i].style.backgroundColor = 'blue'
    listaDiv[i].style.color = 'white'
    listaDiv[i].innerText = listaDiv[i].innerText.toUpperCase()
}
