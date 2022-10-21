let username: HTMLInputElement = document.querySelector('#username') as HTMLInputElement
let email: HTMLInputElement = document.querySelector('#email') as HTMLInputElement
let password: HTMLInputElement = document.querySelector('#password') as HTMLInputElement
let confirmaSenha: HTMLInputElement = document.querySelector('#confirmaSenha') as HTMLInputElement
let button: HTMLButtonElement = document.querySelector('#button') as HTMLButtonElement

const validaCampos = () => {
    if (username.value == '' || email.value == '' || password.value == '' || confirmaSenha.value == '') {
        alert('Preencha todos os campos')
        return false
    } else if (username.value == '') {
        alert('Preencha seu usuário')
        return false
    } else if (username.value.length < 6) {
        alert('O usuário deve ter no mínimo 6 caracteres')
        return false
    } else if (email.value == '') {
        alert('Preencha seu email')
        return false
    } else if (email.value != '' && !email.value.includes('@')) {
        alert('Email inválido')
        return false
    } else if (password.value != confirmaSenha.value) {
        alert('As senhas não conferem')
        return false
    } else if (password.value.length < 6) {
        alert('A senha deve ter no mínimo 6 caracteres')
        return false
    } else {
        return true
    }
}

// username.addEventListener('keyup', (event) => {
//     if (username.value.length < 3) {
//         username.setCustomValidity('O nome deve conter mais de 3 caracteres')
//     } else {
//         username.setCustomValidity('')
//     }
// })

// email.addEventListener('keyup', (event) => {
//     if (email.value.length < 3) {
//         email.setCustomValidity('O email deve conter mais de 3 caracteres')
//     } else {
//         email.setCustomValidity('')
//     }
// })

// password.addEventListener('keyup', (event) => {
//     if (password.value.length < 3) {
//         password.setCustomValidity('A senha deve conter mais de 3 caracteres')
//     } else {
//         password.setCustomValidity('')
//     }
// })

// confirmaSenha.addEventListener('keyup', (event) => {
//     if (confirmaSenha.value.length < 3) {
//         confirmaSenha.setCustomValidity('A confirmação de senha deve conter mais de 3 caracteres')
//     } else {
//         confirmaSenha.setCustomValidity('')
//     }
// })

button.addEventListener('click', (event) => {
    event.preventDefault()
    // if (username.checkValidity() && email.checkValidity() && password.checkValidity() && confirmaSenha.checkValidity()) {
    // alert('Formulário validado')
    // } else
    if (validaCampos()) {
        if (password.value === confirmaSenha.value) {
            alert('Formulário enviado com sucesso')
        } else {
            alert('Formulário não enviado')
        }
    }
})
