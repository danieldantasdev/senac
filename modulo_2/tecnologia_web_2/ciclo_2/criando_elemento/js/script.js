var lista = document.getElementById('lista')

var item = document.querySelector('#lista li')

item.style.border = '2px solid blue'

const inserirItem = () => {
    const numeroIncrementado = parseInt(lista.childElementCount) + 1

    var item = document.createElement('li')

    item.innerHTML = `item ${numeroIncrementado}`
    lista.appendChild(item)

    item.style.border = '2px solid blue'
}

const removerItem = () => {
    lista.removeChild(lista.lastChild)
}

const mouseOver = () => {
    item.style.backgroundColor = 'red'
}

const mouseOut = () => {
    item.style.backgroundColor = 'transparent'
}
