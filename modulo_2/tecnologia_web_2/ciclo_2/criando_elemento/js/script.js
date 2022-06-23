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

/* Form */
const imprimeValor = () => {
    var campoNome = document.getElementById('nome')
    alert(`Seu nome é ${campoNome.value}`)
}

const novoItem = () => {
    var camposForm = document.getElementsByTagName('input')

    var novaLinha = document.createElement('tr')

    for (var i = 0; i < camposForm.length; i++) {
        var novaColuna = document.createElement('td')

        novaColuna.innerHTML = camposForm[i].value

        novaLinha.appendChild(novaColuna)
    }

    var indice = itens.options[itens.selectedIndex].index

    var itemSelecionado = itens.options[itens.selectedIndex].text

    var selecao = document.createElement('td')
    selecao.innerHTML = itemSelecionado
    novaLinha.appendChild(selecao)

    // if (camposForm == undefined) {
    var tabela = document.getElementById('tabela')

    tabela.appendChild(novaLinha)
    // } else {
    //     alert('Preencha os campos')
    // }
}

const validarFormulario = () => {
    let nomePessoa = document.forms['formCadastro']['nome'].value

    let emailPessoa = document.forms['formCadastro']['email'].value

    if (nomePessoa == '' || nomePessoa == undefined) {
        alert('Favor informar seu nome...')
        event.preventDefault()
    } else if (emailPessoa == '' || emailPessoa == undefined) {
        alert('Favor informar seu email...')
        event.preventDefault()
    } else {
        alert(`Olá, ${nomePessoa}, seu email é ${emailPessoa}`)
        event.preventDefault()
    }
}
