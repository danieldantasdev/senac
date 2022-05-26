var btn = document.getElementById('btn')

var btnClass = document.getElementsByClassName('btn')

var body = document.getElementsByTagName('body')[0]

body.style.margin = '0 auto'
body.style.minHeight = '100vh'
body.style.display = 'flex'
body.style.flexDirection = 'column'
body.style.justifyContent = 'center'
body.style.alignItems = 'center'

body.style.backgroundColor = '#f5f5f5'

btn.style.display = 'flex'
btn.style.justifyContent = 'center'
btn.style.alignItems = 'center'
btn.style.margin = '0 auto'
// btn.style.minHeight = '100vh'
btn.style.width = '200px'
btn.style.height = '200px'
btn.style.backgroundColor = '#00bcd4'
btn.style.borderRadius = '50%'
btn.style.color = 'white'
btn.style.fontSize = '25px'
btn.style.fontWeight = 'bold'
btn.style.cursor = 'pointer'
btn.style.boxShadow = '0 0 10px #00bcd4'
btn.style.border = '2px solid white'

btn.addEventListener('click', () => {
    var nome = window.prompt('Digite seu nome')

    var email = window.prompt('Digite seu email')

    var senha = window.prompt('Digite sua senha')

    var confirmaSenha = window.prompt('Confirme sua senha')

    if (senha === confirmaSenha) {
        alert('Cadastro realizado com sucesso')
    } else {
        alert('Senhas não conferem')
    }

    var nome = document.getElementById('nome')
    var email = document.getElementById('email')
    var senha = document.getElementById('senha')
    var confirmaSenha = document.getElementById('confirmaSenha')

    nome.alert('Nome: ' + nome)
    email.prompt('Email: ' + email)
    senha.value = senha
    confirmaSenha.value = confirmaSenha
})

const conversaoNumero = () => {
    var n1 = Number.parseFloat(window.prompt('Digite o primeiro número'))
    var n2 = Number.parseint(window.prompt('Digite o segundo número'))
    var soma = n1 + n2
    window.alert('A soma dos números é: ' + soma)
}

const conversaoReal = () => {
    var n1 = Numbersoma.parseInt(window.prompt('Digite o primeiro número'))
    var n2 = Number.parseInt(window.prompt('Digite o segundo número'))
    var soma = n1 + n2
    window.alert(
        'A soma dos números é: ' +
            soma.toLocaleString('pt-BR', {
                style: 'currency',
                currency: 'BRL',
                minimumFractionDigits: 2,
            }),
    )
}

var elemento0 = documet.getElementsByTagName('li')[0]
elemento0.style.color = 'red'

var elemento1 = documet.getElementsByTagName('li')[1]
elemento1.style.color = 'blue'

var elemento2 = documet.getElementsByTagName('li')[2]
elemento2.innerText = 'SpringBoot'

var elementoDiv = documet.getElementById('conteudo')
elementoDiv.innerHTML = '<h1>Olá mundo</h1>'

var lista = document.querySelectorAll('.estilo')

for (var i = 0; i < lista.length; i++) {
    lista[i].style.backgroundColor = 'blue'
    lista[i].style.color = 'white'
    lista[i].innerText = lista[i].innerText.toUpperCase()
}

// console.log(nome)

// function button() {
//     var div1 = document.querySelector('.div1')
//     var div2 = document.querySelector('.div2')
//     var div3 = document.querySelector('.div3')

//     div1.style.backgroundColor = 'red'
//     div2.style.backgroundColor = 'green'
//     div3.style.backgroundColor = 'blue'
// }

// window.alert('Minha primeira mensagem')
// window.confirm('Deseja realmente sair?')
// window.prompt('Digite seu nome:')

// function button() {
//     var nome = prompt('Digite seu nome')
//     var email = prompt('Digite seu email')
//     var senha = prompt('Digite sua senha')

//     alert(
//         'Nome: ' +
//             nome.toLocaleUpperCase() +
//             '\n' +
//             'Email: ' +
//             email +
//             '\n' +
//             'Senha: ' +
//             senha,
//     )
// }

